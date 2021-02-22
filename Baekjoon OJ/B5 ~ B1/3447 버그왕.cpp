#include <iostream>
#include <stack>
using namespace std;

int main() {

	char c; 
	stack <char> s;
	stack <char> ss;
	while(scanf("%c",&c)!=EOF){
		s.push(c);
		
		if(s.size()>2){
			char t1,t2,t3;
			t3=s.top(); s.pop(); 	t2=s.top(); s.pop(); 	t1=s.top(); s.pop(); 
			if(t1=='B'&&t2=='U'&&t3=='G'){
				
			}else{
				s.push(t1);	s.push(t2);	s.push(t3);
			}
			
		}
		
	}
	
	while(!s.empty()){
		ss.push(s.top()); s.pop();
	}
	while(!ss.empty()){
		printf("%c",ss.top()); ss.pop();
	}
		
return 0;}
