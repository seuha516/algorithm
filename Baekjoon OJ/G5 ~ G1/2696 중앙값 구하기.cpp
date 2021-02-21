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

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
		
		int print=1;		
		int n; scanf("%d",&n); printf("%d\n",(n+1)/2);
		multiset<int> ms;
		int fir; scanf("%d",&fir); ms.insert(fir);
		
		printf("%d ",fir);
		if(n==1)continue;
	
		multiset<int>::iterator it=ms.begin();
		int pnt=1;
		
		int past=fir;
		
		for(int i=2;i<=n;i++){
			int x; scanf("%d",&x); ms.insert(x);
			
			if(x<past)it--;
			if(i&1)it++;
		
			if(i&1){
				printf("%d ",*it); print++;
				if(print%10==0)printf("\n");
			}
			past=*it;
		}printf("\n");
	}
	return 0;	
}


