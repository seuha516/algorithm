#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int t;scanf("%d",&t);for(int i=0;i<t;i++){
		int a,b;scanf("%d %d",&a,&b);
		printf("%d %d\n",2*b-a,a-b);
	}
	
	return 0;
}
