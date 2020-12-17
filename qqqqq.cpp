#include<conio.h>
#include<stdio.h>

 int partition(int a[],int low,int high)
{
	int up,down,pivot,temp;
	up=high;
	down=low+1;
	pivot=a[low];
	while(down<up){
		while(a[down]<pivot&&down<=up)
			down++;
		while(a[up]>pivot&&up>low)
			up--;
		if(down<up){
		   temp=a[down];
		   a[down]=a[up];
		   a[up]=temp;
		}
	}
     a[low]=a[up];
     a[up]=pivot;
     return(up);	 
}
 void qsort(int a[],int low,int high)
{
    int j;
	if(low<high){
		j=partition(a,low,high);
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
