#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float  area,base,altura;
	
	printf("Digite a base: \n",base);
	scanf("%f",&base);
	
	printf("Digite a altura: \n",altura);
	scanf("%f",&altura);
	

	area = (base*altura)/2;
	
	printf("A área do triângulo é : %f\n",area);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
