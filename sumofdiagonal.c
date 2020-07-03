#include<stdio.h>
  void main()
  {
   int a[10][10],sum=0;
   int i,j,m,n;
   
   printf("Enter Order of Matrix = ");
   scanf("%d%d",&m,&n);
   
          printf("Enter Elements : ");
          for(i=0;i<m;i++)
              {
                  for(j=0;j<n;j++)
                      {
                         scanf("%d",&a[i][j]);
                      }
               }
                  for(i=0;i<m;i++)
                      {
                          for(j=0;j<n;j++)
                              {
                                    if(i==j)
                                      {
                                          sum+=a[i][j];
                                       }
                               }
                       }
                   printf("Sum of Diagonal Elements = %d ",sum);
                 
  }
