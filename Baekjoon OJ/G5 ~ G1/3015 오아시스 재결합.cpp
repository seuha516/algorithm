#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<pair<int,int>> s;
	long long answer=0;
	int n; scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x);
		if(s.empty()){
			s.push({x,1}); continue;
		}
		if(x>=s.top().first){
			while(!s.empty()&&s.top().first<x){
				answer+=(long long)s.top().second; s.pop();
			}
			if(s.empty()) s.push({x,1});
			else{
				if(s.top().first==x){
					int t=s.top().second; 
					s.pop(); 
					answer+=(long long)t;
					if(!s.empty()) answer++;
					s.push({x,t+1});
				}else{
					answer++;
					s.push({x,1});
				}
			}
		}else{
			answer++;
			s.push({x,1});
		}
	}	
	printf("%lld",answer);
	return 0;
}
