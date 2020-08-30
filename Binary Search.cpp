#include<stdio.h>
int main()
{
	int size;
	int arr[1000];
	int i,target;
	int mid,left,right;
	printf("Enter size, target and elements:");
	scanf("%d", &size);
	scanf("%d", &target);
	for(i=1;i<=size;i++)
	{scanf("%d", &arr[i]);}
	left=1;
	right=size;
	while(left<right)
	{
		mid=left+right/2;
		if(arr[mid]==target){left=mid;break;}
		else if(arr[mid]<target){left=mid+1;}
		else{right=mid-1;}
	}
	if(arr[left]==target){printf("%d, %d\n", arr[left], left);}
	else{printf("No element is matched" );}
}
