#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

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

bool pa(int x){
	string s=to_string(x);
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]) return 0;
	}
	return 1;
}

int main(){
	
	sosu_make(1500000);
	vector<int> p_sosu;
	
	for(int i=0;i<sosu_gaesoo;i++){
		if(pa(sosu[i])) p_sosu.push_back(sosu[i]);
	}
	int n; scanf("%d",&n);
	for(int i=0;i<p_sosu.size();i++){
		if(p_sosu[i]>=n){
			printf("%d",p_sosu[i]); break;
		}
	}
	
	return 0;
}
