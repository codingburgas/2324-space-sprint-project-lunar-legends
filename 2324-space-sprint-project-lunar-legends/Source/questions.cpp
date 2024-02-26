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

void questionsNormal()
{
    cout << "Instructions:" << endl;
    cout << "Every answer starts with capital letters even if it has two words like an answer." << endl;
    cout << "Press ENTER when you are ready with your answer." << endl;
    string a, b, c, d, e, f, g, h, i, j;

    int score = 0;

    cout << "1. What is the name of the space agency responsible for the Apollo Moon landings?" << endl;
    cin.ignore();
    getline(cin, a);
    if (a == "NASA")
        score++;

    cout << "2. What is the name of the region beyond Neptune where many icy objects are located?" << endl;
    getline(cin, b);
    if (b == "Kuiper Belt")
        score++;


    cout << "3. What is the term for the point in an object's orbit where it is farthest from the Sun?" << endl;
    getline(cin, c);
    if (c == "Aphelion")
        score++;


    cout << "4. What is the name of the process by which a star transforms hydrogen into helium in its core?" << endl;
    getline(cin, d);
    if (d == "Nuclear Fusion")
        score++;


    cout << "5. What is the name of the first space station, launched by the Soviet Union in 1971?" << endl;
    getline(cin, e);
    if (e == "Salyut 1")
        score++;


    cout << "6. What is the name of the spacecraft launched by NASA to study Mars's atmosphere and climate?" << endl;
    getline(cin, f);
    if (f == "MAVEN")
        score++;


    cout << "7. What is the name of the brightest star in the night sky?" << endl;
    getline(cin, g);
    if (g == "Sirius")
        score++;


    cout << "8. What is the name of the phenomenon where a star explodes, briefly outshining an entire galaxy?" << endl;
    getline(cin, h);
    if (h == "Supernova")
        score++;


    cout << "9. What is the term for the imaginary line around which an object rotates?" << endl;
    getline(cin, i);
    if (i == "Axis")
        score++;


    cout << "10. What is the name of the large cloud of gas and dust in space from which stars are born?" << endl;
    getline(cin, j);
    if (j == "Nebula")
        score++;
}