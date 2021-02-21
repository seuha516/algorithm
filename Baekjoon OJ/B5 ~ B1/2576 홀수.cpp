#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int a[7],d=0,t=11151;for(int i=0;i<7;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==1){
			t=min(t,a[i]);
			d+=a[i];
		}
	}
	
	if(d!=0){
		printf("%d\n%d",d,t);
	}else{
		printf("-1");
	}
	
	
	return 0;
}
