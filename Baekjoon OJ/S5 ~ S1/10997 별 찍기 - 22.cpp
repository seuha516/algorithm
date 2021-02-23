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

int a,b;
char arr[500][500];

int x[4]={-1,0,1,0};
int y[4]={0,1,0,-1};

void move(int m){
  a+=x[m];
  b+=y[m];
  arr[a][b]='*';
}

int main(){   
  
  for(int i=0;i<500;i++){
    for(int j=0;j<500;j++){
      arr[i][j]=' ';
    }
  }

  int n;scanf("%d",&n);  

  if(n==1){
    printf("*"); return 0;
  }

  a=2*n;
  b=2*n-2;
  arr[a][b]='*';

  int ttt=0;
  for(int i=2;1;i+=2){
    for(int j=0;j<=1;j++){
      for(int k=0;k<i;k++){
        move(j);
      }
    }
    if(ttt==n-1){
      break;
    }
    i+=2;
    for(int j=2;j<=3;j++){
      for(int k=0;k<i;k++){
        move(j);
      }
    }
    ttt++;
  }
     
  for(int i=0;i<4*n-1;i++){
    if(i==1){
      printf("*\n"); continue;
    }
    for(int j=0;j<4*n-3;j++){
      printf("%c",arr[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
