#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
#include <math.h>

using namespace std;

int main() {
	long long a,b,t1,t2;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0&&b==0){
			break;
		}else{
			t1=min(a,b);
			t2=max(a,b);
			a=t1;
			b=t2;
			
			printf("%lld\n",a+b);
		}
	}
	
	return 0;
}
