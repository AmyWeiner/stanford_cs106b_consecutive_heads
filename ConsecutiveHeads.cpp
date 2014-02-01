/*
 * File: ConsecutiveHeads.cpp
 * --------------------------
 * Name: [TODO: Amy R. Weiner]
 * Section: [TODO: enter section leader here]
 * This program simulates flipping a coin
 * repeatedly until heads is tossed three
 * times consecutively, at which point
 * the total number of coin flips is
 * reported. 
 */

#include <iostream>
#include <string>
#include "console.h"
#include "random.h"
using namespace std;

/* Constant */
const int MAX_HEADS = 3;

/* Function protoype */
string flipCoin();

int main() 
{
    int heads = 0;
    int totalFlips = 0;
    while (true) 
    {
        string coin = flipCoin();
        totalFlips ++;
        cout << coin << endl;
        if (coin == "heads") 
        {
            heads ++;
            if (heads == MAX_HEADS) break;
        } else 
        {
            heads = 0;
        }
    }
    cout << "It took " << totalFlips << " to get three consecutive heads." << endl;
   return 0;
}

/* Function: flipCoin
 * Usage: string coin = flipCoin();
 * --------------------------------
 * This function simulates a coin
 * flip by generating heads or tails 
 * with equal probability. The 
 * function returns either the string 
 * "heads" or "tails," representing 
 * the result of the simulated coin 
 * flip.
 */
string flipCoin() 
{
    if (randomChance(0.5))
    {
        return "heads";
    }
        return "tails";
}
