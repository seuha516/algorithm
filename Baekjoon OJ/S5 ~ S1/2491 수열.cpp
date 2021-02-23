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

using namespace std;

vector<int>v;
int n;

int main(){
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x);v.push_back(x);
	}
	
	int dap=0; int temp=1;
	for(int i=1;i<n;i++){
		if(v[i]>=v[i-1]){
			temp++; 
		}else{
			dap=max(dap,temp);
			temp=1;
		}
	}	dap=max(dap,temp);
	int dap2=0; int temp2=1;
	for(int i=1;i<n;i++){
		if(v[i]<=v[i-1]){
			temp2++;
		}else{
			dap2=max(dap2,temp2);
			temp2=1;
		}
	}	dap2=max(dap2,temp2);
	printf("%d",max(dap,dap2));
	
	return 0;	
}



