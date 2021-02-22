#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int co=1;char a[10840];scanf("%[^\n]",&a);for(int i=0;a[i]!=0;i++){
		if(co==1){
			if(a[i]=='U'){
				co++;
			}
		}
		if(co==2){
			if(a[i]=='C'){
				co++;
			}
		}
		if(co==3){
			if(a[i]=='P'){
				co++;
			}
		}
		if(co==4){
			if(a[i]=='C'){
				co++;
				break;
			}
		}
	}
	if(co==5){
		printf("I love UCPC");
	}else{
		printf("I hate UCPC");
	}

	return 0;
}
