#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int area[6100][6100];
int sum[6100][6100];

int main(){
	
	int n,p;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b; scanf("%d %d",&a,&b);
		int x=a+b+3020; int y=b-a+3020;
		area[x][y]+=1;
	}
	
	for(int i=1;i<6050;i++){
		for(int j=1;j<6050;j++){
			sum[i][j]=sum[i-1][j]+sum[i][j-1]+area[i][j]-sum[i-1][j-1];
		}
	}
	
	scanf("%d",&p);
	for(int i=0;i<p;i++){
		int a,b; scanf("%d %d",&a,&b);
		int x=a+b+3020; int y=b-a+3020;
		printf("%d\n",sum[x][y]);
	}
	
	return 0;
}
