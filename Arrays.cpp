// Author: Josuel Musambaghani

// The following program skeleton contains a 10-element array of int s called fish .
// When completed, the program should ask how many fish were caught by fishermen
// 1 through 10, and store this data in the array. And then the program will display 
// number of fish caught by each fisherman by determining the lowest and the highest.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int NUM_FISH = 3;
    int fish[NUM_FISH];
    
    // You must finish this program. It should ask how
    // many fish were caught by fishermen 1-20, and
    // store this data in the array fish.
    
    for (int num = 0; num < NUM_FISH; num++)
    {
        cout << "Enter the  number of fish caught: ";
        cin >> fish[num];
    }
    
    // display the number of fish caught 
    for (int num = 0; num < NUM_FISH; num++)
    {
        cout << "The number of fish caught fish caught by fisherman " << num+1 <<" is: " << fish[num] << endl;
    }
    
    // looking for the lowest number of fish caught
    int min = fish[0];
    
    for (int num = 0; num < NUM_FISH; num++)
    {
        if (min > fish[num])
        {
            min = fish[num];
        }
        
    }
    
    cout << "The lowest: " << min << endl;
    
    // looking for the highest number of fish caught 
    int max = fish[0];
    
    for (int num = 0; num < NUM_FISH; num++)
    {
        if (max < fish[num])
        {
            max = fish[num];
        }
        
    }
    
    
    cout << "The highest: " << max << endl;

return 0;
}
