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
#include <map>
#include <unordered_map>

using namespace std;

int getsize(int x){
	int ret=0;
	while(x){
		ret+=x%2; x/=2;
	}
	return ret;
} 
void show(int x){
	int temp=0;
	while(x){
		if(x%2){
			printf("%d ",temp);
		}
		x/=2;temp++;
	}
} 

int N, Q;
bool board[20][20];

int value[20][20];

int hint_range[400]; //%d번 힌트의 영향주는 칸 수, 채워진 숫자들
int hint_hap[400];
int hint_used[400];

int blanks_hint[20][20][2]; //그 칸에 영향주는 힌트번호 

int can_input[10][46][1025]; //영향주는 칸수, 그 합, 이미 채운것들  >>   넣을수 있는 수들 

bool END=0;

void go(){
	
	if(END)return;	
	
	int temp=99;
	int can=0;
	int x=-1,y=-1;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(value[i][j]==0&&board[i][j]==1){
				int can1=can_input[hint_range[blanks_hint[i][j][0]]][hint_hap[blanks_hint[i][j][0]]][hint_used[blanks_hint[i][j][0]]];
				int can2=can_input[hint_range[blanks_hint[i][j][1]]][hint_hap[blanks_hint[i][j][1]]][hint_used[blanks_hint[i][j][1]]];
				int cannum=can1&can2;
				if(temp > getsize(cannum)){
					temp=getsize(cannum);
					x=i; y=j;
					can=cannum;
				}
			}
		}
	}
	if(x==-1){
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(board[i][j]==0){
					printf("0 ");
				}else{
					printf("%d ",value[i][j]);
				}
			}
			printf("\n");
		}
		END=1;
		return;
	}
	
	if(temp==0) return;
	
	for(int i=1;i<=9;i++){
		if(can&(1<<i)){
			value[x][y]=i;
			hint_used[blanks_hint[x][y][0]] += 1<<i;
			hint_used[blanks_hint[x][y][1]] += 1<<i;
			go();
			hint_used[blanks_hint[x][y][0]] -= 1<<i;
			hint_used[blanks_hint[x][y][1]] -= 1<<i;
			value[x][y]=0;
		}		
	}
}


void make_can_input(){ 
	for(int i=0;i<=1022;i+=2){
		int len=0, hap=0;		
		int temp=0; int ii=i;
		while(ii){
			if(ii&1){
				len++; hap+=temp;
			}
			ii/=2;	temp++;
		}	
		for(int j=0;j<=1022;j+=2){
			if((i&j)==j){
				can_input[len][hap][j]|=(i&(~j));
			}
		}
	}	
}

int main(){
	
	make_can_input();
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		//초기화
		memset(value,0,sizeof(value)); 
		memset(blanks_hint,0,sizeof(blanks_hint));
		END=0;
		
		//입력 
		scanf("%d",&N);
		for(int i=0;i<N;i++){for(int j=0;j<N;j++){scanf("%d",&board[i][j]);}}
		scanf("%d",&Q);
		for(int i=0;i<Q;i++){
			int x,y,type,sum; scanf("%d %d %d %d",&x,&y,&type,&sum); x--; y--;
			int temp=1;
			for(temp=1;board[x+type*temp][y+(1-type)*temp]==1;temp++){
				blanks_hint[x+type*temp][y+(1-type)*temp][type]=i;
			}
			hint_range[i]=temp-1;
			hint_hap[i]=sum;
			hint_used[i]=0;
		}

		go();
	}
	
	return 0;
}
