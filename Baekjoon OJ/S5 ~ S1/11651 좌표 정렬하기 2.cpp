#include <stdio.h>

int b[100001]={0,};
int cc[100001]={0,};
int temp[100001]={0,};
int temp2[100001]={0,};

void merge(int arr[], int l, int m, int r){
    int a,b,c;
    a=l;
    b=m+1;
    c=l;
    while(a<=m&&b<=r){
        if(arr[a]>arr[b]){
            temp2[c]=cc[b];
            temp[c++]=arr[b++];

        }else{
            temp2[c]=cc[a];
            temp[c++]=arr[a++];
        }
    }
    if(a>m){
        while(b<=r){
            temp2[c]=cc[b];
            temp[c++]=arr[b++];
        }
    }
    if(b>r){
        while(a<=m){
            temp2[c]=cc[a];
            temp[c++]=arr[a++];
        }
    }
    for(int i=l;i<=r;i++){
        arr[i]=temp[i];
        cc[i]=temp2[i];
    }
}
void mergesort(int arr[], int l, int r){
    int m;
    if(l<r){
        m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int a;

    int st=0,en=0;

    scanf("%d",&a);
    for(int i=0;i<=a-1;i++){
       scanf("%d %d",&cc[i],&b[i]);
    }
    mergesort(b,0,a-1);
    for(int i=1;i<=a-1;i++){
        if(b[i]==b[i-1]){
            en++;

        }else{
            mergesort(cc,st,en);

            st=en+1;
            en=st;

        }
    }
    mergesort(cc,st,en);

    for(int i=0;i<=a-1;i++){
        printf("%d %d\n",cc[i],b[i]);
    }
    return 0;
}

