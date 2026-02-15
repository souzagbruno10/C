#include <stdio.h>
#include <string.h>

void damage (int dmg[4])
{
	printf("\n==== MAIOR DANO ====");
	printf("\nDigite o dano de 4 ataques: ");

	for (int i = 0; i < 4; i++)
	{	
		int count = i + 1;
		printf("\nAtaque %d :" , count); //essa funcao guarda os valores do dano na array;
		scanf("%d", &dmg[i]);
	}
	
}
void gtr (int big, int dmg[4])
{
	big = 0;
	for (int i = 0; i < 4; i++)
	{
	if (dmg[i] > big)// essa funcao faz o for percorrer os indices do array e guarda os valores de dmg(dano)no big, se dmg for maior que big. Como big inicia no zero				  // o primeiro valor ja sera armazenado, sendo o array 1 comparado ao que foi salvo anteriormente, armazenando em big se o numero for maior
		{
		big = dmg[i];
		}
	}
	printf("\n------------------------------------------");
	printf("\nO maior dano é de %d ", big);
}



int main (void)
{
	int dmg[4], big;

	damage(dmg);
	gtr(big,dmg);

	return 0;
}
