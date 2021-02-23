#include <iostream>
int aa[128][128];
int bcount=0;
int wcount=0;

void cut(int a, int b, int size){

    int allw=1;
    int allb=1;
    for(int i=a;i<a+size;i++){
        for(int j=b;j<b+size;j++){
            if(aa[i][j]==1){
                allw=0;
            }else{
                allb=0;
            }
        }
    }
    if(allw!=1&&allb!=1){
    	printf("(");
        cut(a,b,size/2);
        cut(a,b+size/2,size/2);
        cut(a+size/2,b,size/2);
        cut(a+size/2,b+size/2,size/2);
        printf(")");
    }else if(allw==1){
        printf("0");
    }else{
        printf("1");
    }

}
int t;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	
    	for(int j=0;j<n;j++){
    		scanf("%1d",&aa[i][j]);
		}
                
    }

    cut(0,0,n);

    
    return 0;
}
