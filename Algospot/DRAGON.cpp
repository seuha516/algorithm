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
#define LIMIT 10000

using namespace std;

int nth_string_length[30];

void gogo(int n){
	if(n==0)nth_string_length[n]=2;
	else{
		nth_string_length[n]=nth_string_length[n-1]*2+1;
	}
}
string basic[2]={"FX","FX+YF"};

char finding(int n,int p){ //nth 드래곤커브의 p번째 글자는? 
	if(n<=1){
		return basic[n][p-1];
	}
	
	if(p<=nth_string_length[n-1]){
		return finding(n-1,p);
	}else if(p==nth_string_length[n-1]+1){
		return '+';
	}else if(p==nth_string_length[n-1]+1+nth_string_length[n-2]+1){
		return '-';
	}else{
		return finding(n-1,p-nth_string_length[n-1]-1);
	}
}

int main(){
	
	for(int i=0;i<30;i++){
		gogo(i);
	}
	int TC; scanf("%d",&TC);

	while(TC--){
		int n,p,l; scanf("%d %d %d",&n,&p,&l);
		if(n<=1){
			cout << basic[n].substr(p-1,l) << endl;
			continue;
		}
		if(n>=30) n=29;
		
		for(int i=p;i<p+l;i++){
			printf("%c",finding(n,i));
		}printf("\n");		
	}
	
	return 0;	
}
