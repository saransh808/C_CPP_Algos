#include <stdio.h>
#include<iostream>
using namespace std;
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
int n;
int main()
{
    int a[100], i;
    printf("Enter the number of terms");
    scanf("%d", &n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }        
    quick_sort(a, 0, n-1);
    for(i=0;i<n;i++){
    	printf("%d ",a[i]);
    } 
}
 
void quick_sort(int a[],int l,int u){
	int j;
	if(l<u){
		j=partition(a,l,u);
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,u);
	}
}
 
int partition(int a[], int l, int u){
	int temp;
	int i,j, v;
	v=a[l];
	i=l;
	j=u+1;
	do{
		do i++; while(v>a[i]&&i<=u);
		do j--; while(v<a[j]);
		if(i<j){
			temp = a[i];
			a[i] = a[j];
			a[j] =temp;
		}
		
	}while(i<j);
	a[l] = a[j];
	a[j] = v;
	return j;
}