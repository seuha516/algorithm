#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define TEST 0

using namespace std;

int isfr(int* fr,int x,int y){
	return fr[min(x,y)*100+max(x,y)];
}

int go(int* fr,int* hasfr,int n,int ret,int st){
	
	int stman=-1;
	for(int i=st;i<n;i++){
		if(!hasfr[i]){
			stman=i; break;
		}
	}
	if (stman==-1)return 1;
	
	for(int i=stman+1;i<n;i++){
		if(!hasfr[i]&&isfr(fr,stman,i)){
			hasfr[i]=1; hasfr[stman]=1;
			ret+=go(fr,hasfr,n,0,st+1);
			hasfr[i]=0; hasfr[stman]=0;
		}
	}
	
	return ret;
}

int main(){
	
	int test_case; scanf("%d",&test_case);
	while(test_case--){
		
		int n,m; scanf("%d %d",&n,&m);
		int fr[1000]={0,}; int hasfr[10]={0,};
		
		for(int i=0;i<m;i++){
			int x,y; scanf("%d %d",&x,&y);
			fr[min(x,y)*100+max(x,y)]=1;
		}
		
		printf("%d\n",go(fr,hasfr,n,0,0));	
	}	
	
    return 0;
}
