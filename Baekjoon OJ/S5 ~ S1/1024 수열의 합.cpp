#include <iostream>

int main() {
  
  long long a,b;
  scanf("%lld %lld",&a,&b);
  long long st,end;
  long long ok=0;

  for(long long i=b;i<=100;i++){
    long long x=i*(i-1)/2;
    long long aa=a-x;
    if(aa%i==0){
      ok=1;
      st=aa/i;
      end=st+i-1;
      break;
    }else{
      continue;
    }
  }

  if(ok){
    if(st<0||end<=st){
      printf("-1");
      
    }else{
      for(long long i=st;i<=end;i++){
      printf("%lld ",i);
    }
    }
    
  }else{
    printf("-1");
  }


  return 0;

}
