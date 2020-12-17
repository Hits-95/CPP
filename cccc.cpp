#include<stdio.h>
#include<conio.h>
#include<string.h>

void Csort(char a[]){
	   int l;
	   l=strlen(a);
	   char ch;
	   for(int pass =1;pass<l;pass++){
	   	   for(int i=0;i<pass-l;i++){
	   	   	   if(a[i]>a[i+1])
	   	   	      ch=a[i];
				  a[i]=a[i+1];
				  a[i+1]=ch;
			  }
	   }
}
int main(){
	  char *a;
	  printf("\n\t Enter chara ");
	  for(int i=0;i<5;i++)
	      scanf("%c",&a[i]);
	  Csort(a);
	  printf("\n\t data   :------");
	  for(int i=0;i<5;i++)
	     printf("\n %c",a[i]);
	  getch();
	  return(0);
}
