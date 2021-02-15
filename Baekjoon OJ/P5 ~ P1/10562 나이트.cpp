#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>
#define E 1000000009

using namespace std;

int intpow(int a,int n){
    int t=1;
    for(int i=0;i<n;i++){
      t*=a;
    }
    return t;
}

vector<int> v[256];
long long arr[256][256];

int main(){
   
	for(int i=0;i<256;i++){
    	bool on[8]={0,};
    	bool paston[8]={0,};
    	int ii=i;
    	for(int j=0;j<8;j++){
        	on[j]=ii%2;
        	ii/=2;
      	}
      	
      	bool impossible[8]={0,};
      	if(on[0]){ impossible[3]=1; impossible[4]=1; }
      	if(on[1]){ impossible[5]=1; }
      	if(on[2]){ impossible[1]=1; impossible[5]=1; impossible[6]=1; }
      	if(on[3]){ impossible[7]=1; } 
      	if(on[4]){ impossible[0]=1; impossible[3]=1; impossible[7]=1; }
      	if(on[5]){ impossible[1]=1; }
      	if(on[6]){ impossible[2]=1; impossible[5]=1; }
      	if(on[7]){ impossible[3]=1; }      
      
      	if((impossible[0]&&on[1])||(impossible[2]&&on[3])||
       		(impossible[4]&&on[5])||(impossible[6]&&on[7])){
        	continue;
        }
      
      	paston[0]=on[1]; paston[2]=on[3]; paston[4]=on[5]; paston[6]=on[7];
      
      	for(int j=0;j<=1;j++){
         	paston[1]=j;
         	for(int k=0;k<=1;k++){
            	paston[3]=k;
            	for(int l=0;l<=1;l++){
               		paston[5]=l;
               		for(int m=0;m<=1;m++){
                  		paston[7]=m;
                  		int res=0;
                  		for(int n=7;n>=0;n--){
                     		res*=2; if(paston[n])res+=1;
                  		}
                  		v[i].push_back(res);
                  		if(impossible[7]) break;
		            }
		            if(impossible[5]) break;
		       	}
		        if(impossible[3]) break;   
		    }
		    if(impossible[1]) break;   
		}
	}
	
	for(int i=0;i<256;i++){
		for(int j=0;j<v[i].size();j++){
	   	  	arr[i][v[i][j]]=1;
		}
	}


	int TC; scanf("%d",&TC);
	while(TC--){
		int m,n; scanf("%d %d",&m,&n);
		if(n==1){
			printf("%d\n",intpow(2,m)); continue;
		}
		
		int limit=intpow(4,m);
		
		long long dap[256]={0,};
		for(int i1=0;i1<=1;i1++){
			for(int i2=0;i2<=1;i2++){
				for(int i3=0;i3<=1;i3++){
					for(int i4=0;i4<=1;i4++){
						dap[i1*64+i2*16+i3*4+i4*1]=1;
					}
				}	
			}
		}
		
		bool ok[32]={0,};
		int nn=n-1;
		for(int i=0;i<32;i++){
			ok[i]=nn%2;
			nn/=2;
		}
		long long final[256][256]={0,};
		for(int i=0;i<256;i++){
			final[i][i]=1;
		}
		long long array[256][256]={0,};
		for(int i=0;i<256;i++){
			for(int j=0;j<256;j++){
		   	  	array[i][j]=arr[i][j];
			}
		}
		
		long long temp[256][256];
		
		for(int t=0;t<32;t++){
			if(ok[t]){
				for(int i=0;i<limit;i++){
					for(int j=0;j<limit;j++){
						temp[i][j]=0;
						for(int k=0;k<limit;k++){
							temp[i][j]+=((final[i][k]%E)*(array[k][j]%E))%E;
							temp[i][j]%=E;
						}
					}
				}
				for(int i=0;i<limit;i++){
					for(int j=0;j<limit;j++){
						final[i][j]=temp[i][j]%E;
					}
				}
			}
			for(int i=0;i<limit;i++){
					for(int j=0;j<limit;j++){
						temp[i][j]=0;
						for(int k=0;k<limit;k++){
							temp[i][j]+=((array[i][k]%E)*(array[k][j]%E))%E;
							temp[i][j]%=E;
						}
					}
				}
			for(int i=0;i<limit;i++){
				for(int j=0;j<limit;j++){
					array[i][j]=temp[i][j]%E;
				}
			}
		}
	
		long long result=0;
		for(int i=0;i<limit;i++){
			long long temp=0;
			for(int j=0;j<limit;j++){
				temp+=(final[i][j]%E)*(dap[j]%E);
			}
			result+=temp%E;
			result%=E;
		}
		
		printf("%lld\n",result%E);
	} 

return 0;}


