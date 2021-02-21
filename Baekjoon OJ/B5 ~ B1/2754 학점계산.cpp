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
using namespace std;


int main(){	
	char c[2]; scanf("%s",c);float d=0;
	if(c[0]=='A'){
		d=4;
	}else if(c[0]=='B'){
		d=3;
	}else if(c[0]=='C'){
		d=2;
	}else if(c[0]=='D'){
		d=1;
	}else{
		d=0;
	}
	if(c[1]=='+'){
		d+=0.3;
	}else if(c[1]=='0'){
		
	}else if(c[1]=='-'){
		d-=0.3;
	}
	printf("%0.1f",d);

}

