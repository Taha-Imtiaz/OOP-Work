
n=int(input("Enter Number: "))
sum=0.0
for i in range(1,n+1):
    print(float(i)/(i+1))
    sum += float(float(i)/(i+1))
print (sum)
