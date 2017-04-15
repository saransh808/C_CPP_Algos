#include<stdio.h>
float capacity;

void KSS(int n, float w[], float p[], float c){
	float tp,u=c;
	int i,j;
	for(i=0;i<=n;i++){
		if(w[i]>u)
			break;
		else{
			tp+=p[i];
			u-=w[i];
			printf("\n%f\t%f\n", tp,u);
		}
	}
	if(i<=n){
		tp+=(u*p[i])/w[i];
	}
	printf("%f\n\n", tp);

}
int main(){
	int n;
	float value[100];
	float size[100];
	float ratio[100];
	printf("Enter number of items : ");
	scanf("%d", &n);
	int i;
	for(i=0;i<n;i++){
		printf("\nEnter Element %d", +1);
		printf("\nEnter Size : ");
		scanf("%f",&size[i]);
		printf("\nEnter Value : ");
		scanf("%f", &value[i]);
	}
	printf("\nEnter Total Capacity : ");
	scanf("%f", &capacity);
	for(i=0;i<n;i++){
		ratio[i] = value[i]/size[i];
	}
	int j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(ratio[j]<ratio[j+1]){
				temp = ratio[j];
				ratio[j] = ratio[j+1];
				ratio[j+1] = temp;

				temp = value[j];
				value[j] = value[j+1];
				value[j+1] = temp;

				temp = size[j];
				size[j] = size[j+1];
				size[j+1] = temp;

			}
		}
	}

	KSS(n-1,size,value,capacity);
}