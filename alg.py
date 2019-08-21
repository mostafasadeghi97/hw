import pyfpgrowth

import numpy as np 
import pandas as pd 

def hot_encode(x): 
    if(x<= 0): 
        return 0
    if(x>= 1): 
        return 1
data = pd.read_excel('data.xlsx')
basket_France = (data[data['Country'] =="France"] 
          .groupby(['InvoiceNo', 'Description'])['Quantity'] 
          .sum().unstack().reset_index().fillna(0) 
          .set_index('InvoiceNo')) 

basket_encoded = basket_France.applymap(hot_encode) 
basket_France = basket_encoded

print(type(basket_France))
out = basket_France.to_json(orient='records',lines=True)
print(out)
transactions = [[1, 2, 5],
                [2, 4],
                [2, 3],
                [1, 2, 4],
                [1, 3],
                [2, 3],
                [1, 3],
                [1, 2, 3, 5],
                [1, 2, 3]]


patterns = pyfpgrowth.find_frequent_patterns(transactions, 2)

rules = pyfpgrowth.generate_association_rules(patterns, 0.7)
