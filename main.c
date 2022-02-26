// ---Nested struct in C---------
#include <stdio.h>

int main()
{

    struct Intrest //- creating the struct for main-
    {
        char Book[120];
        char Game[114];
        char Series[120];
    };

    struct Degree //- creating the struct for main-
    {
        char College[150];
        char Youtube_channel[130];
        char Website[120];
        char People[120];
    };
    struct student //-Creating the main struct-
    {
        char Name[130];
        int Age;
        struct Intrest In;
        struct Degree Deg;
    };

    //--- Creating the value for all the struct-
    struct student sushant = {"Sushant khadka", 20,
    {"The Monk Who Sold his ferrari", "Football", "Vikings"},
    {"Nepal College Of Information Technology", "Free code.com", "Github", "Harshit Varshit"}};

    //---Printing or Accessing the value---
    printf("+-----------------------------------------------------------+\n");
    printf("| Name : %s\n", sushant.Name);
    printf("| Age : %d\n", sushant.Age);
    printf("| Favourite-book : %s\n", sushant.In.Book);
    printf("| Favourite_game : %s\n", sushant.In.Game);
    printf("| Favourite_series : %s\n", sushant.In.Series);
    printf("| College : %s\n", sushant.Deg.College);
    printf("| Favourite_Youtube_channel : %s\n", sushant.Deg.Youtube_channel);
    printf("| Website : %s\n", sushant.Deg.Website);
    printf("| People : %s\n", sushant.Deg.People);
    printf("+-----------------------------------------------------------+\n");

    return 0;
}