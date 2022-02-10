// WakinUpTextAdventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
	order
	1. shower first or brush teeth
	2. drink tea or coffee
	3. waffles or pancakes
	4. getting ready for work buissness casual or professional
	5. get coffee for coworkers or keep driving
	6. the end*/

	//Start the game


	//brush or shower

	//drink?

	//food?

	//clothes?

	//coffee?

	//end
#include <iostream>
#include <windows.h>
#include <string>

void brushorShower();
void begin();
void drink();
void food();
void clothes();
void coffee();
void end();
//1
void begin() {
	int choice;

	std::cout << "1. Start Game\n";
	std::cout << "2. Credits\n";

	std::cin >> choice;

	if (choice == 1) {
		brushorShower();
	}
	else if (choice == 2) {
		std::cout << "Game made by Joshua Nageli\n";
		std::cout << "Thank you mom for the support and inspiring me to start learning code!\n";
		begin();
	}
	else {
		std::cout << "InvalidNumber\n";
		begin();
	}
}
//2
void brushorShower() {
	int choice1;
	//Game start
	std::cout << "Waking up: by Joshua Nageli\n";
	std::cout << "You wake up at 5am and you climb out of bed. You have two choices: \n";
	//question asked
	std::cout << "1. brush first, shower next\n";
	std::cout << "2. shower first, brush next\n";
	//question answered
	std::cin >> choice1;

	if (choice1 == 1) {
		std::cout << "You brush ur teeth. You then take a shower, you feel refreshed.\n";
		drink();
	}
	else if (choice1 == 2) {
		std::cout << "You take a shower, you feel refreshed. You then brush ur teeth\n";
		drink();
	}
	else {
		std::cout << "InvalidNumber\n";
		brushorShower();
	}
}
//3
void drink() {
	int choice2;
	//Next words
	std::cout << "After putting on some clothes you go to the kitchen for a drink to start ur day.\n";
	//questions
	std::cout << "1. Tea?\n";
	std::cout << "2. Coffee?\n";
	std::cout << "3. Juice?\n";
	std::cout << "4. Smoothie?\n";
	//answer
	std::cin >> choice2;

	if (choice2 == 1) {
		std::cout << "You make a nice cup of tea. You feel calm and ready.\n";
		//next choice
		food();
	}
	else if (choice2 == 2) {
		std::cout << "You make a nice cup of coffee. You feel calm and energized!\n";
		food();
		//next
	}
	else if (choice2 == 3) {
		std::cout << "You drink some orange juice. You feel healthy and ready.\n";
		food();
		//next
	}
	else if (choice2 == 4) {
		std::cout << "You make a smoothie. You feel healthy and energized!\n";
		food();
	}
	else {
		std::cout << "INVALID NUMBER\n";
		drink();
	}
}
//4
void food() {
	int choice3;
	//transition
	std::cout << "After a nice drink you feel hungery.\n";
	//questions
	std::cout << "1. Waffles\n";
	std::cout << "2. Pancakes\n";
	//user input
	std::cin >> choice3;

	if (choice3 == 1) {
		std::cout << "You make some waffles and eat them. THE WAFFLES ARE SOOO GOOOD!";
		clothes();
	}
	else if (choice3 == 2) {
		std::cout << "You make some pancakes and eat them. They dissaper in a moment!\n";
		clothes();
	}
	else {
		std::cout << "INVALID NUMBER\n";
		food();
	}
}
//5
void clothes() {
	int choice4;
	int choice5;
	int choice6;
	//transition
	std::cout << "After breakfast you get ready for work.\n";
	//question
	std::cout << "You can wear buisness casual or professional\n";
	std::cout << "1. buisness casual\n";
	std::cout << "2. professional\n";

	std::cin >> choice4;

	if (choice4 == 1) {
		std::cout << "You can wear a dress or a suit!\n";
		std::cout << "1. Dress\n";
		std::cout << "2. Suit\n";

		std::cin >> choice5;

		if (choice5 == 1) {
			std::cout << "You put on a very comfy and colorful dress. You feel confident!\n";
			coffee();
		}
		else if (choice5 == 2) {
			std::cout << "You put on a very comfy and cool looking suit. You feel cool!\n";
			coffee();
		}
		else {
			std::cout << "INVALID\n";
			clothes();
		}
	}
	else if (choice4 == 2) {
		std::cout << "You can wear a dress or a suit!\n";
		std::cout << "1. Dress\n";
		std::cout << "2. Suit\n";

		std::cin >> choice6;

		if (choice6 == 1) {
			std::cout << "You put on a professional dress.\n";
			coffee();
		}
		else if (choice6 == 2) {
			std::cout << "You put on a professional suit.\n";
			coffee();
		}
		else {
			std::cout << "INVALID\n";
			clothes();
		}
	}
}
//6
void coffee() {
	int choice7;
	//transition
	std::cout << "You get in your car and start driving to work. You see a coffee shop on ur way. Do you want to buy coffee for your coworkers?\n";
	//questions
	std::cout << "1. buy coffee\n";
	std::cout << "2. dont buy coffee\n";
	
	std::cin >> choice7;

	if (choice7 == 1) {
		std::cout << "You buy coffee for ur coworkers.\n";
		std::cout << "You reach ur workplace. You walk in and see ur coworkers hard at work, you give each one of them a cup of coffee. They say thanks and complement you on ur clothes. Your day is starting off great!\n";
		end();
	}
	else if (choice7 == 2) {
		std::cout << "You keep on driving.\n";
		std::cout << "You reach ur workplace. You walk in and see ur coworkers hard at work, you walk on and go to ur area. Today is a boring day.\n";
		end();
	}
	else {
		std::cout << "INVALID\n";
		coffee();
	}
} 
//7
void end() {
	int choice8;
	std::cout << "Thank you for playing!\n";
	std::cout << "This was my first game!\n";
	std::cout << "1. credits\n";
	std::cout << "2. go back to beginning\n";

	std::cin >> choice8;

	if (choice8 == 1) {
		std::cout << "Waking up: By Joshua Nageli\n";
		std::cout << "Thank you mom for the support!\n";
		std::cout << "Thank you loppezz!\n";
		begin();
	} else if (choice8 == 2) 
	{
		begin();
	}
	else {
		std::cout << "INVALID\n";
		end();
	}
}

int main()
{
	begin();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu

