#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>

using namespace std;

vector <int> how;
bool win[30000];

int main(){
	
	int m,k; 
	scanf("%d %d",&m,&k);
	for(int i=0;i<k;i++){
		int x;scanf("%d",&x);
		win[x]=1;
		how.push_back(x);
	}
	
	for(int i=1;i<30000;i++){
		int temp=1;
		for(int j=0;j<how.size()&&how[j]<=i;j++){
			temp=temp&win[i-how[j]];			
		}
		win[i]=!temp;
	}
	
	int cycle;
	
	for(int i=237;i<2000;i++){
		int no=0;
		for(int j=0;j<i;j++){
			if(win[10000+j]!=win[10000+j+i]){
				no=1; break;
			}
		}
		if(no==0){
			cycle=i; break;
		}
	}
	
	int dap=0;
	int tt=m%cycle; tt+=(cycle*5);
	
	for(int i=tt-cycle+1;i<=tt;i++){
		dap+=(1-win[i]);
	}
	dap*=(m/cycle - 4);
	
	int add=0;
	for(int i=1;i<=tt-cycle;i++){
		add+=(1-win[i]);
	}
	
	dap+=add;
	printf("%d",dap);
	
	
	return 0;	
}


