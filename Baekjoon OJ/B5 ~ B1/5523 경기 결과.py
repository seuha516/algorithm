tk=int(input())
aa=0
bb=0
for i in range (tk):
    a,b=map(int,input().split())
    if(a>b):
        aa+=1
    elif(a<b):
        bb+=1
print(aa,bb)