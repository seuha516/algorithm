#include <iostream>
#include <stack>
#include <cstring>
#include <queue>
#include <math.h>

using namespace std;

int main(){
	char a[500]={0,}; int t=5000;
	scanf("%[^\n]",&a);
	for(int i=0;a[i]!=0;i++){
		if(a[i]=='1'){
			t-=500;
		}
		if(a[i]=='2'){
			t-=800;
		}
		if(a[i]=='3'){
			t-=1000;
		}
	}
	printf("%d",t);
	return 0;
}

