// Para saber mais sobre o programa, consulte o README ;)!

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
    int areaAtual;
} Animal;

int main () {
    int escolha, i = 0, j = 0, idAnimal, idArea, tempo, escolhaAnimal;
    Area area[10];
    Animal animal[100];

    for(int i = 0; i < sizeof(area); i++) {
        area[i].animalCont = 0;
    }

    do {
        printf("Escolha uma opção:\n1.Incluir uma nova area\n2.Incluir um novo animal\n3.Listar todos os animais\n4.Listar apenas o animal desejado\n5.Mudar animal de area\n6.Finalizar o programa\n");
        scanf("%d", &escolha);

        switch(escolha) {
            case 1:
                printf("Digite o máximo de animais da area %d: ", i + 1);
                scanf("%d", &area[i].maxAnimal);
                printf("Digite o GMD da area %d: ", i + 1);
                scanf("%f", &area[i].GMD);
                printf("Cadastro incluido com sucesso.\n");
                i++;
            break;

            case 2:
                printf("Digite o brinco ou nome do animal %d: ", j + 1);
                scanf(" %s", animal[j].nome);
                printf("Digite o peso do animal %d (em Kg): ", j + 1);
                scanf("%f", &animal[j].peso);
                printf("Cadastro incluido com sucesso.\n");
                j++;
            break;

            case 3:
                for(int x = 0; x < j; x++) {
                    printf("ID: %d Brinco: %s Peso: %.2f Kg\n", x+1, animal[x].nome, animal[x].peso);
                }
            break;

            case 4:
                printf("Digite o id do animal que será exibido: ");
                scanf("%d", &escolhaAnimal);
                escolhaAnimal--;
                printf("ID: %d Brinco: %s Peso: %.2f Kg\n", escolhaAnimal + 1, animal[escolhaAnimal].nome, animal[escolhaAnimal].peso);
            break;

            case 5:
                printf("Digite o id do animal que deseja mudar de area: ");
                scanf("%d", &idAnimal);
                idAnimal--;
                printf("Digite o id da area para qual o animal vai: ");
                scanf("%d", &idArea);
                idArea--;
                printf("Digite o número de dias que o animal vai ficar na area: ");
                scanf("%d", &tempo);

                if(area[idArea].animalCont < area[idArea].maxAnimal) {
                    animal[idAnimal].peso = animal[idAnimal].peso + (area[idArea].GMD * tempo);
                    printf("Mudança de area feita com sucesso.\n");
                    area[idArea].animalCont++;
                }
                else {
                    printf("Area lotada!\n");
                }

                if(animal[idAnimal].areaAtual != idArea) {
                    area[animal[idAnimal].areaAtual].animalCont--;
                    animal[idAnimal].areaAtual = idArea;
                }
            break;

            case 6:
                return 0;

            default: printf("ERRO, essa opção não existe, tente outra!\n");
        }
    } while(escolha != 6);
}