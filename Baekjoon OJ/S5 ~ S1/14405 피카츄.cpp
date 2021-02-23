#include <iostream>
#include <stack>
#include <cstring>
#include <queue>

using namespace std;
int main(){
	stack<char> s;
	char a[5008];
	char t;
	scanf("%s",&a);
	for(int i=0;a[i]!=0;i++){
		s.push(a[i]);
	}
	 
	int no=0;
	
	
	while(!s.empty()){
		if(s.top()=='i'){
			s.pop();
			if(s.empty()){
		no=1;break;
	}
			if(s.top()=='p'){
				s.pop();
			}else{
				no=1;break;
			}
		}
		
		else if(s.top()=='a'){
			s.pop();
			if(s.empty()){
		no=1;break;
	}
			if(s.top()=='k'){
				s.pop();
			}else{
				no=1;break;
			}
		}
		
		else if(s.top()=='u'){
			s.pop();
			if(s.empty()){
		no=1;break;
	}
			if(s.top()=='h'){
				s.pop();
				if(s.empty()){
		no=1;break;
	}
				if(s.top()=='c'){
				s.pop();
				}else{
					no=1;break;
				}
			}else{
				no=1;break;
			}
		}else{
			no=1;break;
		}
	}
	
	
	if(no==0){
		printf("YES");
	}else{
		printf("NO");
	}
	
	return 0;
}

