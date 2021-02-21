#include <iostream>
#include <stack>
#include <cstring>
#include <queue>

using namespace std;
 

int main(){
	int fib[50];
	fib[0]=0;fib[1]=1;
	for(int i=2;i<50;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}int a;cin >> a;
	printf("%d",fib[a]);

	
	return 0;
}

