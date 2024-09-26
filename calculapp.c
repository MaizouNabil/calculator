#include <stdio.h>

#include <math.h>

void addition(){

    int i , n;
    float sum =0, number;

    printf("enter how many number you wanna sum:");
    scanf("%d", &n);


    for (i = 0 ; i < n ; i++){

        printf("enter the number %d : ", i + 1);
        scanf("%f",&number);

        sum+=number;
    }

    printf(" your result : %.2f", sum);
}

void soustraction(){

    float a , b ;

    printf(" enter number 1 :");
    scanf("%f",&a);


    printf("enter the number 2 :");
    scanf("%f", &b);


    printf("the result is : %.2f", a - b );
}


void multiplication(){

    int i , n;
    float produit =1, number;

    printf("enter how many number you wanna multiple:");
    scanf("%d", &n);


    for (i = 0 ; i < n ; i++){

        printf("enter the number %d : ", i + 1);
        scanf("%f",&number);

        produit *= number;
    }

    printf(" your result : %.2f", produit);
}

void division(){

    float a , b ;

    printf(" enter number 1 :");
    scanf("%f",&a);


    printf("enter the number 2 :");
    scanf("%f", &b);

    if ( b == 0){
        printf("there is in error try again");
    }else{

        printf("the result is : %.2f", a / b );
    }    
}

void moyenn(){

    int i , n;
    float sum =0, number;

    printf("enter how many number you wanna get their moyenn:");
    scanf("%d", &n);


    for (i = 0 ; i < n ; i++){

        printf("enter the number %d : ", i + 1);
        scanf("%f",&number);

        sum+=number;
    }

    printf(" your moyenn : %.2f", sum /n);
}


void racinecare(){


    float number;

    printf("enter a number positiv:");
    scanf("%f", &number);

    if(number < 0){
        printf("error enter a positiv number");
    }else{
        printf("La racine carree de %.2f est %.2f\n", number, sqrt(number));
    }
}

void valeurabsolue (){

float number;

    printf("enter a number positiv:");
    scanf("%f", &number);

    if(number < 0){
        printf("error enter a positiv number");
    }else{
        printf("La racine carree de %.2f est %.2f\n", number, sqrt(number));
    }
}

void exponentiation() {
    float number, exponent;
    printf("Entrez la base : ");
    scanf("%f", &number);
    printf("Entrez l'exposant : ");
    scanf("%f", &exponent);
    printf("Résultat de %.2f^%.2f : %.2f\n", number, exponent, pow(number, exponent));
}
int main(){

    int choix ;

    do{
        printf("1 -Addition :\n");
        printf("2 -Soustraction :\n");
        printf("3 -multiplication :\n");
        printf("4 -division :\n");
        printf("5 -Moyenne :\n");
        printf("6 -racine carree :\n");
        printf("7 -valeur absolue: \n");
        printf("8 -exponontiel : :\n");
        printf("Enrer Votre choix :");
        scanf("%d",&choix);

        printf("Quitter");

        switch(choix ){
            case 1 : 
                 addition();

             break; 


             case 2 : 
                 soustraction();

              break;
              case 3 : 
                  multiplication();

               break; 

               case 4:

                  division();

                break;
                

                case 5:

                moyenn();

                break; 

                case 6:
                racinecare();
                break;

                case 7 :
                valeurabsolue();
                break;

                case 8:
                exponentiation();
                break;
        }
    }while (choix !=9);
   
}