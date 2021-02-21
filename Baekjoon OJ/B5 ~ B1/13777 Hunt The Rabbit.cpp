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
using namespace std;

int main(){
	
	while(1){
		int a;scanf("%d",&a); if(!a)break;
		int st=1,end=50;
		while(1){
			int mid=(st+end)/2;
			printf("%d ",mid);
						if(mid==a){
				break;
			}else if(mid>a){
				end=mid-1;
			}else{
				st=mid+1;
			}
		}
		printf("\n");
	}

	return 0;
}



