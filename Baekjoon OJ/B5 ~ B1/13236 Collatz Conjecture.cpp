#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

#define TEST 0

using namespace std;

int main(){
	
	int t; scanf("%d",&t);
	while((t-1)){
		printf("%d ",t);
		if(t&1){
			t*=3;t++;
		}else{
			t/=2;
		}
	}printf("1");
	
    return 0;
}
