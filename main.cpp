#include <iostream>
#include <vector>
#include <fstream>

class Questions{
    public:
    //object creations
        std::string questions;
        std::vector<std::string> choices;
        char answer;

        //Constructor
        Questions(const std::string& questions, const std::vector<std::string>& choices, char answer) 
    : questions(questions), choices(choices), answer(answer) {}



};

void Formating(const Questions& x){
    std::cout << x.questions <<std::endl;

    for(int i = 0; i < 4; i++){
        std::cout <<char('A'+ i) << ") " <<x.choices[i] <<std::endl;
    }
}

int main(){
    int score = 0;
    char userAnswer;

    std::vector<std::string> choices = {"MJ", "Kobe", "Wilt", "Jerry West"};

    Questions one("Who's the nba logo?", 
    choices,
    'D'
    );
    Questions two("Who scored the most points in a single NBA Game?", 
    choices,
    'C'
    );
    Questions questions[] = {one, two};  // Array of questions
    
    int length = sizeof(questions) / sizeof(questions[0]);

    for(int i = 0; i < length; i++){
        // displays the questions
        Formating(questions[i]);

        // get user answer
        std::cout << "Enter your answer (A, B, C, or D): ";
        std::cin >> userAnswer;

        if (userAnswer == questions[i].answer){
            std::cout << "Correct! Good Job you know your stuff" << std::endl;
            score ++;
        } else {
            std::cout << "Wrong! The correct answer was: " << questions[i].answer << std::endl;
        }

        // Wait for the user to press Enter to continue
        std::cout << "Press Enter to continue..." << std::endl;
        std::cin.ignore();  // To clear the input buffer
        std::cin.get();    // Wait for Enter

        
    }
    // Display final score
    std::cout << "Your final score is: " << score << std::endl;


    return 0;
}