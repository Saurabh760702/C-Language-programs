#include<stdio.h>
int main(void){
    int i,j,n,sum;
    printf("Enter the line of lenght of pyramid :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n+1-i; j++)
        {
            printf(" * ");
        }
        printf("\n");
        
    }
     for ( i = 1; i <= n; i++)
    {
         for ( j = 1; j <= n+1-i; j++)
        {
            printf(" %d",i);
        }
        printf("\n");
        
    }
     for ( i = 1; i <= n; i++)
    {
          for ( j = 1; j <= n+1-i; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        
    }
    for ( i = 1; i <= n; i++)
    {
         for ( j = 1; j <= n+1-i; j++)
        {
            printf(" %d",j+i);
        }
        printf("\n");
        
    }
     for ( i = 1; i <= n; i++)
    {
         for ( j = 1; j <= n+1-i; j++)
        {
            printf(" %d",j+i+2);
        }
        printf("\n");
        
    }
     for ( i = 1; i <= n; i++)
    {
         for ( j = 1; j <= n+1-i; j++)
        {
             sum=i+j;
            if (sum%2==0)
            {
                printf(" %d ",1);
            }
            else
            {
                printf(" %d ",0);
            }
            
            
        }
        printf("\n");
    }
     for ( i = 1; i <= n; i++)
    {
         for ( j = 1; j <= n+1-i; j++)
        {
            printf(" %d",i+j-i);
        }
        printf("\n");
        
    }

    for ( i = 1; i <= n; i++)
    {
         for ( j = 1; j <= n+1-i; j++)
        {
            printf(" %d",n+1-j);
        }
        printf("\n");
        
    }

    

    for ( i = 1; i <= n; i++)
    {
         for ( j = 1; j <= n+1-i; j++)
        {
            printf(" %d",n+1-i);
        }
        printf("\n");
        
    }

    return 0;
    

}