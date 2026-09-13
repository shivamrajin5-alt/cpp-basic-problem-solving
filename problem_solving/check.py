n = int(input("enter the number: "))
count = 0
while(n>0):
    digit = n%10
    if(digit==0):
        count += 1

    n = n//10

print(count)