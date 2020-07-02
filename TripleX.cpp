#include <iostream>

void PrintIntroduction() 
{
    //Print welcome messages to the terminal
    std::cout << "\n\nYou are a secret agent breaking into a secure server room...\n";
    std::cout << "You need to enter the correct codes to continue... \n\n";
}

bool PlayGame()
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
        return true;
    }
    else 
    {
        std::cout << "\nYou lose";
        return false;
    }
}

int main()
{   
    while (true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); //Discards the buffer
    }

    return 0;
}