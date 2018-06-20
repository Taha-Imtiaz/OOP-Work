
from audioop import reverse
from operator import itemgetter
list = []
while True:
    s = input("Enter name, age,height")
    if not s:
        break
    else:
        list.append(tuple(s.split(",")))

print (sorted(list, key=itemgetter(0,1,2)))
