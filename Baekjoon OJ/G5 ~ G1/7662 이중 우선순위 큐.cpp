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

using namespace std;

int main(){	

	int test; scanf("%d",&test);

	multiset <int> list;

	while(test--){
		int k;scanf("%d",&k); getchar();
		
		list.clear();
		
		while(k--){
			
			char a;
			int b; 
			scanf("%c %d",&a,&b);
			getchar();
			
			if(a=='I'){
				list.insert(b);				
			}else if(a=='D'){
				if(list.size()==0){
				}else{
					if(b==1){
						list.erase(--list.end());
					}else if(b==-1){
						list.erase(list.begin());
					}
				}
			}
		}
			if(list.size()==0){
				printf("EMPTY\n");
			}else{
				printf("%d %d\n",*(--list.end()),*(list.begin()));
			}
	}
	return 0;
}
 

