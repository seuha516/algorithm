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

char c[5000002];

int main(){
	
	long long n; scanf("%lld %s",&n,c);
	
	long long temp=0; long long dap=0;
	for(int i=0;i<n;i++){
		if(c[i]>='0'&&c[i]<='9'){
			temp*=10; temp+=c[i]-48;
		}else{
			dap+=temp; temp=0;
		}
	}
	dap+=temp;
	
	printf("%lld",dap);
		
	return 0;
}



