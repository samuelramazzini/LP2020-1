#include <stdio.h>

int main() {
  
int x,n1=-1,n2=-1,n3=-1;


do{
scanf("%i",&x);

    if(x>n1 && x<n2 && x<n3 && x!=0){

    n1=x;
  }
    if(x>n1 && x>n2 && x<n3 && x!=0){
    n1=n2;
    n2=x;
  }
    if(x>n1 && x>n2 && x>n3 && x!=0){
  n1=n2;
  n2=n3;
  n3=x;
  }
  }  
  while(x!=0);
printf("%d ",n1);
printf("%d ",n2);
printf("%d ",n3);
  return 0;
}
