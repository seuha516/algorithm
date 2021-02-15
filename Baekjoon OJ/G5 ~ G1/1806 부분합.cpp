#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main(){
	
	int n,s; scanf("%d %d",&n,&s);
	int arr[100005]={0,};
	
	for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
	
	int st=0, end=0;
	int hap=arr[0];
	int dap=987654321;
	
	while(1){
		if(hap<s){ 
			end++;
			if(end>=n) break;
			hap+=arr[end];
		}else{
			dap=min(dap,end-st+1);
			hap-=arr[st]; st++;
		}
	}
	if(dap==987654321)dap=0;
	cout<<dap;
	
	return 0;
}
