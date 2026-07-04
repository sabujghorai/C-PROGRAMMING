#include<stdio.h>
    int main(){
    struct pokemon{ // pokemon is the user define data type
        int hp;
        int speed;
        int attack;
    };
    struct pokemon pikachu;
    printf("Enter the attack of pikachu :");
    scanf("%d",&pikachu.attack);
    pikachu.hp = 80;
    // pikachu.attack = 70;
    pikachu.speed = 100;

    struct pokemon charizard ;
    charizard.hp = 120;
    charizard.attack = 90;
    charizard.speed = 200;

printf(" Attack of pikachu stored is = %d \n",pikachu.attack);
return 0;
}