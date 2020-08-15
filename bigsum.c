#include <stdio.h>
int main()
    {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements: ");
    int i,s=0;
    for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
            
        }
        for(i=0;i<n;i++)
        {
            s=s+ar[i];
            
        }
    
    printf("The Sum is %d \n",s);

    }
