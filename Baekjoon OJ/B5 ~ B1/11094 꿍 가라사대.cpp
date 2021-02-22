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

int main(){
	
	int TC; scanf("%d",&TC); getchar();
	
	while(TC--){
		
		char c[105]={0,};
		scanf("%[^\n]s",&c);getchar();
		string s=c;
		string ss=s.substr(0,10);
		string x="Simon says";

		if(ss==x){
			cout<<s.substr(10)<<endl;
		}		
	}
	
	return 0;	
}

