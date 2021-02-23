#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int testcase;
	int b[100005]={0,};
	scanf("%d",&testcase);

	for(int i=1;i<=testcase;i++){
		scanf("%d",&b[i]);
	}
    
    int hap[100005]={0,};
    hap[1]=b[1];
    
    for(int j=2;j<=testcase;j++){
        if(hap[j-1]>0){
            hap[j]=hap[j-1]+b[j];
        }else{
            hap[j]=b[j];
        }
    }
    int dap=-1888;
    for(int k=1;k<=testcase;k++){
        dap=max(dap,hap[k]);
    }
    printf("%d",dap);
	
	
	return 0;
}
