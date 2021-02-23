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

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int a[20]; int b[20];
		int n, money; scanf("%d %d",&n,&money);
		money/=100;
		vector<pair<int,int> > v;
		for(int i=0;i<n;i++){
			 scanf("%d %d",&a[i],&b[i]); a[i]/=100;		
		}
		
		int temp[205]={0,};
		
		for(int i=0;i<=money;i++){
			int result=0;
			for(int j=0;j<n;j++){
				if(i>=a[j]){
					result=max(result,temp[(i-a[j])%201]+b[j]);
				}
			}
			temp[i%201]=result;
		}		
		printf("%d\n",temp[money%201]);
	}
	
	return 0;	
}
