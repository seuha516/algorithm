#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int test,jang;
    int size[505];
    int hap[505][505]={0,};
    int temp=2000000000;
    int plus;

    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        scanf("%d",&jang);
        for(int j=1;j<=jang;j++){
            scanf("%d",&size[j]);
        }
    
   		for(int k=1;k<=jang-1;k++){
        	for(int q=1;q<=jang-k;q++){
            	temp=2000000000;
            	plus=0;
            	for(int aa=q;aa<=q+k;aa++){
                	plus+=size[aa];
            	}
            	//q~q+k 구하는중
            	for(int y=q;y<=q+k-1;y++){
                	temp=min(temp,hap[q][y]+hap[y+1][q+k]+plus);
            	}
            	hap[q][q+k]=temp;      
        	}
    	}
    	printf("%d\n",hap[1][jang]);
	}
    
    return 0;
}
