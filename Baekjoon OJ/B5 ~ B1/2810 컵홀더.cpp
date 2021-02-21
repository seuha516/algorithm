#include <stdio.h>

int main()
{
    int a,b,c=0,d,e,f,g;
    int aa[200]={0,};
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++){
        scanf("%d",&aa[i]);
    }
    for(int i=1;i<=a-2;i++){
        for(int j=i+1;j<=a-1;j++){
            for(int k=j+1;k<=a;k++){
                if(aa[i]+aa[j]+aa[k]<=b&&aa[i]+aa[j]+aa[k]>=c){
                    c=aa[i]+aa[j]+aa[k];
                }
            }
        }
	}
    printf("%d",c);

    return 0;
}
