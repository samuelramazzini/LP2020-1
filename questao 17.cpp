#include <stdio.h>

int main() {

  int x,n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;

  do{
    scanf("%i",&x);

    if(x==0){
      n0=n0+1;
    }
    if(x==1){
      n1=n1+1;
    }
    if(x==2){
      n2=n2+1;
    }
    if(x==3){
      n3=n3+1;
    }
    if(x==4){
      n4=n4+1;
    }
    if(x==5){
      n5=n5+1;
    }
    if(x==6){
      n6=n6+1;
    }
    if(x==7){
      n7=n7+1;
    }
    if(x==8){
      n8=n8+1;
    }
    if(x==9){
      n9=n9+1;
    }
  }
  while(x>-1 && x<=9);
if(n0>=1){
printf("0:%i\n",n0);
}if(n1>=1){
printf("1:%i\n",n1);
}if(n2>=1){
printf("2:%i\n",n2);
}if(n3>=1){
printf("3:%i\n",n3);
}if(n4>=1){
printf("4:%i\n",n4);
}if(n5>=1){
printf("5:%i\n",n5);
}if(n6>=1){
printf("6:%i\n",n6);
}if(n7>=1){
printf("7:%i\n",n7);
}if(n8>=1){
printf("8:%i\n",n8);
}if(n9>=1){
printf("9:%i\n",n9);
}
  return 0;
}
