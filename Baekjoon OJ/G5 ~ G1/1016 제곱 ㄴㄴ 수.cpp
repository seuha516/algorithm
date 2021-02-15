#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){	

	long long int sosu[78498]={0};
	int check[1000001]={0};
	
	for(int i=2;i<1000;i++){
		int temp=i+i;
		while(temp<1000001){
			check[temp]=-1;
			temp+=i;
		}	
	}
	int ttt=0;
	for(int i=2;i<1000001;i++){
		if(check[i]==0){
			sosu[ttt++]=i;
		}
	}
	
	long long int a,b;
    scanf("%lld %lld",&a,&b);
   
    int list [1000001]={0,};
   
    for(int i=0;i<78498;i++){
		long long int sq=sosu[i]*sosu[i];
		long long int tx=a%sq; 
		if(tx==0){
			tx=0;
		}else{
			tx=sq-tx;
		}
		while(tx<=b-a){
			list[tx]=-1;
			tx+=sq;
		}
    }
    int dap=0;
	for(int i=0;i<=b-a;i++){
		dap+=list[i];
	}
	dap+=(b-a+1);
	
	printf("%d",dap);
	
    return 0;
}

