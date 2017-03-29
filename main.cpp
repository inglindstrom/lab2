#include <iostream>
#include <fstream>
#include "eloc.h"

using namespace std;

int main()
{
    int k;
    double p1_rating;
    double p2_rating;
    double score;

    eloC game;

    ifstream inFile("file.in");
    if(!inFile) {
        cerr << "Failed opening file.in" << endl;
        return 1;
    }

    ofstream outFile("file.out", ios::out);
    if(!outFile) {
        cerr << "Failed opening file.out" << endl;
        return 1;
    }

    inFile >> k >> p1_rating >> p2_rating;
    outFile << p1_rating << "\t" << p2_rating << endl;

    game.set_k(k);
    game.set_rA(p1_rating);
    game.set_rB(p2_rating);

    while(inFile >> score)
    {
        game.set_scores(score, 1 - score);
        game.expect();
        game.updateR();

        outFile << game.get_rA() << "\t" << game.get_rB() << endl;
    }

    return 0;
}