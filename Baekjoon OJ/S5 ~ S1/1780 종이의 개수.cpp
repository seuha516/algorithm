#include <iostream>
int aa[2200][2200];
int pcount=0;
int zcount=0;
int mcount=0;

void cut(int a, int b, int size){

    int allz=1;
    int allm=1;
    int allp=1;
    for(int i=a;i<a+size;i++){
        for(int j=b;j<b+size;j++){
            if(aa[i][j]!=1){
                allp=0;
            }
            if(aa[i][j]!=0){
                allz=0;
            }
            if(aa[i][j]!=-1){
                allm=0;
            }
            if(allp==0&&allz==0&&allm==0){
            	break;
			}
			
        }
        if(allp==0&&allz==0&&allm==0){
            break;
		}
    }
    if(allz!=1&&allm!=1&&allp!=1){

        cut(a,b,size/3);
        cut(a,b+size/3,size/3);
        cut(a,b+2*size/3,size/3);
        cut(a+size/3,b,size/3);
        cut(a+2*size/3,b,size/3);
        cut(a+size/3,b+size/3,size/3);
        cut(a+2*size/3,b+size/3,size/3);
        cut(a+size/3,b+2*size/3,size/3);
        cut(a+2*size/3,b+2*size/3,size/3);

    }else if(allp==1){
        pcount++;
    }else if(allz==1){
        zcount++;
    }else if(allm==1){
    	mcount++;
	}

}
int t;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	
    	for(int j=0;j<n;j++){
    		scanf("%d",&aa[i][j]);
		}
                
    }

    cut(0,0,n);
    
    printf("%d\n%d\n%d",mcount,zcount,pcount);
    
    return 0;
}
