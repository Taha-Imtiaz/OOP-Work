
class Shape(object):
    def __init__(self):
        pass

    def a(self):

        return 0

class Square(Shape):
    def __init__(self, l):
        Shape.__init__(self)
        self.length = l


    def a(self):
        return self.length*self.length
aSquare= Square (int(input("Enter Length: ")))
print (aSquare.a())
