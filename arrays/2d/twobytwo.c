#include<stdio.h>
int main()
{
	int i,j;
	int arr[2][4]={1,2,3,4,5,6,7,8};
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}printf("\n");
	}
}