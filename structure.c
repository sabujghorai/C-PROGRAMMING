#include<stdio.h>
    int main(){
    struct pokemon{ // pokemon is the user define data type
        int hp;
        int speed;
        int attack;
    };
    struct pokemon pikachu;
    pikachu.hp = 80;
    pikachu.attack = 70;
    pikachu.speed = 100;

    
printf("%d",pikachu.attack);
return 0;
}