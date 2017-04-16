#include<stdio.h>
int G[50][50], X[50];

void next_color(int k){
    int i,j;
    X[k]=1;
    for(i=0;i<k;i++){
        if(G[i][k]!=0 && X[k]==X[i])
            X[k]= X[i]+1;
                    }
                }

int main(){
    int n,e,i,j,k,l;
    printf("enter number of vertices:");
    scanf("%d",&n);
    printf("enter number of edges:");
    scanf("%d",&e);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            G[i][j]=0;
    }

    printf("enter indexes where value is 1:\n");
    for(i=0;i<e;i++){
        scanf("%d%d",&k,&l);
        G[k][l] = 1;
        G[l][k] = 1;
    }

    for(i=0;i<n;i++)
        next_color(i);
    printf("colors of verticesL\n");
    for(i=0;i<n;i++)
        printf("Vertex[%d]:%d\n",i+1,X[i]);
    return 0;
}
