#include <stdio.h>

int main()
{
   float n1, n2, n3, media, exame, medFinal;

   printf("Digite a nota da primeira prova: ");
   scanf("%f", &n1);
   printf("Digite a nota da segunda prova: ");
   scanf("%f", &n2);
   printf("Digite a nota da terceira prova: ");
   scanf("%f", &n3);

   media = (n1 + n2 + n3) / 3;

   if ((n1 >= 6.0) && (n2 >= 6.0) && (n >= 6.0))
   {
      printf("O aluno teve uma média de: %.1f e foi aprovado", media);
   }
   else if ((n1 < 2.0) || (n2 < 2.0) || (n3 < 2.0))
   {
      printf("O aluno tirou uma nota menor do que 2 e está reprovado");
   }
   else
   {
      printf("Digite a nota do exame: ");
      scanf("%f", &exame);

      medFinal = (media + exame) / 2;
      if (medFinal >= 5.0)
      {
         printf("O aluno teve média final de %.1f e foi aprovado.", medFinal);
      }
      else
      {
         printf("O aluno teve média final de %.1f e foi reprovado", medFinal);
      }
   }

   return 0;
}
