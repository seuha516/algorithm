#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>

using namespace std;

int DP[100];
long long fib[1000];

int main(){
	
	fib[0]=fib[1]=1;
	long long n; scanf("%lld",&n);
	
	for(int i=2;i<=80;i++) fib[i]=fib[i-1]+fib[i-2];
	
	while(1){
		for(int i=1;i<=79;i++){
			if(n>fib[i]&&n<fib[i+1]){
				n-=fib[i]; break;
			}else if(n==fib[i]){
				printf("%lld",fib[i]); return 0;
			}
		}	
	}
	
	return 0;
}

