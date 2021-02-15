#include <iostream>
#include <algorithm>
#include <cmath> 

using namespace std;

#define sosubumui 45000 //구할 소수 리스트의 범위 
int number[sosubumui];
int sosulist[sosubumui];
int sosugaesoo=0;
void sosusetting(){
   number[0]=-1; number[1]=-1;
   for(int i=2;i<=sqrt(sosubumui);i++){
      int t=i+i;
      while(t<sosubumui){
         number[t]=-1;      
         t+=i;
      }
   }
   for(int i=0;i<sosubumui;i++){
      if(number[i]==0){
         sosulist[sosugaesoo++]=i;
      }
    }
}
int isitsosu(int a){
   if(a==1) return 0;
   int divided=0;
   for(int i=0;sosulist[i]<=a&&i<sosugaesoo;i++){
      if(a%sosulist[i]==0){
         a/=sosulist[i];
         divided=1; break;
      }
   }
   if(divided&&a==1){
      return 1;
   }else if(!divided){
      return 1;
   }else{
      return 0;
   }
}

long long sqsosu [45000];

long long check(long long n){ //n은 몇번째 제곱 ㄴㄴ수인가? 
	
	long long temp=0;
	
	for(long long i=0;i<4700;i++){
		long long x=sqsosu[i];
		if(x>n) break;
		temp-=(n/x);		
	} 
	
	for(long long i=0;i<60;i++){
		for(long long j=i+1;j<4700;j++){
			long long x=sqsosu[i]*sqsosu[j];
			if(x>n) break;
			temp+=(n/x);
		}
	}
	
	for(long long i=0;i<15;i++){
		for(long long j=i+1;j<50;j++){
			for(long long k=j+1;k<4700;k++){
				long long x=sqsosu[i]*sqsosu[j]*sqsosu[k];
				if(x>n) break;
				temp-=(n/x);
			}
		}
	}
	
	for(long long u=0;u<8;u++){
		for(long long i=u+1;i<12;i++){
			for(long long j=i+1;j<35;j++){
				for(long long k=j+1;k<4700;k++){
					long long x=sqsosu[i]*sqsosu[j]*sqsosu[k]*sqsosu[u];
					if(x>n) break;
					temp+=(n/x);
				}
			}
		}	
	}
	
	for(long long m=0;m<3;m++){
		for(long long u=m+1;u<5;u++){
			for(long long i=u+1;i<8;i++){
				for(long long j=i+1;j<15;j++){
					for(long long k=j+1;k<4700;k++){
						long long x=sqsosu[i]*sqsosu[j]*sqsosu[k]*sqsosu[u]*sqsosu[m];
						if(x>n) break;
						temp-=(n/x);
					}
				}
			}	
		}
	}
	
	temp+=(n/901800900);
	temp+=(n/1542132900);
	
	return n+temp;
}

long long find(int st,int end,long long goal){
	long long mid=((long long)st+(long long)end)/2;
	long long res=check(mid);
	if(res==goal){
		if(check(mid-1)!=goal){
			return mid;
		}else{
			return find(st,mid-1,goal);
		}
	}else if(res>=goal){
		return find(st,mid-1,goal);
	}else{
		return find(mid+1,end,goal);
	}
}

int main(){
	sosusetting();
	for(long long i=0;i<sosugaesoo;i++){
		sqsosu[i]=(long long)sosulist[i]*(long long)sosulist[i];
	}
	long long k; scanf("%lld",&k);
	printf("%lld",find(0,1644934082,k));
	
	return 0;
}

