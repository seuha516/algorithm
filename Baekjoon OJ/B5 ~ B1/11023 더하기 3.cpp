#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {
	char s[1000]={0,};
	scanf("%[^\n]",&s);

	int temp=0;
	int dap=0;
	for(int i=0;s[i]!=0;i++){
		if(s[i]!=32){
			temp*=10;
			temp+=(s[i]-48);
			
		}else{
			dap+=temp;
			temp=0;
		}
	}
	printf("%d",dap+temp);

	
	return 0;
}
