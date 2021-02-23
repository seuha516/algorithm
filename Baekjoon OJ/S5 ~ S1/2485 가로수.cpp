#include <iostream>
#include <string>
#include <vector>

#define TEST 0

using namespace std;

int GCD(int a,int b){
	int t=a%b;
	if(t==0)return b;
	else return GCD(b,t);	
}
void showvec(vector<int>& v){
	if(!TEST) return;
	for(int i=0;i<v.size();i++){
		printf("%d ",v[i]);
	}printf("\n");
}

int main(){
	
	int n; scanf("%d",&n);
	vector <int> v; int temp=0; int gcd;
	
	scanf("%d",&temp);
	for(int i=1;i<n;i++){
		int x;scanf("%d",&x);
		v.push_back(x-temp); temp=x;
	}showvec(v);
	
	gcd=v[0];
	for(int i=0;i<v.size()-1;i++){
		gcd=GCD(gcd,v[i+1]);
	}
	
	int dap=0;
	for(int i=0;i<v.size();i++){
		dap+=v[i]/gcd -1;
	}printf("%d",dap);
	
	
    return 0;
}
