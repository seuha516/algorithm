#include <iostream>
using namespace std;

int main(){
	
	bool ok=1;
	int n; scanf("%d",&n);
	int arr[200]={0,};
	for(int i=0;i<n;i++)scanf("%d",arr+i);
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				int a=arr[i],b=arr[j],c=arr[k];
				if((a-b)%c!=0){
					ok=0;
				}
				if((a-c)%b!=0){
					ok=0;
				}
				if((c-b)%a!=0){
					ok=0;
				}
			}
		}
	}
	if(ok){
		printf("yes");
	}else{
		printf("no");
	}
	
	
return 0;}
