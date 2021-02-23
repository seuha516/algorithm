#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	stack<int> s;
	int input;
	int count=1;
	int no=0;
	char list[300000]={0,};
	int c=0;
	
	for(int i=0;i<n;i++){
		scanf("%d",&input);
		if(s.empty()==1){
			list[c++]='+';
			s.push(count++);
		}
		if (s.top()<input){
			while(s.top()!=input){
				list[c++]='+';
				s.push(count++);
			}
			list[c++]='-';
			s.pop();
		}else if(s.top()==input){
			list[c++]='-';
			s.pop();
		}else{
			no=1;
		}
		
	}
	if(no==1){
		printf("NO");
	}else{
		for(int i=0;list[i]!=0;i++){
			printf("%c",list[i]);
			printf("\n");
		}
	}
	
	
	return 0;
}
