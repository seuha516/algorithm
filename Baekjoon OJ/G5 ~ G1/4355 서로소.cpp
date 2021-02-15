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

const double PI = acos(-1); 
typedef complex<double> cpx;

vector<int> sosu;
vector<int> min_soinsoo;
int sosu_gaesoo;
void sosu_make(int N){
	min_soinsoo.assign(2,-1);
	for(int i=2;i<=N;i++) min_soinsoo.push_back(i);
	int sqrtN=(int)(sqrt(N));
	for(int i=2;i<=sqrtN;i++){
		if(min_soinsoo[i]==i){
			for(int j=i*i;j<=N;j+=i){
				if(min_soinsoo[j]==j){
					min_soinsoo[j]=i;
				}
			}
		}
	}
	for(int i=2;i<=N;i++){
		if(min_soinsoo[i]==i) sosu.push_back(i);
	}
	sosu_gaesoo=sosu.size();
}


int main(){
	
	sosu_make(32000);
	
	while(1){
		int x; scanf("%d",&x);
		if(!x)break;
		else if(x==1){
			printf("0\n"); continue;
		} 
		int X=x;
		int dap=0;
		for(int i=0;i<sosu_gaesoo;i++){
			if(x%sosu[i]==0){
				while(x%sosu[i]==0) x/=sosu[i];
				X/=sosu[i]; X*=(sosu[i]-1);
			}
		}
		if(x!=1){
			X/=x; X*=(x-1);	
		}
		printf("%d\n",X);
	} 

	return 0;
}


