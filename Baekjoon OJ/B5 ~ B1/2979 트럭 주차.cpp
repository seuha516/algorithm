#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int main(){
	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	int t[6];for(int i=0;i<6;i++)scanf("%d",t+i);
	
	int dap=0;
	for(int i=0;i<102;i++){
		int g=0;
		if(i>=t[0]&&i<t[1])g++;
		if(i>=t[2]&&i<t[3])g++;
		if(i>=t[4]&&i<t[5])g++;
		
		if(g==1){
			dap+=a;
		}else if(g==2){
			dap+=b*2;
		}else if(g==3){
			dap+=c*3;
		}
	}
	
	printf("%d",dap);
	
	return 0;
}
