#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>
#include <functional>


using namespace std;

int bb[1005]={0,};
int c[1005]={0,};
int d[1005]={0,};

void merge(int arr[],int sta,int mid,int end){
    int temp[1050];
    int temp2[1050];
    int i=sta,j=mid+1,k=sta;
    while(i<=mid&&j<=end){
        if(arr[i]<arr[j]){
            temp[k]=c[i];
            temp2[k++]=bb[i++];
        }else{
            temp[k]=c[j];
            temp2[k++]=bb[j++];
        }
    }
    while(j<=end){
        temp[k]=c[j];
        temp2[k++]=bb[j++];
    }
    while(i<=mid){
        temp[k]=c[i];
        temp2[k++]=bb[i++];
    }
    for(int aa=sta;aa<=end;aa++){
        c[aa]=temp[aa];
        arr[aa]=temp2[aa];
    }
}
void mergesort(int arr[],int sta,int end){
    int mid;
    if(sta<end){
        mid=(sta+end)/2;
        mergesort(arr,sta,mid);
        mergesort(arr,mid+1,end);
        merge(arr,sta,mid,end);
    }
}

int main()
{
    int a;
    int temp=0;

    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        scanf("%d %d",&bb[i],&c[i]);
    }
    mergesort(bb,1,a);

    for(int i=1;i<=a;i++){
        for(int j=0;j<i;j++){
            if(c[j]<c[i]){
                d[i]=max(d[i],d[j]+1);
            }
        }
    }

    for(int i=1;i<=a;i++){
        temp=max(temp,d[i]);
    }
    printf("%d",a-temp);

    return 0;
}



