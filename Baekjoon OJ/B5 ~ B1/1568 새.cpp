#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

int main() {
	int a,c=0;scanf("%d",&a);
	for(int i=1;1;i++){
		if(i>a){
			i=0;
		}else if(i==a){
			c++;printf("%d",c);break;
		}else{
			c++;a-=i;
		}
	}
	
	return 0;
}
