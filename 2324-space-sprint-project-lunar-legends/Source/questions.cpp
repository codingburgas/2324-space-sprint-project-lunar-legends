#include "../Header Files/questions.h"

void questionsEasy()
{
    cout << "Instructions: \n Every answer starts with capital letters even if it has two words like an answer." << endl;
    cout << "Press ENTER when you are ready with your answer." << endl;
    string a, b, c, d, e, f, g, h, i, j;

    int score = 0;

    cout << "1. What is the name of our closest star?" << endl;
    cin.ignore();
    getline(cin, a);
    if (a == "Sun")
        score++;


    cout << "2. Which planet is known as the \"Morning Star\" or \"Evening Star\"?" << endl;
    getline(cin, b);
    if (b == "Venus")
        score++;

    cout << "3. What is the name of the largest planet in our solar system?" << endl;
    getline(cin, c);
    if (c == "Jupiter")
        score++;

    cout << "4. What is the name of the natural satellite that orbits Earth?" << endl;
    getline(cin, d);
    if (d == "Moon")
        score++;
}