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

using namespace std;

int main(){
	
	char c[150]={0,};
	scanf("%s",c);
	
	int d=0; int hap=0;
	for(int i=0;c[i]!=0;i++){
		d*=10;
		if(c[i]==','){
			d/=10;
			hap+=d; d=0;
		}else{
			d+=c[i]-48;
		}
	}
	hap+=(d);
	printf("%d",hap);
	
	return 0;
}

