#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	stack<int> s;
	int dap[n];
	
	int num;
	
	
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		s.push(num);
	}
	
	stack<int> ss;
	ss.push(1000005);
	
	for(int i=0;i<n;i++){
		if(s.top()<ss.top()){
			if(ss.top()==1000005){
				dap[n-i-1]=-1;
			}else{
				dap[n-i-1]=ss.top();
			}
			ss.push(s.top());
			s.pop();
		}else{
			while(s.top()>=ss.top()){
				ss.pop();
			}
			if(ss.top()==1000005){
				dap[n-i-1]=-1;
			}else{
				dap[n-i-1]=ss.top();
			}
			ss.push(s.top());
			s.pop();
		}
	}
	

	
	for(int i=0;i<n;i++){
		printf("%d ",dap[i]);
	}
	
	return 0;
}

