#include <iostream>
#include <math.h>
#include <algorithm>
#include <stack>

int main(){
	int n;
	int list[33][33]={0,};
	int k;
	int t;
	scanf("%d",&t);
	for(int y=0;y<t;y++){
		for(int u=0;u<32;u++){
			for(int g=0;g<32;g++){
				list[u][g]=0;
			}
		}
		scanf("%d %d",&k,&n);\
		for(int i=0;i<=31;i++){
			for (int j=0;j<=i;j++){
				if(j==0||j==i){
					list[i][j]=1;
				}else{
					list[i][j]=list[i-1][j-1]+list[i-1][j];
				}
			}
		}
	printf("%d\n",list[n][k]);
	}
	return 0;
}
