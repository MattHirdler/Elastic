#ifndef PLAYER_H
#define PLAYER_H

#include "Mob.h"
#include "AnimatedSprite.h"
#include <string>

class Player: public Mob
{
    public:
        Player(const char* animUp, const char* animDown, const char* animLeft, const char* animRight);
        virtual ~Player();
        void ProcessInput();
        void MoveX(float x);
        void MoveY(float y);
        void Draw(int xOffset, int yOffset, sf::RenderWindow* rw, sf::Time& frameTime);
    protected:
    private:
        sf::Texture spriteSheet;
        AnimatedSprite animatedSprite;
        //Animations
        Animation walkingAnimationDown;
        Animation walkingAnimationUp;
        Animation walkingAnimationLeft;
        Animation walkingAnimationRight;

        Animation* currentAnimation;
};

#endif // PLAYER_H
