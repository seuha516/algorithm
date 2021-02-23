#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;


vector<int> v;
bool visit[10]={false};


void pr(int a,int b){

	for(int i=1;i<=a;i++){

		if(visit[i]){
			continue;
		}

		v.push_back(i);
		visit[i]=true;

		if(v.size()==b){

			for(int j=0;j<b;j++){
				printf("%d ",v[j]);
			}
			printf("\n");

			visit[v.back()]=false;
			v.pop_back();

		}else{
			pr(a,b);
		}
	}

	if(v.size()==0){
	}else{
        visit[v.back()]=false;
		v.pop_back();
	}
}

int main()
{
    int x;
    scanf("%d",&x);

    int y;
    scanf("%d",&y);

    pr(x,y);

    return 0;
}

