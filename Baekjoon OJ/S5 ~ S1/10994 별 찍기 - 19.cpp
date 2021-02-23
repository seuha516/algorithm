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

int main(){   
   
  char arr[500][500];
  for(int i=0;i<500;i++){
    for(int j=0;j<500;j++){
      arr[i][j]=' ';
    }
  }

  int n;scanf("%d",&n);  int x=n;
  n=2*x-2;
  
  
  for(int i=0;i<=n;i+=2){
    for(int j=n-i;j<=n+i;j++){
      arr[n-i][j]='*';
      arr[n+i][j]='*';
      arr[j][n-i]='*';
      arr[j][n+i]='*';
    }
  }
     
    
  
  for(int i=0;i<4*x-3;i++){
    for(int j=0;j<4*x-3;j++){
      printf("%c",arr[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
