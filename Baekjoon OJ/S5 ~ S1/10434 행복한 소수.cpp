#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <deque>

#define TEST 0
#define intmax 2147483647
#define LIMIT 10000

using namespace std;

vector<int> sosu_list;
int sosu_gaesoo;
void sosu_making(){
	bool ok[LIMIT]={0,};
	for(int i=2;i<=LIMIT;i++){
		if(ok[i])continue;
		sosu_list.push_back(i);
		for(int j=i;j<=LIMIT;j+=i){
			ok[j]=1;
		}
	}
	sosu_gaesoo=sosu_list.size();
	//if(TEST)showvec(sosu_list,"sosu_list",1);
}
bool isitsosu(int x){
	 vector<int>::iterator iter;
	 iter=find(sosu_list.begin(),sosu_list.end(),x);
	 if(iter==sosu_list.end())return 0;
	 else return 1;
}

int go(int x){
	int ret=0;
	while(x){
		ret+=(x%10)*(x%10);
		x/=10;
	}
	return ret;
}

int main(){
	
	sosu_making();
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
		int a,x; scanf("%d %d",&a,&x);
		
		int ok=0;
		int xx=x;
		for(int i=0;i<1000;i++){
			xx=go(xx);
			if(xx==1){
				ok=1;  break;
			}
		}
		printf("%d %d ",a,x);
		if(ok==1&&isitsosu(x))printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;	
}



