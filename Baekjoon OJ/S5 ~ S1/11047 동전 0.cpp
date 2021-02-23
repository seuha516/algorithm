#include <iostream>
int n,k;


int main(){
	
	scanf("%d %d",&n,&k);
	int val[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&val[i-1]);
	}
	int st=n-1;
	int count=0;
	while(k!=0){
		while(val[st]<=k){
			k-=val[st];
			count++;

		}
		st--;
	}
	printf("%d",count);
	return 0;
}
