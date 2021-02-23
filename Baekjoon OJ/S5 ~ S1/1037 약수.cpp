#include <iostream>
#include <algorithm>

int main() {
	int n;
	scanf("%d",&n);
	int b[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i-1]);
	}
	std::sort(b,b+n);
	printf("%d",b[0]*b[n-1]);
	
	
	return 0;
}
