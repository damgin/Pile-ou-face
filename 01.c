#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACE 2
#define PILE 1

int main(){
    
    printf  ("Règles du Jeux : entrée (1) pour pile et (2) pour face\n pour quitter entrée (0)\n");
    srand(time(NULL));
    int boucle = 1;
    while(boucle < 11){

        int piece = rand()%2 + 1;     ///aléatoire 1//2 = pile ou face
        printf("boucle: %d\n",boucle);
        printf ("pile ou Face ?\n"); 
        boucle++;
            
            
        int reponse;             ////on atribut un réponse qui devra etre correct///
        scanf("%d",&reponse);
        printf("la réponse est");
        fflush(stdout);
        sleep(1);
        printf(".");
        fflush(stdout);
        sleep(1);
        printf(".");
        fflush(stdout);
        sleep(1);
        printf(".:\n");
        if(reponse == 0){
            printf("a bientot !\n");
            return 0;
        }

        if (piece == reponse){     //si la piece correspond///
            printf("bien jouer !\n");  
        }else{
            printf("faux! esseye encore!\n");
        }
    }
    
    return 0;
}
