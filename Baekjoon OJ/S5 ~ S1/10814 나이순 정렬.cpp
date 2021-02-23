#include <stdio.h>
#include <string.h>

int age[100001]={0,};
char name[100001][101]={0,};
int c[100001]={0,};
int tempc[100001]={0,};

void mergeplus(int left, int mid, int right){
    int i=0;
    int a,b;
    a=left;
    b=mid+1;

    while(a<=mid&&b<=right){
        if(age[c[a]]<age[c[b]]||(age[c[a]]==age[c[b]]&&c[a]<c[b])){
            tempc[left+i]=c[a];
            a++;
            }else{
                tempc[left+i]=c[b];
                b++;

            }
        i++;
    }

    if(a>mid){
        while(b<=right){
            tempc[left+i]=c[b];
            b++;
            i++;
        }
    }

    if(b>right){
        while(a<=mid){
            tempc[left+i]=c[a];
            a++;
            i++;
        }
    }
    for(int i=left;i<=right;i++){
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

    for(int i=0;i<=100001;i++){
        c[i]=i;
    }

    scanf("%d",&a);
    for(int i=0;i<=a-1;i++){
        scanf("%d %s",&age[i],&name[i]);
    }


    merge(0,a-1);

    for(int i=0;i<=a-1;i++){
    printf("%d %s\n",age[c[i]],name[c[i]]);
    }

    return 0;
}


