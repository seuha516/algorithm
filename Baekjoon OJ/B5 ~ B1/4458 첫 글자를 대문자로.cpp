#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int n;
	char a[50];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<50;j++){
			a[j]=0;
		}
		scanf(" %[^\n]",&a);
		for(int j=0; a[j]!=0;j++){
			if(j==0){
				if(a[j]<95){
					printf("%c",a[j]);
				}else{
					printf("%c",a[j]-32);
				}
				
			}else{
				printf("%c",a[j]);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
