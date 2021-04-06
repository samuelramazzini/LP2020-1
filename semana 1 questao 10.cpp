#include <iostream>



int main() {
	int n1,n2;
		printf("Digite um numero de ate 4 digitos\n");
		scanf("%i",&n1);
		if(n1>=1000){
			n2=n1/1000;
			switch(n2){
	case 1:{
		printf("mil ");
			break;
	}case 2:{
		printf("dois mil e");
		break;
	}case 3:{
		printf("tres mil e");
		break;
	}case 4:{
		printf("quadro  mil e");
		break;
	}case 5:{
		printf("cinco mil e");
		break;
	}case 6:{
		printf("seis mil e");
		break;
	}case 7:{
		printf("sete mil  e");
		break;
	}case 8:{
		printf("oito mil e");
		break;
	}case 9:{
		printf("nove mil e");
		break;
		}
		}
		}
	
		n1=n1%1000;
		if(n1>=100){
			n2=n1/100;
			switch(n2){
	case 1:{
		printf("cento e");
			break;
	}case 2:{
		printf(" duzentos e");
		break;
	}case 3:{
		printf(" trezentos e");
		break;
	}case 4:{
		printf(" quadrocentos e");
		break;
	}case 5:{
		printf(" quinhentos e");
		break;
	}case 6:{
		printf("seicentos e");
		break;
	}case 7:{
		printf("setecentos e");
		break;
	}case 8:{
		printf("oitocentos e");
		break;
	}case 9:{
		printf("novecentos e");
		break;
		}
		}
		}
		n1=n1%100;
		if(n1>=10){
			n2=n1/10;
			switch(n2){
	case 1:{
		printf(" dez ");
			break;
	}case 2:{
		printf(" vinte e");
		break;
	}case 3:{
		printf(" trinta e");
		break;
	}case 4:{
		printf("quarenta e ");
		break;
	}case 5:{
		printf("cinquenta e ");
		break;
	}case 6:{
		printf("sessenta e");
		break;
	}case 7:{
		printf("setenta e");
		break;
	}case 8:{
		printf("oitotenta e");
		break;
	}case 9:{
		printf("novetenta e ");
		break;
		}
		}
		}
		n1=n1&10;
		if(n1>=1){
			n2=n1/1;
			switch(n2){
	case 1:{
		printf( "um ");
			break;
	}case 2:{
		printf(" dois  ");
		break;
	}case 3:{
		printf("tres  ");
		break;
	}case 4:{
		printf("quadro  ");
		break;
	}case 5:{
		printf("cinco ");
		break;
	}case 6:{
		printf("seis  ");
		break;
	}case 7:{
		printf("sete  ");
		break;
	}case 8:{
		printf("oito  ");
		break;
	}case 9:{
		printf("nove  ");
		break;
		}
		}
		}
	return 0;

}
