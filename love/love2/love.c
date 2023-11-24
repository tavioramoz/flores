#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "Portuguese");
  printf("\nEu sou um cavalo? (Respostas aceitas: 'sim', 'talvez' ou 'não')\n");
  printf("R: ");
  char ans[100];
  scanf("%s", ans);

  if(strcmp(ans, "sim") != 0 && strcmp(ans, "talvez") != 0 && strcmp(ans, "não") != 0){

    printf("\nResposta inválida, por favor tente responder: 'sim', 'talvez' ou 'não'!\n");
    main();

  }

  if(strcmp(ans, "sim") == 0 || strcmp(ans, "talvez") == 0){

    printf("\nQuantas pernas você tem?\n (respostas aceitas: '2' ou '4')\n");
    printf("R: ");
    int legs;
    scanf("%d", &legs);

    if(legs != 2 && legs != 4){

      printf("\nResposta inválida, por favor tente responder: '2' ou '4'!\n");
      main();

    }

    if(legs == 2){

      printf("\nVocê não é um cavalo!\n");
      return 0;

    }

    if(legs == 4){

      printf("\nSério?\n");
      printf("R: ");
      char ans2[100];
      scanf("%s", ans2);

      if(strcmp(ans2, "sim") != 0 && strcmp(ans2, "não") != 0){

        printf("\nResposta inválida, por favor tente responder: 'sim' ou 'não'!\n");
        main();

      }

      printf("\nVocê pode ler e escrever?\n");
      printf("R: ");
      char ans3[100];
      scanf("%s", ans3);

      if(strcmp(ans3, "sim") != 0 && strcmp(ans3, "não") != 0){

        printf("\nResposta inválida, por favor tente responder: 'sim' ou 'não'!\n");
        main();

      }

      if(strcmp(ans3, "sim") == 0){

        printf("\nVocê não é um cavalo!\n");
        return 0;

      }

      if(strcmp(ans3, "não") == 0){

        printf("\nVocê está mentindo! Você está lendo isso!\n");
        printf("\nVocê não é um cavalo!\n");
        return 0;

      }

    }

  }

  if(strcmp(ans, "não") == 0){

    printf("\nVocê não é um cavalo!\n");
    return 0;

  }

}