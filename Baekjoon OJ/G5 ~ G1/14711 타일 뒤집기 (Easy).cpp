#include <iostream>

char re(char a){
    if(a=='#'){
        return '.'; 
    }else{
        return '#'; 
    }
}

int main(){
    int a;
    scanf("%d",&a);
    char b[a+1];
    char tempb[a+1];
    char temptempb[a+1];
    int count[a+1];
    std::cin >> b;
    for(int bbb=0;bbb<=a-1;bbb++){
    	tempb[bbb]=b[bbb];
	}
    
    for(int i=0;i<=a-1;i++){
        printf("%s\n",b);  //Ãâ·Â
        
        if(i%2==0){
        	for(int bbb=0;bbb<=a-1;bbb++){
    			tempb[bbb]=b[bbb];
			}
		}else{
			for(int bb=0;bb<=a-1;bb++){
				temptempb[bb]=b[bb];
			}
		}
        for(int k=0;k<=a;k++){
            count[k]=0;
        }      
        for(int j=0;j<=a-1;j++){
            if(j==0){
                if(b[j]=='#'){
                    count[j]++;
                    count[j+1]++;
                }
            }else if(j==a-1){
                if(b[j]=='#'){
                    count[j]++;
                    count[j-1]++;
                }
            }else{
                if(b[j]=='#'){
                    count[j]++;
                    count[j+1]++;
                    count[j-1]++;
                }
            }
        }
        for(int r=0;r<=a-1;r++){
            if(count[r]%2==1){
                b[r]=re(b[r]);
            }
        }
        if(i!=0&&i%2==1){
              for(int y=0;y<=a-1;y++){
                if(tempb[y]=='#'){
                    b[y]=re(b[y]);
                }
            }  
        }
        if(i!=0&&i%2==0){
        	for(int yy=0;yy<=a-1;yy++){
        		if(temptempb[yy]=='#'){
                    b[yy]=re(b[yy]);
                }        		
			}
		}
    }
    return 0;
}
