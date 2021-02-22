#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>

#define TEST 1

using namespace std;

int main(){
	
	int n,kk; scanf("%d %d",&n,&kk);
	int t=0;
	for(int i=0;i<n+1;i++){
		for(int j=0;j<60;j++){
			for(int k=0;k<60;k++){
				if(i%10==kk||i/10==kk||j/10==kk||j%10==kk||k/10==kk||k%10==kk)t++;
			}
		}
	}
	
	printf("%d",t);
    return 0;
}
