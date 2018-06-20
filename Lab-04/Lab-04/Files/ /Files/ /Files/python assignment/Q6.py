
import  sys
def throws():
    return 5/0

try:
    throws()
except ZeroDivisionError:
    print ("Zero exception!!!!")

finally:
    print ('Infinity is mathematical answer!’)
