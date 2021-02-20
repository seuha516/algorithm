def eea(a,b):
    if(b==0):
        return a,1,0
    g,x,y=eea(b,a%b)
    return g,y,x-(a//b)*y

def go(a,b,s):
    if(a==0 and b==0):
        return s==0
    if(a==0):
        return s%b==0
    if(b==0):
        return s%a==0
    if(a==s or b==s):
        return True

    g,x,y=eea(a,b)
    if(s%g!=0):
        return False
    else:
        x*=s//g
        y*=s
        y=(s-a*x)//b
        for i in range (-g*x//b+1,g*y//a+1):
            if(eea(x+i*b//g,y-i*a//g)[0]==1):
                return True
        return False

a,b,s=map(int,input().split())
print("YES" if go(a,b,s) else "NO")