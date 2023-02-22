#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,r,c,a[100][100];
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("Enter the values\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        if(a[i][j]!=0){
            printf("\n for non-zero element, row no = %d\n column no =%d\nvalue=%d\n",i+1,j+1,a[i][j]);
        }
    }
    printf("\n");
    printf("enter the element to be searched\n");
    scanf("%d",&n);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        if(a[i][j]=n){
            printf("The element %d is present at row=%d and col=%d\n",a[i][j],i+1,j+1);
            exit(0);
        }
        printf("ELement is not here");
        getch();
    }
    getch();
    return 0;
}