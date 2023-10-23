#include <iostream>
#include <iomanip>
using namespace std;

//ask for 5 test scores
//calculte the average of the testscors
//the number displayed should be formatted in fixed_point notation, with one decimal point of precsion

int main ()
{
    const int number_of_testScores = 5;
    double testScore1, testScore2, testScore3,testScore4,testScore5, averageScore;
    cout << "Enter the five testscores \n";
    cout <<"Press enter to continue \n";
    cin.get();
    cout <<endl;
    cout << "Test Score 1 : \t";
    
    cin >> testScore1;
    cout << "Test score 2 : \t";
    cin >> testScore2;
    cout << "Test score 3 : \t";
    cin >> testScore3;
    cout << "Test score 4 : \t";
    cin >> testScore4;
    cout << "Test score 5 : \t";
    cin >> testScore5;

    averageScore =(testScore1 + testScore2 +testScore3 + testScore4 + testScore5) / number_of_testScores;
    cout << setprecision(1) << fixed;
   cout << "Average score : \t" << setw(3) << averageScore ;
    return 0;

}