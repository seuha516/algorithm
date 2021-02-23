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

#define TEST 0

using namespace std;

int johab[202][202];

void johab_make(){
	for(int i=0;i<202;i++){
		johab[i][0]=johab[i][i]=1;
	}
	for(int i=2;i<202;i++){
		for(int j=1;j<i;j++){
			johab[i][j]=min(johab[i-1][j-1]+johab[i-1][j],1000000005);
		}
	}
}

int n,m,k; 

string go(int n,int m,int k){ // 남은 - n개, 남은 o m개 일때 k번째 문자열	
	if(n==0) return string(m,'o');
	if(m==0) return string(n,'-');
	
	if(k<=johab[n+m-1][n-1]){
		return "-"+go(n-1,m,k);
	}else{
		return "o"+go(n,m-1,k-johab[n+m-1][n-1]);
	}
}


int main(){
	
	johab_make();
	
	int TC; scanf("%d",&TC);
	while(TC--){
		scanf("%d %d %d",&n,&m,&k);
		cout << go(n,m,k) << endl;
	}
		
    return 0;
}
