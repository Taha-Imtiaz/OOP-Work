
import re
email =input("Enter Email address: ")
regemail=r'^([^@]+)@[^@]+$'
if re.match(regemail,email):
    reg=re.search(regemail,email)
    print(reg.group(1))
