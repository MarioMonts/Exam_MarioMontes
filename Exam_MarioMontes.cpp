/// Examene I  Mario Montes



#include <iostream>
#include <cstdlib> 
#include <string>


using namespace std;
int action = 0;
char decision [3];
char decision2 [3];
char decision3[3];
void play();

int main()

{

    do 
    {

    cout << "Welcome to the Lobby - Game Room! \n" << endl;
    cout << "Please select one of the options from below:\n" << endl;

    cout << "1.- Play\n" << endl;
    cout << "2.- Exit\n" << endl;

    cin >> action;
    cout << "\n" << endl;

    system("cls");

    
    switch (action)
    {

    case 1:

        do
        {
        
        play();
        cout << "\n" << endl;
        cout << "Do you want to continue playing? Enter -Yes- or -No- \n" << endl;
        cin >> decision;
        cout << "\n" << endl;
        } while ((strcmp(decision, "Yes") == 0 || strcmp(decision, "yes") == 0));
        break;

    case 2:

        
        cout << "Are you sure you want to exit the game? Enter -Yes- or -No- \n";
        cin >> decision2;
        cout << "\n" << endl;
        system("cls");
        break;


    default: cout << "Please select a valid option\n";
      
    }

    cout << "Do you want to go back to the Lobby? Enter -Yes- or -No-\n";
    cin >> decision3;
    cout << "\n" << endl;
    system("cls");
    } while ((strcmp(decision3, "Yes") == 0 || strcmp(decision3, "yes") == 0));

    

    cout << "Thank you for playing Guess My Number! \n" << endl;


}


///// Main ends here










///// Functions starts here


int GuessParams(string question, int a, int b); 

void play()
{

    int high;
    int low;
    int guess;
    int tries = 0;
    int veryClose;
    


    cout << "Welcome to Guess My Numer! \n" << endl;
    cout << "Try to guess the secret number in the less attempts as possible\n" << endl;
    cout << "Please select a range\n" << endl;
    cout << "Low: \n" << endl;
    cin >> low;
    cout << "\n" << endl;
    cout << "High: \n" << endl;
    cin >> high;
    cout << "\n" << endl;

    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = low + (rand() % (high-low));
    int secretNumber = randomNumber;


    cout << "Secret number is: " << secretNumber << endl; //Depuracion
    cout << "\n" << endl;

    do
    {

        guess = GuessParams("Enter your number ", high, low); 
        cout << "\n" << endl;

        tries++;

        veryClose = secretNumber - guess;

        if (veryClose <= 5 && veryClose >= -5 && veryClose != 0)

        {
            cout << "You are close!\n";
        }

        if (guess > secretNumber) {
            cout << "Too High!\n\n";
        }

        else if (guess < secretNumber) {
            cout << "Too Low!\n\n";

        }
        else
        {

            cout << "AMAZING! You did it in " << tries << " attempts!";

        }


    } while (guess != secretNumber);

}


int GuessParams(string question, int a, int b)
{
    int num = 0; 

    do {

        cout << question << "between " << b << " and " << a << endl;
        cin >> num;

    } while (num > a || num < b); 

    return num;

}




