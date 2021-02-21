#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	queue<int> s;
	for(int i=1;i<=n;i++){
		s.push(i);
	}
	
	while(1){
		
		if(s.size()==1){
			printf("%d",s.front());
			break;
		}
		printf("%d ",s.front());
		s.pop();
		
		if(s.size()==1){
			printf("%d",s.front());
			break;
		}
		
		int t=s.front();
		s.pop();
		s.push(t);
	}
	
	
	return 0;
}
