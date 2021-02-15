#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>

using namespace std;


int main(){

    long long a,b,k; scanf("%lld %lld %lld",&a,&b,&k);
   
    if(k==0){
    	if(a>0) printf("-1");
    	else printf("0");
    	return 0;
    }else if(a==0){
    	printf("0"); return 0;
    }else if(k%2==0&&a%2==1){
    	printf("-1"); return 0;
	}
	
	long long st,end;
	for(long long i=max(a/k,1LL);i<100001;i++){
		st=a;
		if(i%2==0){
			end=(i-1)*a+i*b;
		}else{
			end=i*a+(i-1)*b;
		}
		long long tt=k*i;
		if(st<=tt && tt<=end && (tt-st)%2==0){
			printf("%lld",i); return 0;
		}
	}
	printf("-1"); 
	
	return 0;
}

