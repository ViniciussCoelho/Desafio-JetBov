// Para ver como utilizar o programa, consulte o README!

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int maxAnimal;
    float GMD;
    int animalCont;
} Area;

typedef struct {
    char nome[30];
    float peso;
} Animal;

int main () {
    int escolha, i = 0, j = 0, idAnimal, idArea, tempo, escolhaAnimal;
    Area area[30];
    Animal animal[100];
    do {
        printf("Escolha uma opção:\n1.Incluir uma nova área\n2.Incluir um novo animal\n3.Listar todos os animais\n4.Listar apenas o animal desejado\n5.Mudar animal de área\n6.Finalizar o programa\n");
        scanf("%d", &escolha);

        switch(escolha) {
            case 1:
                printf("Digite o máximo de animais da área %d: ", i + 1);
                scanf("%d", &area[i].maxAnimal);
                printf("Digite o GMD da área %d: ", i + 1);
                scanf("%f", &area[i].GMD);
                printf("Cadastro incluido com sucesso\n");
                i++;
            break;

            case 2:
                printf("Digite o Brinco do animal %d: ", j + 1);
                scanf(" %s", animal[j].nome);
                printf("Digite o peso do animal %d: ", j + 1);
                scanf("%f", &animal[j].peso);
                printf("Cadastro incluido com sucesso\n");
                j++;
            break;

            case 3:
                for(int x = 0; x < j; x++) {
                    printf("ID: %d Brinco: %s Peso: %.2f\n", x+1, animal[x].nome, animal[x].peso);
                }
            break;

            case 4:
                printf("Digite o id do animal que será exibido: ");
                scanf("%d", &escolhaAnimal);
                escolhaAnimal--;
                printf("ID: %d Brinco: %s Peso: %.2f\n", escolhaAnimal + 1, animal[escolhaAnimal].nome, animal[escolhaAnimal].peso);
            break;

            case 5:
                printf("Digite o id do animal que deseja mudar de área: ");
                scanf("%d", &idAnimal);
                idAnimal--;
                printf("Digite o id da área para qual o animal vai: ");
                scanf("%d", &idArea);
                idArea--;
                printf("Digite o número de dias que o animal vai ficar na área: ");
                scanf("%d", &tempo);

                if(area[idAnimal].animalCont <= area[idAnimal].maxAnimal) {
                    animal[idAnimal].peso = animal[idAnimal].peso + (area[idArea].GMD * tempo);
                    printf("Mudança de área feita com sucesso\n");
                    area[idAnimal].animalCont++;
                }
                else {
                    printf("ERRO: Área lotada!");
                }

            break;

            case 6:
                return 0;
        }
    } while(escolha != 6);
}