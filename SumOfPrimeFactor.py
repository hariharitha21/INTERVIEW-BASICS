n=int(input())
su=0
arr=[]
for i in range (2,n+1):
    if n%i==0:
        arr.append(i)
for i in arr:
    flag=0
    for j in range (2,int(i)):
        if int(i)%j==0:
            flag=1
            break
    if flag==0:
        if i*i==n:
            su=su+(2*int(i))
            break
        su=su+int(i)
print(su)
