#include <iostream>

int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
        
    }
}

int n,m;
int high[505][505];
int dp[505][505];
int lr[4]={-1,0,1,0};
int ud[4]={0,-1,0,1};

int search(int x,int y){
	if(x==1&&y==1){
		return 1;
	}
	if(dp[x][y]==-1){
		dp[x][y]=0;
		for(int i=0;i<=3;i++){
			int nx=lr[i]+x;
			int ny=ud[i]+y;
			if(nx>=1&&nx<=m&&ny>=1&&ny<=n){
				if(high[x][y]<high[nx][ny]){
					dp[x][y]+=search(nx,ny);
				}
			}
		}
	}
	return dp[x][y];
}

int main(){
    scanf("%d %d",&n,&m);
    for(int nn=1;nn<=n;nn++){
    	for(int mm=1;mm<=m;mm++){
    		scanf("%d",&high[mm][nn]);
    		dp[mm][nn]=-1;
		}
	}
	printf("%d",search(m,n));
    return 0;
}

