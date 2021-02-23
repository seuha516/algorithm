#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define TEST 0

using namespace std;

int x_8[8]={-1,-1,-1,0,0,1,1,1};
int y_8[8]={1,0,-1,1,-1,1,0,-1};
int ok[10];
int target_num;
vector<string> v;
char arr[5][5];

void check(int x,int y,int mode,int n){
	if(x<0||x>4||y<0||y>4)return;
	for(int i=0;i<target_num;i++){
		if(mode!=-1 && i!=mode)continue;
		if(ok[i])continue;	
		if(v[i][n]==arr[x][y]){
			if(n==v[i].length()-1){
				ok[i]=1;
			}else{
				for(int j=0;j<8;j++){
					check(x+x_8[j],y+y_8[j],i,n+1);
				}
			}
			
			
		}
	}
	
}

int smallcheck(char a, char b){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr[i][j]==a){
				for(int k=0;k<8;k++){
					int xx=i+x_8[k]; int yy=j+y_8[k]; if(xx<0||xx>4||yy<0||yy>4)continue;
					if(arr[xx][yy]==b){
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int main(){
	
	int test_case; scanf("%d",&test_case);
	while(test_case--){
		for(int i=0;i<5;i++){
			string s; cin >> s;
			for(int j=0;j<5;j++){
				arr[i][j]=s[j];
			}
		}
		
		scanf("%d",&target_num);
	
		for(int i=0;i<target_num;i++){
			string ss; cin >> ss; v.push_back(ss); 
			int sslen=ss.length(); if (sslen==1)continue;
			for(int j=0;j<sslen-1;j++){
				if(!smallcheck(ss[j],ss[j+1])){
					ok[i]=-1; break;
				}
			}
		}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				check(i,j,-1,0);
			}
		}
		for(int i=0;i<target_num;i++){
			cout << v[i];
			if(ok[i]==1)printf(" YES");
			else printf(" NO");
			printf("\n");
		}
		while(target_num--){
			v.pop_back();
			ok[target_num-1]=0;
		}
	}	
	
    return 0;
}
