#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  
  int t=0;
  while(1){
    t++;
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a*a+b*b+c*c==0){
      break;
    }
    int x=c/b;
    int skajwl=c%b;
    printf("Case %d: %d\n",t,a*x+min(a,skajwl));
  }
  
  return 0;
}
