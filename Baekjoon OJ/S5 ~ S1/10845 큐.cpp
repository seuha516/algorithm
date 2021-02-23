#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	int n;
	int x;
	char in[20];
	queue<int> q;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=0;j<20;j++){
			in[j]=0;
		}
		scanf("%s",&in);
		
		if(strcmp(in,"push")==0){
			scanf("%d",&x);
			q.push(x);
		}else if(strcmp(in,"pop")==0){
			if(q.empty()==1){
				printf("-1\n");
			}else{
				printf("%d\n",q.front());
				q.pop();
			}
		}else if(strcmp(in,"size")==0){
			printf("%d\n",q.size());
		}else if(strcmp(in,"empty")==0){
			printf("%d\n",q.empty());
		}else if(strcmp(in,"front")==0){
			if(q.empty()==1){
				printf("-1\n");
			}else{
				printf("%d\n",q.front());
			}
		}else if(strcmp(in,"back")==0){
			if(q.empty()==1){
				printf("-1\n");
			}else{
				printf("%d\n",q.back());
			}
		}
		
		
		
	}
	
	
	return 0;
}
