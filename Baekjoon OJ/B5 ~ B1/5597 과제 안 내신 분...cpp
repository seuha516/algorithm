#include <iostream>
#include <stack>
#include <cstring>
#include <queue>
#include <math.h>
#include <algorithm>

using namespace std;
 
int main(){
	int a[31]={0,};int t;int c=0,d=0;
	for(int i=1;i<29;i++){
		scanf("%d",&t);
		a[t]=1;
	}
	
	for(int i=1;i<31;i++){
		if(a[i]==0){
			if(c==0){
				c=i;
			}else{
				d=i;
			}
		}
	}
	int e=min(c,d);
	int f=max(c,d);
	printf("%d\n%d",c,d);
	
	
	return 0;
	
}

