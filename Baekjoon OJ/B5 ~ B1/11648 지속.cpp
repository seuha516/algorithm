#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int a;scanf("%d",&a);int t=1;int d=0;
	for(int i=1;1;i++){
		if(a<10){
			break;
		}else{
			while(a!=0){
			t*=a%10;
			a/=10;
		}
		a=t;t=1;
		}
		d=i;
	}
	printf("%d",d);
	
	
	return 0;
}
