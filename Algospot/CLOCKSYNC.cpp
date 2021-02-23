#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

#define TEST 0

using namespace std;

void vec_refresh(vector<int>& v){
	for(int i=0;i<16;i++){
		while(v[i]<0){
			v[i]+=4;
		}
	}
}

int main(){
	
	int test_case; scanf("%d",&test_case);
	while(test_case--){
		vector<int> v;
		for(int i=0;i<16;i++){
			int x; scanf("%d",&x); v.push_back(4 - x/3);
		}
		int dap=0; int temp=0;
		
		dap+=v[13]; temp=v[13]; 
		v[3]-=temp; v[4]-=temp; v[5]-=temp; v[9]-=temp; v[13]-=temp;
		vec_refresh(v);
		
		dap+=v[12]; temp=v[12]; 
		v[6]-=temp; v[7]-=temp; v[8]-=temp; v[10]-=temp; v[12]-=temp;
		vec_refresh(v);
		
		dap+=v[11]; temp=v[11]; 
		v[3]-=temp; v[7]-=temp; v[9]-=temp; v[11]-=temp;
		vec_refresh(v);
		
		dap+=v[10]; temp=v[10]; 
		v[4]-=temp; v[10]-=temp; v[14]-=temp; v[15]-=temp;
		vec_refresh(v);
				
		dap+=v[6]; temp=v[6]; 
		v[0]-=temp; v[4]-=temp; v[5]-=temp; v[6]-=temp; v[7]-=temp;
		vec_refresh(v);
		
		dap+=v[7]; temp=v[7]; 
		v[4]-=temp; v[5]-=temp; v[7]-=temp; v[14]-=temp; v[15]-=temp;
		vec_refresh(v);
		
		dap+=v[5]; temp=v[5]; 
		v[3]-=temp; v[4]-=temp; v[5]-=temp; v[1]-=temp; v[2]-=temp;
		vec_refresh(v);
		
		dap+=v[3]; temp=v[3]; 
		v[3]-=temp; v[14]-=temp; v[15]-=temp; 
		vec_refresh(v);
		
		dap+=v[1]; temp=v[1]; 
		v[0]-=temp; v[1]-=temp; v[2]-=temp; 
		vec_refresh(v);
		
		dap+=v[0]; temp=v[0]; 
		v[0]-=temp; v[2]-=temp; v[14]-=temp; v[15]-=temp;
		vec_refresh(v);
		
		for(int i=0;i<16;i++){
			if(v[i]!=0){
				printf("-1\n"); goto R;
			}
		}
		printf("%d\n",dap);
	
		R:
		
		for(int i=0;i<16;i++)v.pop_back();
	}	
	
	
	
    return 0;
}
