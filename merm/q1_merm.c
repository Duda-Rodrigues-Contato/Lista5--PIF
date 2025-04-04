/* QUESTÃO 1 - 1049 (Animal) */
/* Uso obrigatório:
    1 - Um Enum (para representar as categorias de animais) 
    2 - Uma Struct (para armazzenar as caracteristicas) 
*/

#include <stdio.h>


int main() {

    char palavra[50], palavra2[30], palavra3[30];

    enum Vertebrados {

        ave, carnivoro, onivoro, aguia, pomba, mamifero, herbivoro, homem, vaca

    } typedef animaisVertebrados;

    enum Invertebrados {

        inseto, hematofago, herbivoro, pulga, lagarta, anelideo, sanguessuga, onivoro, minhoca

    } typedef animaisInvertebrados;

    animaisVertebrados vertebrado1;
    animaisVertebrados vertebrado2;
    animaisInvertebrados invertebrado1;
    animaisInvertebrados invertebrado2;

    struct Caracteristicas{

        animaisVertebrados vertebrado1;

        char carac1;
        char carac2;
        char carac3;

    } typedef caracteristicasGerais;

    caracteristicasGerais vertebrado1 = {"vertebrado", "ave", "carnivoro"};
    caracteristicasGerais vertebrado2 = {"vertebrado", "ave", "onivoro"};
    caracteristicasGerais vertebrado3 = {"vertebrado", "mamifero", "onivoro"};
    caracteristicasGerais vertebrado4 = {"vertebrado", "mamifero", "herbivoro"};
    caracteristicasGerais invertebrado1 = {"invertebrado", "inseto", "hematofago"};
    caracteristicasGerais invertebrado2 = {"invertebrado", "inseto", "herbivoro"};
    caracteristicasGerais invertebrado3 = {"invertebrado", "anelideo", "hematofago"};
    caracteristicasGerais invertebrado4 = {"invertebrado", "anelideo", "onivoro"};


    return 0;

}