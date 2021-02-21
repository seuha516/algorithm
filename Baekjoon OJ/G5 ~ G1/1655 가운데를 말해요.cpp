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
	
	int n; scanf("%d",&n);
	multiset<int> ms;
	int fir; scanf("%d",&fir); ms.insert(fir);
	printf("%d\n",fir);
	if(n==1)return 0;
	
	multiset<int>::iterator it=ms.begin();
	int pnt=1;
	
	int past=fir;
	
	for(int i=2;i<=n;i++){
		int x; scanf("%d",&x); ms.insert(x);
		if(x<past)it--;
		if(i&1)it++;
		printf("%d\n",*it);
		past=*it;
	}
	return 0;	
}

