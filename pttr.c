#include<stdio.h>
main()
{
    //half pyrd of *
   /* int rows;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*  ");
        }
        printf("\n");
        
    }*/
    //HALF PYRD 
    /*int rows;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }*/
  /*   int rows;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*  ");
        }
        printf("\n");
        
    }   printf("\n");
        
    }*/

    //half pyrd of alphbs
    /*char alph,ltr='A';
    scanf("%c",&alph);
    for (int i = 1; i <= alph - 64; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c",ltr);
        }
        ltr++;
        printf("\n");
        
    }*/

    //inverted pyrds
 /*   int rows;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*  ");
        }
        printf("\n");
        
    }

    int rows1;
    printf("enter number of rows: ");
    scanf("%d",&rows1);
    for (int i = rows1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
*/
// full pyramid
/*int rows;
scanf("%d",&rows);
for (int i = 0; i < rows; i++)
{
    for (int spc = 0; spc < rows -i+1;spc++)
    {
        printf(" ");
    }
    for (int j = 0; j <= i; j++)
    {
        printf("* " );
    }
    printf("\n");
 
}*/

// int rows,m=1;
// scanf("%d",&rows);
// for (int i = 1; i <= rows; i++)
// {
//     for (int spc = 0; spc < rows -i+1;spc++)
//     {
//         printf(" ");
//     }

// }

int rows,m=1;
scanf("%d",&rows);
for (int i = rows; i >=1; i--)
{
    for (int spc = rows-i; spc>0; spc--)
    {
        printf(" ");
    }
    
    for (int j =i;j>0;j--)
    {
        printf("* ");
    }
    printf("\n");
    
}

    
//    int rows, coef = 1, space, i, j;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 0; i < rows; i++) {
//       for (space = 1; space <= rows - i; space++)
//          printf("  ");
//       for (j = 0; j <= i; j++) {

//          if (j == 0 || i == 0)
//             coef = 1;
//          else
//             coef = coef * (i - j + 1) / j;
//          printf("%4d", coef);
//       }
//       printf("\n");
//    }
    
}