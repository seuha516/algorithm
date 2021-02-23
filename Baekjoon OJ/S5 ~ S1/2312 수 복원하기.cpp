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
#define LIMIT 100000

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
}

int main(){
	
	sosu_making();
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int x; scanf("%d",&x);
		vector<int> v;
		
		for(int i=0;i<sosu_gaesoo;i++){
			int sosu=sosu_list[i];
			if(sosu>x) break;
			while(x%sosu==0){
				v.push_back(sosu);
				x/=sosu;
			}
		}
		
		int nn=1;
		for(int i=0;i<v.size();i++){
			
			if(i==0)continue;
			if(v[i]==v[i-1])nn++;
			else{
				printf("%d ",v[i-1]); printf("%d\n",nn);nn=1;
			}
		}
		printf("%d ",v[v.size()-1]); printf("%d\n",nn);
		
	}
	
	
	return 0;	
}


