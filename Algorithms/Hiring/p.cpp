#include<stdio.h>
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    int id[20];

    time_t t;
    srand((unsigned)time(&t));
    int x=rand()%5;
    
    for(int i=0;i<10;i++){
        id[i]=rand()%100;
    }
    for(int i=0;i<10;i++)
        cout<<id[i]<<endl;
    

    int b = rand()%10;
    int best = id[b];
    for(int i=0;i<10;i++){
        if(id[i]>=best){
            cout<<id[i]<<" ";
            best=id[i];
        }
    }

    return 0;
}