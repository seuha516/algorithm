#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int a[1000000];
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		printf("%d\n",a[n-i-1]);
	}
	
	
	return 0;
	
}
