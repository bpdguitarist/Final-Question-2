//
//  main.cpp
//  Final Question 2
//
//  Created by Edgar Esparza on 7/22/15.
//  Copyright (c) 2015 Edgar Esparza. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int people[10];
    int maxEaten;
    int largestEater;
    int minEaten;
    int smallestEater;
    
    cout << "How many pancakes did each person eat? "<<endl;
    for (int a=0; a<10; a++)
    {
        cout << "Person " << a+1 << ": ";
        cin >> people[a];
    }
    
   maxEaten = people[0];
    
    for (int b=0; b<10; b++)
    {
        if (maxEaten<people[b])
        {
            maxEaten = people[b];
            largestEater = b+1;
        }
        
        if (minEaten>=people[b])
        {
            minEaten = people[b];
            smallestEater = b+1;
        }
    }
    
    cout << "Person No. " << largestEater << " ate the most: " << maxEaten <<endl;
    cout << "Person No. " << smallestEater << " ate the least: " << minEaten <<endl;
    
    return 0;
}



