#include<stdio.h>
//Print duplicate nums in array.

int main(){
	int n,count=1;
	printf("Enter the size: ");
	scanf("%d",&n);
	printf("Enter your number: ");
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				continue;
			}
			else if(arr[i]==arr[j] && arr[i]==0 && i<j){
				count++;
			}
			else if(arr[i]==arr[j] && arr[i]!=0){
				count++;
				arr[j]=0;
				continue;
				}
				}
		if(count!=1 && arr[i]!=0){
			printf("%d",arr[i]);
			count=1;
		}
		}
	return 0;
}
