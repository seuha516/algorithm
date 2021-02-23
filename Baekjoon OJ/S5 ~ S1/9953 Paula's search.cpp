#include <iostream>
using namespace std;

int dap;

int go(int st,int end,int goal){
	int mid=(st+end)/2;
	if(mid==goal){
		return dap;
	}else if(mid>goal){
		dap++;
		return go(st,mid-1,goal);
	}else{
		dap++;
		return go(mid+1,end,goal);
	}
}

int main(){
	while(1){
	int n; scanf("%d",&n); if(!n)break;
	dap=1;
	if(n%2==1){
		dap++; n++;
	}
	n/=2;
	printf("%d\n",go(1,50,n));	
	}
	
return 0;}
