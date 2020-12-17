#include<conio.h>
#include<stdio.h>

 int partition(int x[],int lb,int ub)
{
 int up,dn;
 int pivot,t;
 up=ub;
 dn=lb+1;
 pivot=x[lb];

 do
 {
 while(x[dn]<pivot && dn<=ub)
 dn++;
 while(x[up]>pivot && up>lb)
 up--;

 if(dn<up)
  {
   t=x[dn];
   x[dn]=x[up];
   x[up]=t;
  }
 } while(dn<up);
  x[lb]=x[up];
  x[up]=pivot;
  return(up);
}
 void qsort(int a[],int low,int high)
{
    int j;
	if(low<high){
		j=partion(a,low,high);
		qsort(a,low,j-1);
		qsort(a,j+1,high);
	}
}
 void read(int x[],int n)
 {
  printf("\n Enter a %d numbers ",n);
  for(int i=0;i<n;i++)
  {
   scanf("%d",&x[i]);
  }
 }

 void diaplay(int x[],int n)
 {
  printf(" \n The Qsort are \n");
  for(int i=0;i<n;i++)
  printf("%d\n",x[i]);
 }

   main()
 {
 int x[10],n;
  printf("\n Enter how many no`s = ");
   scanf("%d",&n);
   read(x,n);
  qsort(x,0,n-1);
  diaplay(x,n);
  getch();
  return(0);
 }
