#include <iostream>                                       //Include the library for Console in-/outputs

int main() {                                            //Main class
	const int number = 10;                            //The goal number (not random because randomize in C++ isnt that easy)
	int guess;                                        //Define the guess number so we can use it in the do while loop

	do                                                 //This will run without condition
	{
		std::cout << "Guess: " << std::endl;
		std::cin >> guess;
		if (guess == number) {
			std::cout << "Corrent the number was " << number << std::endl;
		}
		else if (guess > number) {
			std::cout << "The number is smaller than " << guess << std::endl;
		}
		else if (guess < number) {
			std::cout << "The number is bigger than " << guess << std::endl;
		}
	} while (guess != number);                                      //Until here and it will repeat until the condition in the brackets 
}                                                  //Why we use do while and not while? --> At first it cant be right so when we use while instead it would check if the guess equals the number without an guess was made!
