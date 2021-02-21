#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	
	int n;scanf("%d",&n);n%=8;if(n==1||n==5)printf("%d",n);if(n==2||n==0)printf("2");
	if(n==3||n==7)printf("3");if(n==4||n==6)printf("4");
	
	return 0;
}
