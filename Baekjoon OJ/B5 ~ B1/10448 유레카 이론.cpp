#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
	
	vector<int> v;
	int temp=0;
	for(int i=1;i<=44;i++){
		temp+=i;
		v.push_back(temp);
	}
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int x; scanf("%d",&x);
		bool ok=0;
		for(int i=0;i<44;i++){
			for(int j=i;j<44;j++){
				for(int k=j;k<44;k++){
					if(v[i]+v[j]+v[k]==x)ok=1;
				}
			}
		}
		printf("%d\n",ok);
	}
	
	return 0;
}

