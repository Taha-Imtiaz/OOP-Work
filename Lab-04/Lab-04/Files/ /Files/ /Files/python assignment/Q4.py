
dic={}
string=input("enter any string")
for item in string:
    dic[item]=dic.get(item,0)+1
print('\n'.join(['%s,%i' % (a, b) for a, b in dic.items()]))