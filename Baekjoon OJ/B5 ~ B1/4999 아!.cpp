#include <iostream>
#include <stack>
#include <cstring>
#include <queue>

using namespace std;

int main(){
	char a[12341]={0,};char b[23123]={0,};
	scanf("%s",&a);scanf("%s",&b);
	if(strlen(a)>=strlen(b)){
		printf("go");
	}else{
		printf("no");
	}
	
	return 0;
}

