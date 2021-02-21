#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {

	int n,t,q=1;scanf("%d",&n);for(int i=1;i<=n;i++){
		scanf("%d",&t);if(t!=i){
			q++;
		}
	} printf("%d",q-1);

	return 0;
}
