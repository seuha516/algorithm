#include <iostream>

using namespace std;

int main(){
	
	int johap[53][53]={0,};
	for(int i=0;i<53;i++){
		johap[i][0]=johap[i][i]=1;
	}
	for(int i=2;i<53;i++){
		for(int j=1;j<=i-1;j++){
			johap[i][j]=(johap[i-1][j-1]+johap[i-1][j])%10007;
		}
	}
	
	int n; scanf("%d",&n); int dap=0;
	if(n<4){printf("0"); return 0;}
	for(int i=1;i<=n/4;i++){
		dap+=(i%2?1:-1)*johap[13][i]*johap[52-4*i][n-4*i]%10007;
		dap%=10007;
	}
	printf("%d",dap<0?dap+10007:dap);
	
	return 0;
}
