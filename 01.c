#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACE 2
#define PILE 1

int main(){
    printf  ("Règles du Jeux : entrée (1) pour pile et (2) pour face\n pour quitter entrée (0)\n");
    srand(time(NULL));
    while(1){

        int piece = rand()%2 + 1;     ///aléatoire 1//2 = pile ou face
        printf ("pile ou Face ?\n"); 
            
            
        int reponse;             ////on atribut un réponse qui devra etre correct///
        
        scanf("%d",&reponse);
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
