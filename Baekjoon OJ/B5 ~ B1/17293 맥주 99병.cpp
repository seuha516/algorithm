#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;scanf("%d",&a);
    for(int i=a;i>=0;i--){

        if(i==0){
            printf("No more bottles of beer on the wall, no more bottles of beer.\n");
            if(a==1){
                 printf("Go to the store and buy some more, %d bottle of beer on the wall.\n",a);
            }else{
                 printf("Go to the store and buy some more, %d bottles of beer on the wall.\n",a);
            }
        }else if(i==1){
            printf("%d bottle of beer on the wall, %d bottle of beer.\n",i,i);
            printf("Take one down and pass it around, no more bottles of beer on the wall.\n",i-1);
        }else if(i==2){
            printf("%d bottles of beer on the wall, %d bottles of beer.\n",i,i);
            printf("Take one down and pass it around, %d bottle of beer on the wall.\n",i-1);
        }else{
            printf("%d bottles of beer on the wall, %d bottles of beer.\n",i,i);
            printf("Take one down and pass it around, %d bottles of beer on the wall.\n",i-1);
        }
        printf("\n");
    }

    return 0;
}

