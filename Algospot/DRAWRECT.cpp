#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int a[6]; for(int i=0;i<6;i++) scanf("%d",&a[i]);
		if(a[0]==a[2]) printf("%d ",a[4]);
		else if(a[0]==a[4]) printf("%d ",a[2]);
		else if(a[4]==a[2]) printf("%d ",a[0]);
		if(a[1]==a[3]) printf("%d\n",a[5]);
		else if(a[1]==a[5]) printf("%d\n",a[3]);
		else if(a[5]==a[3]) printf("%d\n",a[1]);
	}
	
	return 0;
}

