#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int intpow(int a,int n){
    int t=1;
    for(int i=0;i<n;i++){
      t*=a;
    }
    return t;
}

int main(){

	int TC; scanf("%d",&TC);
	while(TC--){
		int s,k; scanf("%d %d",&s,&k);
		if(k%2==1){
			if(s%2==0) printf("0\n");
			else printf("1\n");
			continue;
		}
		int xx=s%(k+1);
		if(xx==0){
			printf("0\n");
		}else if(xx==1){
			printf("1\n");
		}
		
		bool win[200]={0,}; //1 ¼±°ø½Â, 0 ÈÄ°ø½Â 
		win[1]=1;
		for(int i=2;i<200;i++){
			int ii=i;
			int ok=0; int dd=999;
			for(int j=0;1;j++){
				ii-=intpow(k,j);
				if(ii<0) break;
				if(win[ii]==0){
					ok=1; dd=intpow(k,j);
					break;
				}
				ii+=intpow(k,j);
			}
			if(ok){
				win[i]=1;
				if(i==xx){
					printf("%d\n",dd);
				}
			}else{
				if(i==xx){
					printf("0\n",dd);
				}
			}
		}		
	}
		
	return 0;
}


