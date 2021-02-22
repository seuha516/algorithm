#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	int n,m,k;
	int a[100][100];
	int b[100][100];
	int c[100][100];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d ",&a[i][j]);
		}
	}
	scanf("%d %d",&m,&k);
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	int temp=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			temp=0;
			for(int p=0;p<m;p++){
				temp+=a[i][p]*b[p][j];
			}
			c[i][j]=temp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			printf("%d ",c[i][j]);
			
		}
		printf("\n");
	}
	
	
	return 0;
}
