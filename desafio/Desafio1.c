/** Autor Allan Assis
    desafio 1, primeira etapa da Caelum*/                          /*Peço que ao digitar a expressão, não copie e cole do pdf
                                                                        pois o caracter hifen do pdf tem um formato bem diferente
                                                                        do teclado, fazendo com que o programa não o aceite. */
#include <stdio.h>                                                           /*   hifen do pdf '­'(copiei e colei aqui).*/
#include<string.h>


int main(void) {

	int i, tam;
	char expressao[31];      /*Vetor para armazenar a expressao posuindo 31 caracteres pois o ultimo é o terminador \n*/

    do{
        puts("Digite a expressao com no maximo 30 caracteres!\nCaso digite mais do que isso os caracteres extras serao ignorados.\n");
        fgets(expressao,31,stdin);     /*Um loop para garantir que seja digitado alguma expressao >=1*/
        tam=strlen(expressao);
        
    }while(expressao[0]=='\n');
	for(i=0;i<tam;i++){
		if(expressao[i]>='A' && expressao[i]<='Z' || expressao[i]=='1' || expressao[i]=='0' ||expressao[i]=='-' ||expressao[i]=='\n'){
			if(expressao[i]>='A' && expressao[i]<='C'){
				expressao[i]='2';
			}
			else if(expressao[i]>='D' && expressao[i]<='F'){              /*As condições de trocas das letras pelos numeros*/
				expressao[i]='3';
			}
			else if(expressao[i]>='G' && expressao[i]<='I'){              
				expressao[i]='4';
			}
			else if(expressao[i]>='J' && expressao[i]<='L'){
				expressao[i]='5';
			}
			else if(expressao[i]>='M' && expressao[i]<='O'){
				expressao[i]='6';
			}
			else if(expressao[i]>='P' && expressao[i]<='S'){
				expressao[i]='7';
			}
			else if(expressao[i]>='T' && expressao[i]<='V'){
				expressao[i]='8';
			}
			else if(expressao[i]>='W' && expressao[i]<='Z'){
				expressao[i]='9';
			}
            if(i==(tam-1)){
                puts(expressao);    /*Expressão final*/
            }
		}
		else{
            /*Erros possiveis*/
			puts("==============ERRO================\n");
			puts("=========Apenas Permitido========");
			puts("**Lestras maiusculas!\n**Simbolos numericos 1 e 0 !\n**Caracter especial apenas o hifen!");
			puts("**Espaco, e nao digitar nada tambem nao e permitido");
            break;
        }
			
			
	}
	

	return 0;
    
}
