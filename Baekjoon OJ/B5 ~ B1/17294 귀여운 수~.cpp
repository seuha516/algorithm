#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	unsigned long long a,b;
	scanf("%llu",&a);
	b=a;
	
	int list[30]={0,};
	for(int i=0;i<30;i++){
		list[i]=-1;
	}
	for (int i=0;a!=0;i++){
		list[i]=a%10;
		a/=10;
	}
	int no=0;
	if(b<100){
		
	}else{
		int t=list[1]-list[0];
		for(int i=2;list[i]!=-1;i++){
			
			if(t!=list[i]-list[i-1]){
				no=1;
			}
		}
	}
	
	if(no==1){
		printf("ÈïÄ©»×!! <(£þ ? £þ)>");
	}else{
		printf("?(?????)?..¡Æ¢½ ²î¿ä¹Ì!!");
	}
	
	return 0;
}
