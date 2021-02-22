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
	
	int n;scanf("%d",&n);
	char arr[105]={0,}; scanf("%s",arr);
	
	int dap=0;
	for(int i=0;arr[i]!=0;i++){
	dap+=(arr[i]-'A'+1);
	
	}printf("%d ",dap);
}


