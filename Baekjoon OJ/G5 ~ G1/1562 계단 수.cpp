#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

#define mod 1000000000;

int cache[1024][10][105];
int go(int used,int past,int len){
	int &ret=cache[used][past][len];
	if(ret!=-1) return ret;
	if(len==0){
		if(used==1023) return ret=1;
		else return ret=0;
	}
	ret=0;
	for(int i=0;i<10;i++){
		if(i!=past-1 && i!=past+1) continue;
		ret+=go(used|(1<<i),i,len-1);
		ret%=mod;
	}
	return ret%=mod;
}

int main(){
	memset(cache,-1,sizeof(cache));
	
	int n; scanf("%d",&n);
	int dap=0;
	for(int i=1;i<10;i++){
		dap+=go(1<<i,i,n-1)%mod;
		dap%=mod;
	}
	cout<<dap%mod;
	
	return 0;
}
