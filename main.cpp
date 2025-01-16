#include <iostream>
#include <vector>

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
    std::vector<std::string> choices = {"MJ", "Kobe", "Wilt", "Jerry West"};

    Questions one("Who's the nba logo?", 
    choices,
    'D'
    );
    Questions two("Who scored the most points in a single NBA Game?", 
    choices,
    'C'
    );

    Formating(one);
    Formating(two);

    return 0;
}