#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	long long a,b,c,d,t;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	t=1;
	while(t<=b){
		t*=10;
	}
	//printf("%d\n",t);
	a*=t;
	
	t=1;
	while(t<=d){
		t*=10;
	}
	c*=t;
	//printf("%d\n",t);
	printf("%lld",a+b+c+d);
	
	return 0;
}
