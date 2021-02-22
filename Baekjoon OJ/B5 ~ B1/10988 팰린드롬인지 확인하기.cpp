#include <iostream>
#include <stack>
#include <cstring>
#include <queue>

using namespace std;
 
int main(){
	char a[123]={0,};char b[123]={0,};
	scanf("%s",&a);
	for(int i=1;i<=strlen(a);i++){
		b[strlen(a)-i]=a[i-1];
	}
	if(strcmp(a,b)==0){
		printf("1");
	}else{
		printf("0");
	}
	
	return 0;
}

