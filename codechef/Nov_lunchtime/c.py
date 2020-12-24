t=1
t=int(input())
while t>0:
    x=int(input())
    y=int(input())
    n=int(input())
    ans=0
    for i in n:
        if (x^i)<(i^y):
            ans+=1;
        i+=1
    print(ans)
    t-=1
