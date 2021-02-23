#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	int n,k;
	queue<int> q;
	scanf("%d %d",&n,&k);
	
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	int c=1,d;
	printf("<");
	while(q.size()!=0){
		for(int i=1;i<k;i++){
			d=q.front();
			q.pop();
			q.push(d);
		}
		printf("%d",q.front());
		q.pop();
		if(q.size()!=0){
			printf(", ");
		}
	}
	printf(">");
	
	return 0;
}
