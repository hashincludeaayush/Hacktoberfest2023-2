#include <stdio.h>

int main()
{
    int arr[10], i, num, n, beg, mid, end, c=0, pos;
    printf("\nEnter the array size : ");
    scanf("%d", &n);
    printf("\nEnter Array Elements :- \n");
    for(i=0; i<n; i++)
    {
        scanf("\n %d", &arr[i]);
    }
    printf("\nEnter the number to be search : ");
    scanf("%d", &num);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==num)
        {
            c=1;
            pos=mid+1;
            break;
        }
        else if(arr[mid]>num)
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    if(c==0)
    {
        printf("\nNumber not found..!!");
    }
    else
    {
        printf("\nNumber %d found at position %d", num, pos);
    }
    return 0;
}
