#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	int n;
	queue<int> q;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	int c=1,d;
	while(q.size()!=1){
		if(c==1){
			q.pop();	
		}else{
			d=q.front();
			q.pop();
			q.push(d);
		}
		c*=(-1);
	}
	
	printf("%d",q.front());
	
	return 0;
}
