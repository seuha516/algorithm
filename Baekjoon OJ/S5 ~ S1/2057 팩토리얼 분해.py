x=int(input())

if(x==5 or (x>=11 and x<=23)):
    print("NO")
elif(x==0):
    print("NO")
elif(x<=23):
    print("YES")
else:
    t=1
    tt=1
    im=0

    while(1):
        temp=t
        im+=t
        t*=tt
        tt+=1
        if(im>=x):
            im-=temp
            break
    if(temp<=x and x<=im+temp):
        print("YES")
    else:
        print("NO")

