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

using namespace std;

bool arr[2200][2200];

int fill(int a1,int a2,int b1,int b2,int c1,int c2){

  int gongcha;

  if(a1>c1){ // 올라감
    gongcha=-1;
  }else if(a1<c1){ //내려감
    gongcha=1;
  }else{
    arr[a1][a2]=1;
    return 0;
  }

  for(int i=a2;i<=b2;i++){
    arr[a1][i]=1;
  }

  for(int i=0;i+a2<=c2;i++){
    arr[a1+(i*gongcha)][a2+i]=1;
  }

  for(int i=0;c2+i<=b2;i++){
    arr[b1+(i*gongcha)][b2-i]=1;
  }

  if((a1+c1)%2==1){
    return 0;
  }

  fill((a1+c1)/2,(a2+c2)/2+1,
  (b1+c1)/2,(b2+c2)/2-1,
  (a1+b1)/2+gongcha,(a2+b2)/2);

  return 0;
}

int main(){   
  
  int len[10]={0,}; len[0]=1;
  for(int i=1;i<10;i++){
    len[i]=len[i-1]*2+3;
  }
  
  int n;scanf("%d",&n);
  int length=len[n-1];
  int height=(length+1)/2;

  //printf("%d",length);
  
  if(n%2==0){
    fill(0,0,0,length-1,length/2,height-1);
  }else{
    fill(height-1,0,height-1,length-1,0,length/2);
  }

  for(int i=0;i<height;i++){
    int k;
    if(n%2==0){
      k=length-i;
    }else{
      k=length-(height-i-1);
    }
    for(int j=0;j<k;j++){
      if(arr[i][j]){
        printf("*");
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
  
  return 0;
}
