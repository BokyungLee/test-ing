#include <stdio.h>
int main() {
  int a,b,c,i=1;
  scanf("%d",&a);
  while(i<=5){
	  scanf("%d",&b);
	  if(a==b) c++;
	  i++;
	}
  printf("%d",c);
  return 0;
}

