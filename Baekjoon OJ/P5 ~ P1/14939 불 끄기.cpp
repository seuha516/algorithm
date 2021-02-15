#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int init_board[10][10]; 

void push(int (*board)[10],int x,int y){
	board[x][y]^=1;
	if(x>0)board[x-1][y]^=1;
	if(y>0)board[x][y-1]^=1;
	if(x<9)board[x+1][y]^=1;
	if(y<9)board[x][y+1]^=1;
}

int go(int (*board)[10]){
	int ret=0;
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			if(board[i-1][j]==1){
				push(board,i,j); ret++;
			}
		}
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(board[i][j]==1) ret=999;
		}
	}
	return ret;
}

int main(){
	
	string s[10];
	for(int i=0;i<10;i++){
		cin >> s[i]; getchar();
		for(int j=0;j<10;j++){
			init_board[i][j]=(s[i][j]=='#'?0:1);
		}
	}
	
	int dap=999;
	
	for(int i=0;i<1024;i++){
		int X=i; int pushed=0; int temp=0;
		int board[10][10];
		for(int i=0;i<10;i++){for(int j=0;j<10;j++)board[i][j]=init_board[i][j];}
		while(X){
			if(X&1){
				pushed++;
				push(board,0,temp);
			}
			X/=2; temp++;
		}
		dap=min(dap,go(board)+pushed);
	}
	
	if(dap>=300)dap=-1;
	cout<<dap;
	
	return 0;
}
