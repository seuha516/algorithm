#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <deque>

#define TEST 0
#define intmax 2147483647
#define LIMIT 100000

using namespace std;

int cache[105][105][105];

int w(int a,int b,int c){
	
	int &ret=cache[a+52][b+52][c+52];
	if(ret!=-987654321)return ret;
	
	if(a<=0 || b<=0 || c<=0) return ret=1;
	else if(a>20 || b>20 || c>20) return ret=w(20,20,20);
	else if(a<b&&b<c) return ret=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	else return ret=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}

int main(){
	
	for(int i=0;i<105;i++){
		for(int j=0;j<105;j++){
			for(int k=0;k<105;k++){
				cache[i][j][k]=-987654321;
			}
		}
	}
	
	while(1){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		if(a==-1&&b==-1&&c==-1)break;
		printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
	}
	
	
	return 0;	
}




