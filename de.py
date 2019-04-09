

# Mostafa Sadeghi 


full_arr = []

not_answer = []
while(True):
	n = int(input())
	if (n == 0):
		break;
	new_arr = []
	no_ans = []
	for _ in range(n):
		arr = []
		str_ = input().split(" ")
		arr.append(int(str_[0]))
		for i in range(len(str_)-1):
			arr.append(int(str_[i+1]));
			if int(str_[i+1]) not in no_ans:
				no_ans.append(int(str_[i+1]))

		new_arr.append(arr);

	full_arr.append(new_arr);
	not_answer.append(no_ans)




def find_num_dependency(n, entrys):
	sum =0
	sum +=entrys[n-1][0];
	if entrys[n-1][0]== 0:
		return 0

	
	for i in range(len(entrys[n-1])-1):
		sum += find_num_dependency(entrys[n-1][i+1], entrys)

	return sum

for i in range(len(full_arr)):
	entrys = full_arr[i]
	removes = not_answer[i]
	ans_candidates = []
	print(entrys)
	# print(removes)
	# print(ans_candidates)
	for x in range(1,len()):
		print(x, removes)
		if x not in removes:
			ans_candidates.append(x)
	

	for y in ans_candidates:
		print(find_num_dependency(y,entrys))


	
# entrys = [[1,2],[1,3],[0]]
# ans_candidates = list(range(1,len(entrys)+1))
# removes = [2, 3] 
# for i in ans_candidates:
# 	if i in removes:
# 		ans_candidates.remove(i)

		
# for x in ans_candidates:
# 	print(x)






# for i in range(3):
# 	print(find_num_dependency(i+1))	


# for x in not_answer:
# 	print(x)
