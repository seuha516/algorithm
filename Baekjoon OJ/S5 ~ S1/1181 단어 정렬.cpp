#include <stdio.h>
#include <string.h>

int lon[20001]={0,};
int templon[20001]={0,};
char bb[20001][52]={0,};
char tempb[20001][52]={0,};
int c[20001]={0,};
int tempc[20001]={0,};
void mergeplus(int left, int mid, int right){
    int i=0;
    int a,b;
    a=left;
    b=mid+1;

    while(a<=mid&&b<=right){
        if(lon[a]<lon[b]||((lon[a]==lon[b])&&strcmp(bb[c[a]],bb[c[b]])<0)){
            tempc[left+i]=c[a];
            templon[left+i]=lon[a];
            a++;
            }else{
                tempc[left+i]=c[b];
                templon[left+i]=lon[b];
                b++;

            }
        i++;
    }

    if(a>mid){
        while(b<=right){
            tempc[left+i]=c[b];
            templon[left+i]=lon[b];
            b++;
            i++;
        }
    }

    if(b>right){
        while(a<=mid){
            tempc[left+i]=c[a];
            templon[left+i]=lon[a];
            a++;
            i++;
        }
    }
    for(int i=left;i<=right;i++){
        lon[i]=templon[i];
        c[i]=tempc[i];
    }
}
void merge(int left,int right){
    int mid;
    if(left<right){
        mid=(left+right)/2;
        merge(left,mid);
        merge(mid+1,right);
        mergeplus(left,mid,right);
    }
}
int main()
{
    int a;
    int mid;
    int d;
    int e;

    scanf("%d",&a);

    for (int i=0;i<=20001;i++){
        c[i]=i;
    }

    scanf("%d",&a);
    for(int i=0;i<=a-1;i++){
        scanf("%s",bb[i]);
        lon[i]=strlen(bb[i]);
    }
    merge(0,a-1);

    printf("%s\n",bb[c[0]]);
    for(int i=1;i<=a-1;i++){
        if(strcmp(bb[c[i]],bb[c[i-1]])!=0){
            printf("%s\n",bb[c[i]]);
        }
    }
    return 0;
}

