#include <stdio.h>


int main()
{
    int a,b;
    int c[8001]={0,};
    int min=4000,max=-4000;
    int mean=0;
    double meanmean;
    scanf("%d",&a);
    int www;
    www=(a+1)/2;
    int mid;
    int many=0,cou=0,now=0;


    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        mean=mean+b;
        if(b<min){
            min=b;
        }
        if(b>max){
            max=b;
        }


        c[b+4000]++;
    }
    for(int i=0;i<=8000;i++){
        if(c[i]>many&&c[i]!=0){
            many=c[i];
            now=i;
            cou=0;
        }else if(c[i]==many&&c[i]!=0){
            if(cou==0){
                now=i;
                cou=1;

            }
        }
    }
    for(int i=1;i<=8000;i++){
        c[i]=c[i]+c[i-1];
        if(c[i-1]<www&&www<=c[i]){
            mid=i;
        }
    }

    meanmean=mean;
    meanmean=meanmean/a;
    int realmean=meanmean+0.5;
    if(meanmean<0){
        realmean=meanmean-0.5;
    }
    printf("%d\n%d\n%d\n%d",realmean,mid-4000,now-4000,max-min);

    return 0;
}

