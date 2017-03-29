#include<stdio.h>
float capacity;

void KS(int n, float w[], float p[], float c){
	float x[20], tp = 0;
	int i,j,u=c;
	//u = capacity;
	for(i=0;i<=n;i++)
		x[i] = 0.0;

	for(i=0;i<=n;i++){
		if(w[i]>u)
			break;
		else{
			x[i] = p[i];
			tp  += p[i];
			u   -= w[i];
		}
	}
	if(i<=n)
		x[i] = u/w[i];
		tp += x[i]*p[i];
		x[i] = x[i]*p[i];
		printf(" ");
		for(i=0;i<=n;i++){
			printf("\n%f",x[i]);
		}
		printf("\nProfit : %f",tp);
}
int main(){
	int n;
	float value[100];
	float size[100];
	float ratio[100];
	printf("\nEnter the number of items : ");
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++){
		printf("Element %d",i+1);
		printf("\nEnter size : ");
		scanf("%f",&size[i]);
		printf("Enter value : ");
		scanf("%f", &value[i]);
		
	}
	printf("\nEnter total capacity of bag : ");
	scanf("%f", &capacity);
	for(int i=0;i<n;i++){
		ratio[i] = value[i]/size[i];
	}
	int j;
	float temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(ratio[j]<ratio[j+1]){
				temp = ratio[j];
				ratio[j] = ratio[j+1];
				ratio[j+1] = temp;
				
				temp = size[j];
				size[j] = size[j+1];
				size[j+1] = temp;

				temp = value[j];
				value[j] = value[j+1];
				value[j+1] = temp;
			}
		}

	}


	KS(n-1,size,value,capacity);
}

