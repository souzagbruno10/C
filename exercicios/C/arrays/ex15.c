#include <stdio.h>

void user (char name[])
{
        printf("\n==== VERIFICADOR DE VOGAIS ====");
                printf("\nDigite a palavra: ");
                scanf("%s", name);

}

void verifyWord (char name[])
{
        printf("\n---------------------------------------------\n");

        int total = 0, i = 0;;

		printf("As vogais são: ");
                while (name[i] != '\0')
                {
                if(name[i] == 'a' || name[i] == 'A'
                || name[i] == 'e' || name[i] == 'E'
                || name[i] == 'i' || name[i] == 'I'
                || name[i] == 'o' || name[i] == 'O'
                || name[i] == 'u' || name[i] == 'U')
                {
                printf("[%c].",name[i]);
                total++;
		}
		i++;
		}
		printf("\nO total das vogais são %d", total);
}

int main (void)
{
        char name[20];

        user(name);
        verifyWord(name);

        return 0;
}
