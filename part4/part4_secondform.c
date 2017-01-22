//C language
//IDE used : Code::Blocks 16.0.1
//Part 4 problem


#include<stdio.h>

void main()
{
    int a[3][3];
    int i,j,roww[10],column[10];
    int x,y,flag=1;
    int r,c;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    scanf("%d%d",&x,&y);

    if((x>2) || (y>2))
        printf("Error : The ball is placed outside the Grid");

    //The traversing function
    r=x;
    c=y;
    i=0;
  //  printf("x:%d,y:%d",x,y);
    while(flag)
    {               //adjacent cell check
            if((a[x][y]>a[x][y-1])&&(y>0)) //left side check
            {
      //          count[0]++;
                roww[i]=x;
                column[i]=y;
                i++;
                y=y-1;
            }

        else if((a[x][y]>a[x][y+1])&&(y<2)) //right side check
        {
      //      count[0]++;
            roww[i]=x;
            column[i]=y;
            i++;
            y=y+1;
        }
        else if((a[x][y]>a[x+1][y])&&(x<2))//drop down below
        {
       //     count[0]++;
            roww[i]=x;
            column[i]=y;
            i++;
            x=x+1;
        }
        else if((a[x][y]>a[x-1][y])&&(x>0))//drop down below
        {
       //     count[0]++;
            roww[i]=x;
            column[i]=y;
            i++;
            x=x-1;
        }
        else   ////the stop condition
        {
            flag=0;
            roww[i]=x;
            column[i]=y;
            i++;
        }
    }

    for(j=0;j<i;j++)
        printf("(%d,%d)",roww[j],column[j]);

}
