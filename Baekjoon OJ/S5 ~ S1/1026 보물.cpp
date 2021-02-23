#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstring>

using namespace std;
int num=0;
int main() {
	int t;
	int a[55];
	int b[55];
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=t;i++){
		scanf("%d",&b[i]);
	}
	sort(a+1,a+t+1);
	sort(b+1,b+t+1);
	
	int h=0;
	
	for(int i=1;i<=t;i++){
		h+=a[i]*b[t-i+1];
	}
	printf("%d",h);
	
	return 0;
	
}
