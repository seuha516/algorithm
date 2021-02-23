#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list [2000]={0,};

    int t=1;
    for(int i=1;i<1200;){
        for(int k=1;k<=t;k++){
            list[i]=t;
            i++;;
        }
        t++;

    }

	int x,y; scanf("%d %d",&x,&y); int tt=0;
	for(int i=x;i<=y;i++){
	    tt+=list[i];
	}
	printf("%d",tt);
	
    return 0;
}

