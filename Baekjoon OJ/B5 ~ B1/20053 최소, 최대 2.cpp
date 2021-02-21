#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

#define TEST 0

using namespace std;

int main(){
	
	int t; scanf("%d",&t);
	while(t--){
		int x; scanf("%d",&x); int mmin=987654321; int mmax=-987654321;
		while(x--){
			int a; scanf("%d",&a);
			mmin=min(mmin,a); mmax=max(mmax,a);
		}
		printf("%d %d\n",mmin,mmax);
	}	
	
    return 0;
}
