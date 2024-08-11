#include<stdio.h>
void main()
{
    int n,i,a[10],num;
    printf("Enter the number of elements you want in an array:");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("array elements are:\n");
    for(i=0; i<n; i++){
        printf("%d\n", a[i]);
    }

    printf("Enter the inserting number:");
    scanf("%d", &num);
    for(i=n; i>=0; i--){
        a[i]=a[i-1];
    }
   a[0]=num;  
   printf("after inserting element at start in an array is:");
   for(i=0; i<=n; i++)
   {
    printf("%d\n",a[i]);
   }
}