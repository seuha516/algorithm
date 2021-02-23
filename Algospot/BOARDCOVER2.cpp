#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int H, W; char board[11][11];
int R, C; char block[11][11];

int dap=0;
int blanknum;
int blocksize;

vector<vector<pair<int,int> > > block_list;
vector<vector<int> > range;

vector<pair<int,int> >path;


void fill(int n,char brd[11][11],int num,int blanks){
	
	if(blanks<blocksize || n==blanknum-1){dap=max(dap,num); return;}
	if(blanks/blocksize + num <= dap) return;
	if(brd[path[n].first][path[n].second]=='#'){
		fill(n+1,brd,num,blanks); return;
	}
	
	for(int i=0;i<block_list.size();i++){
		
		
		if(path[n].first+range[i][0]>H-1 || path[n].second+range[i][1]<0 || path[n].second+range[i][2]>W-1){
			continue;
		}
		bool ok=1;
		for(int j=0;j<block_list[i].size();j++){
			
			int newx=block_list[i][j].first+path[n].first;
			int newy=block_list[i][j].second+path[n].second;
			if(brd[newx][newy]=='#'){
				ok=0; break;
			}			
		}
		if(ok){
			for(int j=0;j<block_list[i].size();j++){
				brd[block_list[i][j].first+path[n].first][block_list[i][j].second+path[n].second]='#';			
			}
			fill(n+1,brd,num+1,blanks-blocksize);
			for(int j=0;j<block_list[i].size();j++){
				brd[block_list[i][j].first+path[n].first][block_list[i][j].second+path[n].second]='.';			
			}
		}
	}
	
	fill(n+1,brd,num,blanks-1);
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		//초기화 
		block_list.clear();
		path.clear();
		range.clear();
		dap=0;
		blanknum=0;
		
		//입력받기 
		scanf("%d %d %d %d",&H,&W,&R,&C);
		for(int i=0;i<H;i++){scanf("%s",&board[i]); getchar();}
		for(int i=0;i<R;i++){scanf("%s",&block[i]); getchar();}
		
		//블록 표현하기 
		vector<pair<int, int> > express_block,express_block1,express_block2,express_block3;
		int first_x,first_y; bool find=0;
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				if(block[i][j]=='#'){
					if(!find){
						first_x=i; first_y=j; find=1;
					}express_block.push_back(make_pair(i-first_x,j-first_y));
				}
			}
		}
		block_list.push_back(express_block);		
		
		char copy[11][11];
		char copy2[11][11];
		char copy3[11][11];
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				copy3[C-j-1][i]=copy[R-1-i][C-1-j]=copy2[j][R-1-i]=block[i][j];
			}
		}
		
		//블록 90도 회전하기
		find=0;
		for(int i=0;i<C;i++){for(int j=0;j<R;j++){
			if(copy2[i][j]=='#'){
				if(!find){
					first_x=i; first_y=j; find=1;
				}express_block1.push_back(make_pair(i-first_x,j-first_y));
		}}
		}
		bool can_90=0; //90도 회전하면 새로운 도형인가? 
		for(int i=0;i<express_block.size();i++){
			if(express_block1[i]!=express_block[i]){
				can_90=1; break;
			}
		}
		if(can_90) block_list.push_back(express_block1);
	
		//블록 180도 회전하기
		find=0;
		for(int i=0;i<R;i++){for(int j=0;j<C;j++){
			if(copy[i][j]=='#'){
				if(!find){
					first_x=i; first_y=j; find=1;
				}express_block2.push_back(make_pair(i-first_x,j-first_y));
		}}
		}
		bool can_180=0; //180도 회전하면 새로운 도형인가? 
		for(int i=0;i<express_block.size();i++){
			if(express_block2[i]!=express_block[i]){
				can_180=1; break;
			}
		}
		if(can_180) block_list.push_back(express_block2);
		if(can_180){ //블록 270도 회전하기
			find=0;
			for(int i=0;i<C;i++){for(int j=0;j<R;j++){
				if(copy3[i][j]=='#'){
					if(!find){
						first_x=i; first_y=j; find=1;
					}express_block3.push_back(make_pair(i-first_x,j-first_y));
			}}
			}
			block_list.push_back(express_block3);
		}
		//범위 지정 
		for(int i=0;i<block_list.size();i++){
			vector<int> v;
			int b=-99,c=99,d=-99;
			for(int j=0;j<block_list[i].size();j++){
				b=max(b,block_list[i][j].first);
				c=min(c,block_list[i][j].second); d=max(d,block_list[i][j].second);
			}
			v.push_back(b); v.push_back(c); v.push_back(d);
			range.push_back(v);
		}
		//빈칸 개수와 블록 사이즈	
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(board[i][j]=='.'){
					blanknum++;
					path.push_back(make_pair(i,j));
				}
			}
		}
		blocksize=block_list[0].size();
		
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(board[i][j]=='.'){
					fill(0,board,0,blanknum); goto end;
				}
			}
		}
		end:
		printf("%d\n",dap);
	}
	
	return 0;
}
