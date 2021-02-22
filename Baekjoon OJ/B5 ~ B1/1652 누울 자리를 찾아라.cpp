#include <iostream>
using namespace std;

int main() {
	int n; scanf("%d",&n);
	int arr[105][105]={0,};
	
	for(int i=0;i<n;i++){
		char temp[105]={0,};
		scanf("%s",temp); getchar();
		for(int j=0;j<n;j++){
			if(temp[j]=='.') arr[i][j]=1;
			if(temp[j]=='X') arr[i][j]=0;
		}
	}
	int dap=0;
	for(int i=0;i<=n;i++){
		int temp=0;
		for(int j=0;j<=n;j++){
			temp+=arr[i][j];
			if(arr[i][j]==0){
				if(temp>=2) dap++;
				temp=0;
			}
		}
	}
	int dapp=0;
	for(int i=0;i<=n;i++){
		int temp=0;
		for(int j=0;j<=n;j++){
			temp+=arr[j][i];
			if(arr[j][i]==0){
				if(temp>=2) dapp++;
				temp=0;
			}
		}
	}
	printf("%d %d",dap,dapp);
		
return 0;}
