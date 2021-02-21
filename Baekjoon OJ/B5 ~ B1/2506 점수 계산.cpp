#include <iostream>
#include <stack>
#include <cstring>
#include <queue>
#include <math.h>

using namespace std;
 

int main(){
	int n,count=0;scanf("%d",&n);int t;int d=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		if(t==1){
			d+=1+count++;
		}else{
			count=0;
		}
	}
	printf("%d",d);
}

