#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

#define sosubumui 160000 //구할 소수 리스트의 범위 
int number[sosubumui];
int sosulist[sosubumui];
int sosugaesoo;
void sosusetting(){
	number[0]=-1; number[1]=-1;
	int sq_sosubumui=sqrt(sosubumui)+1;
	for(int i=2;i<=sq_sosubumui;i++){
    	int t=i+i;
    	while(t<=sosubumui){
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
int isitsosu(long long a){
   if(a==1) return 0; 
   int divided=0;
   for(int i=0;sosulist[i]<=a&&i<sosugaesoo;i++){
      if(a%sosulist[i]==0){
         a/=sosulist[i];
         divided=1; 
		 break;
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

long long sqsosu [160000];

long long check(long long n){ //n은 몇번째 제곱수로 나눠지는 수인가? 
	
	long long temp=0;
	
	for(long long i=0;i<sosugaesoo;i++){
		long long x=sqsosu[i];
		if(x>n) break;
		temp+=(n/x);		
	} 
	
	for(long long i=0;i<78;i++){
		for(long long j=i+1;j<7839;j++){
			long long x=sqsosu[i]*sqsosu[j];
			if(x>n) break;
			temp-=(n/x);
		}
	}
	
	for(long long i=0;i<17;i++){
		for(long long j=i+1;j<61;j++){
			for(long long k=j+1;k<2919;k++){
				long long x=sqsosu[i]*sqsosu[j]*sqsosu[k];
				if(x>n) break;
				temp+=(n/x);
			}
		}
	}
	
	for(long long u=0;u<9;u++){
		for(long long i=u+1;i<15;i++){
			for(long long j=i+1;j<39;j++){
				for(long long k=j+1;k<709;k++){
					long long x=sqsosu[i]*sqsosu[j]*sqsosu[k]*sqsosu[u];
					if(x>n) break;
					temp-=(n/x);
				}
			}
		}	
	}
	
	for(long long m=0;m<5;m++){
		for(long long u=m+1;u<7;u++){
			for(long long i=u+1;i<11;i++){
				for(long long j=i+1;j<21;j++){
					for(long long k=j+1;k<137;k++){
						long long x=sqsosu[i]*sqsosu[j]*sqsosu[k]*sqsosu[u]*sqsosu[m];
						if(x>n) break;
						temp+=(n/x);
					}
				}
			}	
		}
	}
	
	for(long long f=0;f<2;f++){
		for(long long m=f+1;m<3;m++){
			for(long long u=m+1;u<6;u++){
				for(long long i=u+1;i<7;i++){
					for(long long j=i+1;j<9;j++){
						for(long long k=j+1;k<19;k++){
							long long x=sqsosu[i]*sqsosu[j]*sqsosu[k]*sqsosu[u]*sqsosu[m]*sqsosu[f];
							if(x>n) break;
							temp-=(n/x);
						}
					}
				}	
			}
		}
	}
	
	return temp;
}

long long find(long long st,long long end,long long goal){
	long long mid=(st+end)/2;
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
	
	if(k>=8000000000){
		printf("%lld",find((long long)20404000000,(long long)25506000000,k));
	}else if(k>=6000000000){
		printf("%lld",find((long long)15300000000,(long long)20404000000,k));
	}else if(k>=4000000000){
		printf("%lld",find((long long)10000000000,(long long)15300000000,k));
	}else if(k>=2000000000){
		printf("%lld",find((long long)5000000000,(long long)10000000000,k));
	}else{
		printf("%lld",find((long long)0,(long long)5000000000,k));
	}
	
	return 0;
	
}





