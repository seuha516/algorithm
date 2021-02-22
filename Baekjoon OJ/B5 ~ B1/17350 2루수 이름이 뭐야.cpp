#include <iostream>
#include <stack>
#include <cstring>
#include <queue>

using namespace std;

int main(){
	int n;scanf("%d",&n);int aa=0;
	char a[1005][101];
	while(n--){
		scanf("%s",&a[n]);
		if(strcmp(a[n],"anj")==0){
			aa=1;
		}
	}
	if(aa==1){
		printf("构具;");
	}else{
		printf("构具?"); 
	}
	return 0;
}

