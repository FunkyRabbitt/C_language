#include <stdio.h>

int main()
{
    //--At the end of World war, Whole world is divided into two parts---
    struct Major_Axis_power  //---Axis power by German,Italy and Japan--
    {
        char German[20];
        char Italian[20];
        char Japanese[20];
    };
    struct Kingdom //--axis power kingdoms---
    {
        char German_[20];
        char Italian_[20];
        char Japanese_[20];
    };
    struct Major_Allies_Power //--Allies power by uk, soviet union and US--
    {
        char Uk[20];
        char Sovit[20];
        char US[20];
    };
    struct country
    {
        struct Major_Allies_Power Allis;
        struct Major_Axis_power Axis;
        struct Kingdom King;
    };
    struct country world = {{"United Kingdom","Soviet Union","United states"},
    {"German","Italian","Japanese"},
    {"German Reich","Kingdom of Itsly","Empire of Japan"}};
    
    //----Printing all the value of Above into the order---
    printf("\nA. Major_Axis_Power Country:\n"); //--Axis power-
    printf("1. %s\n",world.Axis.German);
    printf("2. %s\n",world.Axis.Italian);
    printf("3. %s\n\n",world.Axis.Japanese);
    printf("B. Major_Axis_Power Country's Kingdom:\n"); //--Axix power kingdoms--
    printf("1. %s\n",world.King.German_);
    printf("2. %s\n",world.King.Italian_);
    printf("3. %s\n",world.King.Japanese_);
    printf("\nC. Major_Allies_Power:\n"); //--Allies power--
    printf("1. %s\n",world.Allis.Uk);
    printf("2. %s\n",world.Allis.Sovit);
    printf("3. %s\n",world.Allis.US);

    return 0;
}