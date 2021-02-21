#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {

	int a,b;scanf("%d %d",&a,&b);if(a>0&&b>0)printf("1");if(a<0&&b>0)printf("2");if(a<0&&b<0)printf("3");if(a>0&&b<0)printf("4");
	
	return 0;
}
