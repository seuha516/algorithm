#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  
  int t; scanf("%d",&t);
  while(t--){
    double x; scanf("%lf",&x);
    printf("%0.10lf\n",x/6);
  }

  return 0;

}
