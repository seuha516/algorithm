#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>

#define TEST 1

using namespace std;
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int dap=0; 
	
	if(n==1){
		printf("1");
	}else if(n==2){
		if(m>=7) printf("4");
		else if(m>=5) printf("3");
		else if(m>=3) printf("2");
		else printf("1");
	}else{
		if(m==1) printf("1");
		else if(m==2) printf("2");
		else if(m==3) printf("3");
		else if(m==4) printf("4");
		else if(m==5) printf("4");
		else if(m==6) printf("4");
		else if(m==7) printf("5");
		else printf("%d",5+m-7);
	}
	
    return 0;
}
