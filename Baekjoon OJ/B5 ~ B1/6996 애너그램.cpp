#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>
#include <functional>
#include <stack>

using namespace std;

int main(){
	
	int a; scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		vector <char> v1; vector <char> v2;  char c1[104]={0,}; char c2[104]={0,};
		scanf("%s %s",c1,c2);
		for(int j=0;c1[j]!=0;j++){
			v1.push_back(c1[j]);
		}
		for(int j=0;c2[j]!=0;j++){
			v2.push_back(c2[j]);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		
		if(v1.size()!=v2.size()){
			printf("%s & %s are NOT anagrams.\n",c1,c2);
		}else{
			int ok=1;
			for(int j=0;j<v1.size();j++){
				if(v1[j]!=v2[j]){
					ok=0;break;
				}
			}
			if(ok){
				printf("%s & %s are anagrams.\n",c1,c2);
			}else{
				printf("%s & %s are NOT anagrams.\n",c1,c2);
			}
		}
	}	
		
	return 0;
}




