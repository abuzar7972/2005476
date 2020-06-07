#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,min,max;
    printf("enter the array size \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array element \n");
    for(int j =0; j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    min=max=arr[0];
    for (int z=1;z<n;z++)
    {
        if (min>arr[z])
            min=arr[z];

        if (max<arr[z])
            max=arr[z];

    }
    printf("max : %d \n",max);
    printf("min : %d \n",min);
    return 0;
}
