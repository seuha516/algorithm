#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	
	int n; scanf("%d",&n); int arr[304][304]={0,};
	
	if(n%2==1){
		arr[n-1][n/2]=1;
		int x=n-1; int y=n/2;
		for(int i=0;i<n*n-1;i++){
			x++; y++;
			if(x>=n) x-=n;
			if(y>=n) y-=n;
			if(x==n&&y==n){
				x--; y--;
				if(x<0) x+=n;
				if(y<0) y+=n;
				x--;
				if(x<0) x+=n;
			}
			
			if(arr[x][y]==0){
				arr[x][y]=i+2;
			}else{
				x--; y--;
				if(x<0) x+=n;
				if(y<0) y+=n;
				x--;
				if(x<0) x+=n;
				arr[x][y]=i+2;
			}
		}
	}else if(n%4==0){
		int temp1[304][304]; int temp2[304][304]; int d=1;
		bool ok[304][304]={0,};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				temp1[i][j]=d; temp2[i][j]=n*n-d+1; d++;
				if(i%4==0||i%4==3){
					if(j%4==0||j%4==3) ok[i][j]=1;
					else ok[i][j]=0;
				}else{
					if(j%4==0||j%4==3) ok[i][j]=0;
					else ok[i][j]=1;	
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(ok[i][j])arr[i][j]=temp1[i][j];
				else arr[i][j]=temp2[i][j];
			}
		}
	}else{
		for(int t=0;t<4;t++){
			int hold[304][304]={0,}; int nn=n/2;	
			hold[nn-1][nn/2]=1;
			int x=nn-1; int y=nn/2;
			for(int i=0;i<nn*nn-1;i++){
				x++; y++;
				if(x>=nn) x-=nn;
				if(y>=nn) y-=nn;
				if(x==nn&&y==nn){
					x--; y--;
					if(x<0) x+=nn;
					if(y<0) y+=nn;
					x--;
					if(x<0) x+=nn;
				}
				if(hold[x][y]==0){
					hold[x][y]=i+2;
				}else{
					x--; y--;
					if(x<0) x+=nn;
					if(y<0) y+=nn;
					x--;
					if(x<0) x+=nn;
					hold[x][y]=i+2;
				}
			}
			for(int i=0;i<nn;i++){
				for(int j=0;j<nn;j++){
					if(t==0) arr[i][j]=hold[i][j];
					else if(t==1) arr[i+nn][j+nn]=hold[i][j]+nn*nn;
					else if(t==2) arr[i][j+nn]=hold[i][j]+nn*nn*2;
					else if(t==3) arr[i+nn][j]=hold[i][j]+nn*nn*3;
				}
			}
		}
		
		int nnn=(n-2)/4; int nn=n/2;
		for(int i=0;i<nn;i++){
			for(int j=0;j<nnn;j++){
				swap(arr[i][j],arr[i+nn][j]);
			}
		}
		for(int i=0;i<nn;i++){
			for(int j=0;j<nnn-1;j++){
				swap(arr[i][n-1-j],arr[i+nn][n-1-j]);
			}
		}
		int xx=nn/2; int yy=nn/2;
		swap(arr[xx][yy],arr[xx+nn][yy]);
		swap(arr[xx][yy-1],arr[xx+nn][yy-1]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");
	}
	
	return 0;
}

