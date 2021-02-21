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
	int t;scanf("%d",&t);
	double m,p,l,e,r,s,n;
	while(t--){
		int dap=0; int temp;
		scanf("%lf %lf %lf %lf %lf %lf %lf",&m,&p,&l,&e,&r,&s,&n);
		temp=9.23076*pow((26.7-m),1.835);
		dap+=temp;
		temp=1.84523*pow((p-75),1.348);
		dap+=temp;
		temp=56.0211*pow((l-1.5),1.05);
		dap+=temp;
		temp=4.99087*pow((42.5-e),1.81);
		dap+=temp;
		temp=0.188807*pow((r-210),1.41);
		dap+=temp;
		temp=15.9803*pow((s-3.8),1.04);
		dap+=temp;
		temp=0.11193*pow((254-n),1.88);
		dap+=temp;
		printf("%d\n",dap);
	}
	
	return 0;
}



















