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

using namespace std;

int main(){	

	int a; scanf("%d",&a);
	int aa=0;
	for(int i=1;1;i++){
		int t=i+i+2;
		t=a-t;
		if(t<2){
			break;
		}
		aa+=t/2;
	}
	printf("%d",aa);
	
	return 0;
}


