#include <iostream>
#include <algorithm>

int main() {
	int su[4000]={0,};
	su[1]=-1;
	int t;
	for(int i=2;i<=70;i++){
		t=2*i;
		if (su[i]==0){
			while(t<=4000){
				su[t]=-1;
				t+=i;
			}
		}
	}
	
	int sosu[4000]={0,};
	int c=1;
	for(int i=2;i<=4000;i++){
		if(su[i]==0){
			sosu[c++]=i;
		}
	}
	
	int n;
	scanf("%d",&n);
	for(int i=1;sosu[i]!=0;i++){
		while(n%sosu[i]==0){
			printf("%d\n",sosu[i]);
			n/=sosu[i];
		}
		
		
	}
	if(n!=1){
		printf("%d",n);
	}
	
	
	return 0;
}
