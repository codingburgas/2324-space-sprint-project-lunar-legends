#include "Header Files/menu.h"

using namespace std;

void questionsEasy()
{
    string a, b, c, d, e, f, g, h, i, j;

    int score = 0;

    cout << "1. What is the name of the mission that successfully placed humans on the Moon for the first time?" << endl;
    cin.ignore();
    getline(cin, a);
    if (a == "Apollo 11")
        score++;

    cout << "2. What is the name of the theory that suggests the universe is expanding from a hot, dense state?" << endl;
    getline(cin, b);
    if (b == "Big Bang Theory")
        score++;


    cout << "3. What is the name of the spacecraft launched in 1977, now in interstellar space?" << endl;
    getline(cin, c);
    if (c == "Voyager 1")
        score++;


    cout << "4. What is the name of the process by which a star collapses under its gravity after exhausting its nuclear fuel?" << endl;
    getline(cin, d);
    if (d == "Supernova")
        score++;


    cout << "5. What is the name of the effect that causes time to pass more slowly in strong gravitational fields?" << endl;
    getline(cin, e);
    if (e == "Time Dilation")
        score++;


    cout << "6. What is the name of the closest spiral galaxy to the Milky Way?" << endl;
    getline(cin, f);
    if (f == "Andromeda Galaxy")
        score++;


    cout << "7. What is the name of the spacecraft launched by SpaceX to transport astronauts to the International Space Station?" << endl;
    getline(cin, g);
    if (g == "Crew Dragon")
        score++;


    cout << "8. What is the name of the phenomenon where light bends as it passes near a massive object?" << endl;
    getline(cin, h);
    if (h == "Gravitational Lensing")
        score++;


    cout << "9. What is the name of the space telescope launched by NASA in 1990?" << endl;
    getline(cin, i);
    if (i == "Hubble Space Telescope")
        score++;

    cout << "10. What is the name of the concept that suggests there may be other universes besides our own?" << endl;
    getline(cin, j);
    if (j == "Multiverse Theory")
        score++;


    (a == "Apollo 11") ? cout << "1. Correct" << endl : cout << "1. Wrong: Correct answer is Apollo 11" << endl;

    (b == "Big Bang Theory") ? cout << "2. Correct" << endl : cout << "2. Wrong: Correct answer is Big Bang Theory" << endl;

    (c == "Voyager 1") ? cout << "3. Correct" << endl : cout << "3. Wrong: Correct answer is Voyager 1" << endl;

    (d == "Supernova") ? cout << "4. Correct" << endl : cout << "4. Wrong: Correct answer is Supernova" << endl;

    (e == "Time Dilation") ? cout << "5. Correct" << endl : cout << "5. Wrong: Correct answer is Time Dilation" << endl;

    (f == "Andromeda Galaxy") ? cout << "6. Correct" << endl : cout << "6. Wrong: Correct answer is Andromeda Galaxy" << endl;

    (g == "Crew Dragon") ? cout << "7. Correct" << endl : cout << "7. Wrong: Correct answer is Crew Dragon" << endl;

    (h == "Gravitational Lensing") ? cout << "8. Correct" << endl : cout << "8. Wrong: Correct answer is Gravitational Lensing" << endl;

    (i == "Hubble Space Telescope") ? cout << "9. Correct" << endl : cout << "9. Wrong: Correct answer is Hubble Space Telescope" << endl;

    (j == "Multiverse Theory") ? cout << "10. Correct" << endl : cout << "10. Wrong: Correct answer is Multiverse Theory" << endl;


    string x[] = { a, b, c, d, e, f, g, h, i, j };
    string ans[] = { "Apollo 11", "Big Bang Theory", "Voyager 1", "Supernova", "Time Dilation", "Andromeda Galaxy", "Crew Dragon", "Gravitational Lensing", "Hubble Space Telescope", "Multiverse Theory" };

    cout << " Your Score is " << score << "/10";
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


    (a == "NASA") ? cout << "1. Correct" << endl : cout << "1. Wrong: Correct answer is NASA (National Aeronautics and Space Administration)" << endl;

    (b == "Kuiper Belt") ? cout << "2. Correct" << endl : cout << "2. Wrong: Correct answer is Kuiper Belt" << endl;

    (c == "Aphelion") ? cout << "3. Correct" << endl : cout << "3. Wrong: Correct answer is Aphelion" << endl;

    (d == "Nuclear Fusion") ? cout << "4. Correct" << endl : cout << "4. Wrong: Correct answer is Nuclear Fusion" << endl;

    (e == "Salyut 1") ? cout << "5. Correct" << endl : cout << "5. Wrong: Correct answer is Salyut 1" << endl;

    (f == "MAVEN") ? cout << "6. Correct" << endl : cout << "6. Wrong: Correct answer is MAVEN (Mars Atmosphere and Volatile Evolution)" << endl;

    (g == "Sirius") ? cout << "7. Correct" << endl : cout << "7. Wrong: Correct answer is Sirius" << endl;

    (h == "Supernova") ? cout << "8. Correct" << endl : cout << "8. Wrong: Correct answer is Supernova" << endl;

    (i == "Axis") ? cout << "9. Correct" << endl : cout << "9. Wrong: Correct answer is Axis" << endl;

    (j == "Nebula") ? cout << "10. Correct" << endl : cout << "10. Wrong: Correct answer is Nebula" << endl;


    string x[] = { a, b, c, d, e, f, g, h, i, j };
    string ans[] = { "NASA", "Kuiper Belt", "Aphelion", "Nuclear Fusion", "Salyut 1", "MAVENE", "SatSiriusurn", "Supernova", "Axis", "Nebula" };


    cout << "Your Score is " << score << "/10";
}
void questionsHard()
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

    cout << "5. What is the term used to describe a giant ball of gas that undergoes nuclear fusion in its core?" << endl;
    getline(cin, e);
    if (e == "Star")
        score++;

    cout << "6. What force keeps planets in orbit around the Sun?" << endl;
    getline(cin, f);
    if (f == "Gravity")
        score++;

    cout << "7. What is the name of the galaxy that contains our solar system?" << endl;
    getline(cin, g);
    if (g == "Milky Way")
        score++;

    cout << "8. What is the name of the first artificial satellite launched into space by humans?" << endl;
    getline(cin, h);
    if (h == "Sputnik 1")
        score++;

    cout << "9. What is the name of the spacecraft that carried the first humans to land on the Moon?" << endl;
    getline(cin, i);
    if (i == "Apollo 11")
        score++;

    cout << "10. What is the name of the spacecraft that visited Pluto in 2015?" << endl;
    getline(cin, j);
    if (j == "New Horizons")
        score++;

    (a == "Sun") ? cout << "1. Correct" << endl : cout << "1. Wrong: Correct answer is Sun" << endl;

    (b == "Venus") ? cout << "2. Correct" << endl : cout << "2. Wrong: Correct answer is Venus" << endl;

    (c == "Jupiter") ? cout << "3. Correct" << endl : cout << "3. Wrong: Correct answer is Jupiter" << endl;

    (d == "Moon") ? cout << "4. Correct" << endl : cout << "4. Wrong: Correct answer is Moon" << endl;

    (e == "Star") ? cout << "5. Correct" << endl : cout << "5. Wrong: Correct answer is Star" << endl;

    (f == "Gravity") ? cout << "6. Correct" << endl : cout << "6. Wrong: Correct answer is Gravity" << endl;

    (g == "Milky Way") ? cout << "7. Correct" << endl : cout << "7. Wrong: Correct answer is Milky Way" << endl;

    (h == "Sputnik 1") ? cout << "8. Correct" << endl : cout << "8. Wrong: Correct answer is Sputnik 1" << endl;

    (i == "Apollo 11") ? cout << "9. Correct" << endl : cout << "9. Wrong: Correct answer is Apollo 11" << endl;

    (j == "New Horizons") ? cout << "10. Correct" << endl : cout << "10. Wrong: Correct answer is New Horizons" << endl;


    string x[] = { a, b, c, d, e, f, g, h, i, j };
    string ans[] = { "The Sun", "Constellation", "Mars", "Jupiter", "The Milky Way", "Axis", "Saturn", "Solar flare", "Neil Armstrong", "Greenhouse effect" };

    cout << "Your Score is " << score << "/10";
}