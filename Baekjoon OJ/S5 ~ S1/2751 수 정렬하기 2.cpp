#include <stdio.h>

int answer[1000001]={0,};
int input[1000001]={0,};
void merge(int left,int right);
void mergeplus(int left, int mid, int right);

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a-1;i++){
        scanf("%d",&input[i]);
    }



    if(a==1){
        printf("%d",input[0]);
    }else{
        merge(0,a-1);
        for(int i=0;i<=a-1;i++){
            printf("%d\n",answer[i]);
        }
    }



    return 0;
}

void merge(int left,int right){
    int mid;
    if(left<right){
        mid=(left+right)/2;
        merge(left,mid);
        merge(mid+1,right);
        mergeplus(left,mid,right);
    }
}

void mergeplus(int left, int mid, int right){
    int i=0;
    int a,b;
    a=left;
    b=mid+1;

    while(a<=mid&&b<=right){
        if(input[a]<input[b]){
            answer[left+i]=input[a];
            a++;
            }else{
                answer[left+i]=input[b];
                b++;

            }
        i++;
    }

    if(a>mid){
        while(b<=right){
            answer[left+i]=input[b];
            b++;

            i++;
        }
    }

    if(b>right){
        while(a<=mid){
            answer[left+i]=input[a];
            a++;

            i++;
        }
    }
    for(int aaaa=left;aaaa<=right;aaaa++){
        input[aaaa]=answer[aaaa];
    }
}

