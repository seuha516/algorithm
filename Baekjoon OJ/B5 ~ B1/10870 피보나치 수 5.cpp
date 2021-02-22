#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int fib[20000];fib[0]=0;fib[1]=1;
	int n;scanf("%d",&n);
	for(int i=2;i<=n;i++){
		fib[i]=fib[i-2]+fib[i-1];
	}
	printf("%d",fib[n]);
}
