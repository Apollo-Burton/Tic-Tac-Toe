#include <iostream>

std::string a1 = " ", a2 = " ", a3 = " ", b1 = " ", b2 = " ", b3 = " ", c1 = " ", c2 = " ", c3 = " ";
std::string input;
std::string turn;
std::string ack;
bool game = true;
int count = 0;

void play() {
  
    std::cout << "Input \"help\" for valid commands";
    while (game) {

        std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
        std::cout << map;
        count++;

        // Handling inputs
        if (count % 2 != 0) {

            turn = "X";

        } if (count % 2 == 0) {

            turn = "O";

        }
        std::cout << "\n" + turn + "'s turn: ";
        std::cin >> input;

        if (input == "help") {

            std::cout << "\nInputs are: \n\"topleft\" or \"a1\", \n\"topmiddle\" or \"b1\", \n\"topright\" or \"c1\", \n\"middleleft\" or \"a2\", \n\"middle\" or \"b2\", \n\"middleright\" or \"b3\", \n\"bottomleft\" or \"a3\", \n\"bottommiddle\" or \"b2\", \n\"bottomright\" or \"c3\", \nand \"quit\" to end the game\n";
            std::cout << "Spaces and capitalization matter\n";

            std::cout << "\n    a   b   c";
            std::cout << "\n 1  " + a1 + " | " + b1 + " | " + c1 + " \n";
            std::cout << "   -----------\n";
            std::cout << " 2  " + a2 + " | " + b2 + " | " + c2 + " \n";
            std::cout << "   -----------\n";
            std::cout << " 3  " + a3 + " | " + b3 + " | " + c3 + " \n\n";
            
            std::cout << "Input anything to continue: ";
            std::cin >> ack;
            count--;
            continue;
            
        } else if (input == "quit") {
            
            std::cout << "Quitting game...\n";
            game = false;

        } else if ((input == "topleft" || input == "a1") && a1 == " ") {

            a1 = turn;

        } else if ((input == "topmiddle" || input == "b1") && b1 == " ") {

            b1 = turn;

        } else if ((input == "topright" || input == "c1") && c1 == " ") {

            c1 = turn;
                
        } else if ((input == "middleleft" || input == "a2") && a2 == " ") {

            a2 = turn;

        } else if ((input == "middle" || input == "b2") && b2 == " ") {

            b2 = turn;

        } else if ((input == "middleright" || input == "c2") && c2 == " ") {

            c2 = turn;

        } else if ((input == "bottomleft" || input == "a3") && a3 == " ") {

            a3 = turn;

        } else if ((input == "bottommiddle" || input == "b3") && b3 == " ") {

            b3 = turn;

        } else if ((input == "bottomright" || input == "c3") && c3 == " ") {

            c3 = turn;

        } else {

            std::cout << "Not a valid input, try again\n";
            count--;
            continue;

        }

        // Checking if columns are X or O, if true, displaying the final grid
        if (count >= 5) {
            
            if (a1 == a2 && a2 == a3 && a1 != " ") {
                
                std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
                std::cout << map;
                std::cout << a1 + " Won!\n";
                game = false;

            } else if (b1 == b2 && b2 == b3 && b1 != " ") {
                
                std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
                std::cout << map;
                std::cout << b1 + " Won!\n";
                game = false;

            // Checking if rows are X or O, if true, displaying the final grid
            } else if (c1 == c2 && c2 == c3 && c1 != " ") {
                
                std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
                std::cout << map;
                std::cout << c1 + " Won!\n";
                game = false;

            } else if (a1 == b1 && b1 == c1 && a1 != " ") {

                std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
                std::cout << map;
                std::cout << a1 + " Won!\n";
                game = false;

            } else if (a2 == b2 && b2 == c2 && a2 != " ") {
                
                std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
                std::cout << map;
                std::cout << a2 + " Won!\n";
                game = false;

            } else if (a3 == b3 && b3 == c3 && a3 != " ") {
                
                std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
                std::cout << map;
                std::cout << a1 + " Won!\n";
                game = false;
                
            // Checking if diagonals are X or O, if true, displaying the final grid
            } else if (a1 == b2 && b2 == c3 && a1 != " ") {
                
                std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
                std::cout << map;
                std::cout << a1 + " Won!\n";
                game = false;

            } else if (c1 == b2 && b2 == a3 && c1 != " ") {
                
                std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
                std::cout << map;
                std::cout << c1 + " Won!\n";
                game = false;

            // Cats Game
            } else if (count >= 9) {

                std::string map = "\n " + a1 + " | " + b1 + " | " + c1 + " \n" + "-----------\n" + " " + a2 + " | " + b2 + " | " + c2 + " \n" + "-----------\n" + " " + a3 + " | " + b3 + " | " + c3 + " \n\n";
                std::cout << map;
                std::cout << "Cats Game\n";
                game = false;

            }

        }

    }

}
