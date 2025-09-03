 #include <stdio.h>

void gradeStudent(void)
{
	float gradeStd[3][4];

	for (int i = 0; i < 3; i++)
	{
		float total = 0.0;

		printf("\n----------------------");
		printf("\nAluno %d", i + 1);
		printf("\n-----------------------");

		for (int j = 0; j < 4; j++)
		{
			printf("\nprova %d: ", j + 1);
			scanf("%f", &gradeStd[i][j]);
			total += gradeStd[i][j];
			
					
		}
		float media = 0.0;
		media = total/4;
		printf("\nMedia do aluno %d: %.2f", i + 1, media);	
	}
	 

}

int main (void)
{

	gradeStudent();


	return 0;
}
