#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the length of 3 sides of a traingle to check if it is a scalene .\n");
  scanf("%d",&a);
}
int check_scalene(int a, int b ,int c)
{
  if(a=b)
    return a;
  if(b=c)
    return b;
   if(a=c) 
     return c;
}
void output(int a, int b, int c,int isscalene)
{
  printf("the triangle os sides %d , %d and %d is scalene",a,b,c);
}
void main()
{
  int a,b,c,x,y,z,isscalene;
  x=input_side();
  y=input_side();
  z=input_side();
 check= check_scalene(a,b,c);
  output(a,b,c,isscalene);
}