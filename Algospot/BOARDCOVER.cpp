#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

#define TEST 0

using namespace std;

int x_4[4]={-1,1,0,0}; int y_4[4]={0,0,-1,1};
int x_8[8]={-1,-1,-1,0,0,1,1,1}; int y_8[8]={-1,0,1,-1,1,-1,0,1};

bool check(pair<int,int>p,int mode,int h,int w,bool (*arr)[20]){
	int x=p.first+x_8[mode]; int y=p.second+y_8[mode];
	if(x<0||y<0||x>=h||y>=w||arr[x][y]==0) return 0;
	return 1;
}

int go(bool (*arr)[20],int h,int w,int blank_num,pair<int,int> st){
	
	if(st.first==-1)return 0;
	if(!blank_num){
		return 1;
	}
	int ret=0;
	
	while(1){
		if(arr[st.first][st.second]==1) break;
		else if(st.second==w-1){
			st.first++; st.second=0;
		}else{
			st.second++;
		}
		if(st.first>=h){
			return 0;
		}
	}
	
	for(int i=0;i<st.first;i++){
		for(int j=0;j<w;j++){
			if(arr[i][j]==1)return 0;			
		}
	}
	for(int j=0;j<st.second;j++){
		if(arr[st.first][j]==1)return 0;			
	}
	
	int nx,ny;
	if(st.first==h-1&&st.second==w-1){
		nx=-1; ny=-1;
	}else if(st.second==w-1){
		nx=st.first+1; ny=0;
	}else{
		nx=st.first; ny=st.second+1;
	}
	pair<int,int> next_st=make_pair(nx,ny);
	
	if(check(st,4,h,w,arr)&&check(st,6,h,w,arr)){
		arr[st.first][st.second]=arr[st.first][st.second+1]=arr[st.first+1][st.second]=0;
		ret+=go(arr,h,w,blank_num-3,next_st);
		arr[st.first][st.second]=arr[st.first][st.second+1]=arr[st.first+1][st.second]=1;
	}
	if(check(st,4,h,w,arr)&&check(st,7,h,w,arr)){
		arr[st.first][st.second]=arr[st.first][st.second+1]=arr[st.first+1][st.second+1]=0;
		ret+=go(arr,h,w,blank_num-3,next_st);
		arr[st.first][st.second]=arr[st.first][st.second+1]=arr[st.first+1][st.second+1]=1;
	}
	if(check(st,7,h,w,arr)&&check(st,6,h,w,arr)){
		arr[st.first][st.second]=arr[st.first+1][st.second]=arr[st.first+1][st.second+1]=0;
		ret+=go(arr,h,w,blank_num-3,next_st);
		arr[st.first][st.second]=arr[st.first+1][st.second]=arr[st.first+1][st.second+1]=1;
	}
	if(check(st,5,h,w,arr)&&check(st,6,h,w,arr)){
		arr[st.first][st.second]=arr[st.first+1][st.second-1]=arr[st.first+1][st.second]=0;
		ret+=go(arr,h,w,blank_num-3,next_st);
		arr[st.first][st.second]=arr[st.first+1][st.second-1]=arr[st.first+1][st.second]=1;
	}
	
	
	ret+=go(arr,h,w,blank_num,next_st);
	return ret;
	
} 


int main(){
	
	int test_case; scanf("%d",&test_case);
	while(test_case--){
		
		bool board[20][20]={0,}; int h,w; scanf("%d %d",&h,&w); int blank_num=0;
		
		for(int i=0;i<h;i++){
			string s; cin >> s;
			for(int j=0;j<w;j++){
				int x;
				if(s[j]==35) x=0; else x=1; blank_num+=x;
				board[i][j]=x;
			}
		}
		
		if(blank_num%3!=0){	printf("0\n"); continue; }
		
		pair<int,int> st=make_pair(0,0);
		int dap=go(board,h,w,blank_num,st);
		printf("%d\n",dap);
		
	}	
	
	
    return 0;
}
