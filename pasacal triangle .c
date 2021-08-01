#include<stdio.h>
#include<conio.h>
int cr(int,int);
int fact(int);
void main()
{
    int i,k,j,r,x,S,y,h;
    printf("enter a number of rows");
    scanf("%d",&h);

    for(i=1; i<=h; i++)
    {
        y=0;
        k=1;
        for(j=1; j<=2*h-1; j++)
        {
            if(j>=h+1-i&&j<=h-1+i&&k)
            {


                x=i-1;
                printf(" %d ",cr(x,y));
                y++;

                k=0;
            }
            else
            {
                printf("   ");
                k=1;
            }
        }
        printf("\n");
    }
}

int cr(int n,int r)
{
    int z;
    z= fact(n) / (fact(r)*fact(n-r));
    return(z);
}

int fact(int a)
{
    int u,t=1;
    for(u=a; u>=1; u--)
    {
        t=t*u;
    }
    return(t);
}

