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
#define LIMIT 52000

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
	
	vector<int> list;
	
	for(int i=0;i<=65;i++){
		for(int j=i+1;1;j++){
			int x=sosu_list[i]*sosu_list[j];
			list.push_back(x);
			if(x>100500)break;
		}
	}
	sort(list.begin(),list.end());
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int x; scanf("%d",&x);
		printf("%d\n",*lower_bound(list.begin(),list.end(),x));
	}
	
	return 0;	
}


