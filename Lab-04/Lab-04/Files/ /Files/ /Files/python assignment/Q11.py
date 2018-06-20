
import re
value = []
items=[x for x in input("Enter password").split(',')]
for pa in items:
    if len(pa)<6 or len(pa)>12:
        continue
    else:
        pass
    if not re.search("[a-z]",pa):
        continue
    elif not re.search("[0-9]",pa):
        continue
    elif not re.search("[A-Z]",pa):
        continue
    elif not re.search("[$#@]",pa):
        continue
    elif re.search("\s",pa):
        continue
    else:
        pass
    value.append(pa)
print (",".join(value))
