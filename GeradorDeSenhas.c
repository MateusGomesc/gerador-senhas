#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	char caracteres[] = "abcdefghijklmnopqrstuvwxyz1234567890!#/*";
	char senha[6];
	int i;
	
	printf("Gerando uma senha de 6 caracteres...\n");
	
	srand(time(NULL));
	
	for(i=0; i<6; i++){
		senha[i] = caracteres[rand() % 41];
	}
	
	printf("Senha: ");
	printf("%s", senha);
	
	return 0;
}
