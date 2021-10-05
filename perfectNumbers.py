num = int(input("Enter a number  "))
for i in range(1,num):
    sum=0
    for j in range(1,i):
        if i%j==0:
            sum=sum+j
    if (sum == i):
        print(i)
    