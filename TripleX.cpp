#include <iostream>

void PrintIntroduction() 
{
    //Print welcome messages to the terminal
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "You need to enter the correct codes to continue... \n\n";
}

void PlayGame()
{
    PrintIntroduction();
    
    //Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print CodeSum and CodeProduct to the terminal 
    std::cout << "+ There are 3 numbers in the code \n";
    std::cout << "\n+ The codes add-up to: " <<CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
  
    //store player guess 
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the plyaer's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    
    {
        std::cout << "\nYou win";
    }
    else 
    {
        std::cout << "\nYou lose";
    }
}

int main()
{   
    PlayGame();
    return 0;
}