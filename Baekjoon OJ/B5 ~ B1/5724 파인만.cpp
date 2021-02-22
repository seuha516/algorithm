#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
#include <math.h>

using namespace std;
int main() {
	long long a,b,t1,t2;
	while(1){
		scanf("%d",&a);
		if(a==0){
			break;
		}else{
			printf("%lld\n",a*(a+1)*(a+a+1)/6);
		}
	}
	
	return 0;
}
