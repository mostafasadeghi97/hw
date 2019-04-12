from django.shortcuts import get_object_or_404
import json
from warehouse.models import Warehouse, Section
from logestic.models import Region
from django.views.decorators.http import require_http_methods
from django.http import JsonResponse



def get_children(data, item_id):
    children = [i for i in data if i["parent"] == item_id]
    for child in children:
        try:
            child["children"] = get_children(data, child["id"])
        except KeyError:
            pass
    return children





@require_http_methods(['GET'])
def get_section(request, section_id):
	section = get_object_or_404(Section, id = section_id)
	try:
		level = int(request.GET.get('level'))
	except:
		level = 5

	if level > 5 or level < section.type:
		return JsonResponse({"message":"enter valid level"}, status=400)

	childs = list(section.get_descendants(include_self=True).filter(type__lte=level).values('id','type','badge','parent'))
	out = childs[0]
	out["children"] = get_children(childs, out["id"])
	address = list(section.get_ancestors().values('id', 'type','badge'))
	
	return JsonResponse({'address':address,'id':section.id,'badge':section.badge,'type':section.type,'children':out}
		,safe=False, status = 200)
