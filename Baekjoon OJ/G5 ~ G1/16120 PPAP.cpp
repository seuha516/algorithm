#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;


int main(){
	char c; char t1,t2,t3,t4;
	stack<char> s;
	while(1){
		scanf("%c",&c);
		if(c=='\n'){
			break;
		}else{
			s.push(c);
		}
		
		while(1){
			if(s.size()<4){
				break;
			}else{
				t1=s.top();
				s.pop();
				t2=s.top();
				s.pop();
				t3=s.top();
				s.pop();
				t4=s.top();
				s.pop();
				if(!(t4=='P'&&t3=='P'&&t2=='A'&&t1=='P')){
					s.push(t4);s.push(t3);s.push(t2);s.push(t1);
					break;					
				}else{
					s.push(t1);
				}				
			}
		}		
	}
	if(s.size()==1&&s.top()=='P'){
		printf("PPAP");
	}else{
		printf("NP");
	}
	
	
	return 0;
}
