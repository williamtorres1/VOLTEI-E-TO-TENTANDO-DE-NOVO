#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	Calcule a quantidade de latas de tinta necessarias e o custo em reais para pintar a area externa de tanques de combustivel cilindricos. 
	Devem ser informados a altura e o diametro da base desses cilindros, bem como a sua quantidade. 
	Assuma que todos os cilindros possuem as mesmas dimensoes e que:
	Uma lata de tinta custa R$ 45,00;
	Cada lata contem 5 litros de tinta;
	Cada litro de tinta pinta 03 metros quadrados.
	OBS: Devem ser pintadas tambem a base e a tampa dos cilindros.
	*/
	float raio,altura;
	float areaBase,areaTotal,areaLateral;
	float pi;
	float latas,tinta_necessaria;
	float custo_total;
	int QNT_cilindro;
	pi=3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273;
	printf("Digite o raio do cilindro: ");
	scanf("%f",&raio);
	printf("Digite a altura do cilindro: ");
	scanf("%f",&altura);
	printf("Digite quantos cilindros serao pintados: ");
	scanf("%d",&QNT_cilindro);
	areaBase=2*(pi*raio*raio);
	areaLateral=2*pi*raio*altura;
	areaTotal=areaLateral+areaBase;
	tinta_necessaria=(areaTotal*QNT_cilindro/0.3);
	latas=(tinta_necessaria/5);
	custo_total=45*latas;
	printf("\nSera preciso de %f Latas e %f reais\n\n",latas,custo_total);
	system("pause");
	return 1;
}
