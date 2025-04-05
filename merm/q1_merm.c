/* QUESTÃO 1 - 1049 (Animal) */
/* Uso obrigatório:
    1 - Um Enum (para representar as categorias de animais) 
    2 - Uma Struct (para armazzenar as caracteristicas) 
*/

#include <stdio.h>


int main() {

    /*enum EntradaUm {vertebrado, invertebrado};
    enum VertebradosUm {ave, mamifero};
    enum VertebradosAve {carnivoro, onivoro};
    enum VertebradosMamifero {onivoro, herbivoro};
    enum InvertebradosUm {inseto, hematofago, herbi, pulga, lagarta, anelideo, sanguessuga, oni, minho} typedef animaisInvertebrados;*/

    struct Caracteristicas{

        char caracteristicaUm;
        char caracteristicaDois;
        char caracteristicaTres;

    } typedef caracteristicasGerais;

    caracteristicasGerais entrada1;

    scanf("%s", &entrada1.caracteristicaUm);

    if (entrada1.caracteristicaUm == "vertebrado") {

        scanf("%s", &entrada1.caracteristicaDois);

        if (entrada1.caracteristicaDois == "ave") {

            scanf("%s", &entrada1.caracteristicaTres);

            if (entrada1.caracteristicaTres == "carnivoro") {

                printf("homem\n");

            } else if (entrada1.caracteristicaTres == "onivoro") {

                printf("pomba\n");

            }

        } else if (entrada1.caracteristicaDois == "mamifero") {

            scanf("%s", &entrada1.caracteristicaTres);

            if (entrada1.caracteristicaTres == "onivoro") {

                printf("homem\n");

            } else if (entrada1.caracteristicaTres == "herbivoro") {

                printf("vaca\n");
            
            }


        }

    } else if (entrada1.caracteristicaUm == "invertebrado") {

        scanf("%s", &entrada1.caracteristicaDois);

        if (entrada1.caracteristicaDois == "inseto") {

            scanf("%s", &entrada1.caracteristicaTres);

            if (entrada1.caracteristicaTres == "hematofago") {

                printf("pulga\n");

            } else if (entrada1.caracteristicaTres == "herbivoro") {

                printf("lagarta\n");

            }

        } else if (entrada1.caracteristicaDois == "anelideo") {

            scanf("%s", &entrada1.caracteristicaTres);

            if (entrada1.caracteristicaTres == "hematofago") {

                printf("sanguessuga\n");

            } else if (entrada1.caracteristicaTres == "onivoro") {

                printf("minhoca\n");
            }

        }

    }

    return 0;

}