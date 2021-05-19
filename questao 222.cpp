#include <stdio.h>
#include <string.h>
main(){
	
 int x=0;
 char frase[50];
 printf("Digite uma frase\n ");
	gets(frase);
 	 
 while(frase[x] !='\0'){
 
 if (frase[x] == 'a'){
 frase[x] ='i';
}
 if (frase[x] == 'A'){
 frase[x] ='I';
}
 if (frase[x] == 'e'){
 frase[x] ='i';
}
 if (frase[x] == 'E'){
 frase[x] ='I';
}
 if (frase[x] == 'u'){
 frase[x] ='i';
}
 if (frase[x] == 'U'){
 frase[x] ='I';
}
 if (frase[x] == 'o'){
 frase[x] ='i';
}
 if (frase[x] == 'O'){
 frase[x] ='I';
}
	x++;
}
  printf("%s",frase);
 return 0;
} 
