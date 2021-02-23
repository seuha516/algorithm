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

using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	int dap=0;
	for(int i=1;i<=n;i++){
		if(30%(i+1)==0)printf("%d\n",i);
	}
	
	return 0;	
}

