#include<stdio.h>
#include<conio.h>
void selectionSort(int arr[],int n)
{
    int i,j,min_pos,temp;
    //One by one move boundary of unsorted subarray
    for(i=0;i<n-1;i++)
    {
        min_pos=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_pos])
            min_pos=j;
            if(min_pos!=i){
                temp=arr[i];
                arr[i]=arr[min_pos];
                arr[min_pos]=temp;
            }
    }
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
}
void linearSearch(inr arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            printf("\nposition of element=%d",i+1);
            return;
        }
    }
    printf("\nElement %d does not exist in the entered list",x);
}
void main()
{
    int arr[30];
    int n,i,x;
    printf("Enter the number of integers\n");
    scanf("%d",&n);
    printf("Enter the list\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be found in the list\n");
    scanf("%d",&x);
    printf("Sorted array:\n");
    selectionSort(arr,n);
    linearSearch(arr,n,x);
    getch();
}
