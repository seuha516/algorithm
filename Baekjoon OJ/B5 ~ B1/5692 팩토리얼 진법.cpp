#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
#include <math.h>

using namespace std;

int main(){
	
	while(1){
		int d; scanf("%d",&d); if(d==0)break;
	
		int t1=d/10000;
		int t2=(d%10000)/1000;
		int t3=(d%1000)/100;
		int t4=(d%100)/10;
		int t5=(d%10);
		
		printf("%d\n",120*t1+24*t2+6*t3+t4+t4+t5);
	
	}
	
	return 0;
}


