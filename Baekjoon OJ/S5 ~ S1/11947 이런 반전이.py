T=int(input())
while (T):
    T-=1
    x=int(input())
    xx=x
    M=1
    while(x):
        x//=10
        M*=10
    m=M//10
    #print(m,M)
    tt=min(M//2, xx)
    print(tt*(M-1-tt))