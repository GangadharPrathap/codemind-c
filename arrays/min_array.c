#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int min,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	     min=arr[0];
	for(i=0;i<n;i++)
		if(arr[i]<min)
		{
			min=arr[i];
		}
			printf("%d",min);
}