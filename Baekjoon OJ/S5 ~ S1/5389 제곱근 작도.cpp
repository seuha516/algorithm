#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <complex>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		bool ok=1;
		int x; scanf("%d",&x);
		for(int i=(int)(sqrt(x));i>0;i--){
			if(x%i!=0)continue;
			int a=i; int b=x/i;
			if((a+b)%2==0){
				printf("%d %d\n",(a+b)/2-min(a,b),(a+b)/2); ok=0; break;
			}else continue;
		}
		if(ok)printf("IMPOSSIBLE\n");
		
	}
	
	return 0;
}


