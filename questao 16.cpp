#include <stdio.h>


int main() {
	
int temperatura=0,t1=-1,t2=-1,t3=-1,t4=-1,t5=-1,x,y;

while(temperatura>=0){

	scanf("%i",&temperatura);
	if(temperatura>=0){
	
		t5=t4;
    	t4=t3;
		t3=t2;
		t2=t1;
		t1=temperatura;
	
	}
	x=t1+t2+t3+t4+t5;
	y=x/5;
	}


if(y>1000){
	printf("Deu ruim");
}else{
	printf("Turno tranquilo");
}
		
	return 0;
}
