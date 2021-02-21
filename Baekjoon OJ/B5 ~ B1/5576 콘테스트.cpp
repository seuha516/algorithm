#include <iostream>
#include <stack>
#include <cstring>
#include <queue>
#include <math.h>
#include <algorithm>

using namespace std;
 

int main(){
	int a[10];int b[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+10);sort(b,b+10);
	printf("%d %d",a[9]+a[8]+a[7],b[9]+b[8]+b[7]);
}

