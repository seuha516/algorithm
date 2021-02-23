#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int main() {
  
  char c[105]={0,};
  scanf("%s",c);
  int len=strlen(c);

  int dap=0;
  for(int i=1;i+i<=len;i++){
    for(int t=0;t+i+i-1<len;t++){
        int front=0; int back=0;
      for(int j=0;j<i;j++){
        front+=c[j+t]-48;
      }
      for(int j=i;j<i+i;j++){
        back+=c[j+t]-48;
      }
      if(front==back){
        dap=i;
        break;
      }
    }
  }


  printf("%d",dap*2);

  
  return 0;
}
