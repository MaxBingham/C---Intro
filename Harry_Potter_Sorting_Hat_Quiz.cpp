#include <iostream>
#include <string>

int main () {
   int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;
    
    int answer1;
    int answer2;
    int answer3;
    int answer4;

    std::cout << "---------------------" << std::endl;
    std::cout << "The Sorting Hat Quiz!" << std::endl;
    std::cout << "---------------------\n \n" << std::endl;

    //First Question 

    std::cout << "\n \n Q1) When I'm dead, I want people to remember me as: \n";
    std::cout << "  1) The Good \n  2) The Great \n  3) The Wise \n  4) The Bold \n";   
    std::cout << "Please enter your answer: \n";
    std::cin >> answer1; 
    
    if (answer1 == 1) {
        hufflepuff++;
    }
    else if (answer1 == 2) {
        slytherin++;
    }
    else if (answer1 == 3) {
        ravenclaw++;
    }
    else if (answer1 == 4) {
        gryffindor++;
    }
    else {
        std::cout << "Invalid input. Please enter a number between 1 and 4." << std::endl;
        return 1;
    }

    
    //Second question 

    std::cout << "Q2) Dawn or Dusk? \n \n 1) Dawn \n 2)Dusk \n Please enter your answer \n";
    std::cout << "Please enter your answer: \n";
    std::cin >> answer2 ; 
    if(answer2 == 1) {
        gryffindor ++; 
        ravenclaw ++; 
    }
    else if (answer2 == 2) {
        hufflepuff ++; 
        slytherin ++; 
    }
    else {
        std::cout << "Invalid output! \n";
    }

    //Thrid Question 

    std::cout << "Q3) Which kind of instrument most pleases your ear? \n";
    std::cout << "1) The violin \n 2) The trumpet\n 3) The piano \n 4) The drum \n";
    std::cout << "Please enter your answer: \n";
    std::cin >> answer3;
    if(answer3 == 1) {
        slytherin ++; 
    }
    else if (answer3 == 2) {
        hufflepuff ++; 
    }
    else if(answer3 == 3) {
        ravenclaw ++;
    }
    else if (answer3 == 4) {
        gryffindor ++; 
    }
    else {
        std::cout << "Invalid output! \n";
    }

    //Fourth Question 

    std::cout << "Q4) Which road tempts you most? \n"; 
    std::cout << "1) The wide, sunny grassy lane \n 2) The narrow, dark, lantern-lit alley \n 3) The twisting, leaf -strewn path through woodsd\n 4) The cobbled street lined (ancient buildings) \n ";
    std::cout << "Please enter your answer: \n";
    std::cin >> answer4 ; 

    std::cout << "And your house is......... \n \n \n";

    if(answer4 == 1) {
        hufflepuff ++; 
    }
    else if(answer4 == 2) {
        slytherin ++;
    }
    else if (answer4 == 3) {
        gryffindor ++;
    }
    else if (answer4 == 4) {
        ravenclaw ++; 
    }
    else {
        std::cout << "Invalid output! \n";
    }

    int max = 0 ; 
    std::string house; 

    if(gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor"; 
    }
    else if (hufflepuff > max) {
        max = hufflepuff;
        house  = "hufflepuff"; 
    }
    else if ( ravenclaw > max) {
        max=ravenclaw; 
        house = "ravenclaw"; 
    }
    else if ( slytherin > max) {
        max = slytherin; 
        house = "slytherin";
    }

    
    std::cout << "---------------------" << std::endl;
    std::cout <<    house << "! \n ";
    std::cout << "---------------------" << std::endl;
    return 0; 
}