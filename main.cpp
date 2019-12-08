#include <iostream>

using namespace std;

void reverseAlphabet(string& alphabet) 
{ 
    int n = alphabet.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i=0, j=n-1; i<j; i++,j--) 
        swap(alphabet[i], alphabet[j]);   
} 

int main() 
{
  cout << "Reversing a String\n";
cout << "\n";
cout << "Before recursion: ";
string alphabet = "abcdefghijklmnopqrstuvwxyz"; 
cout << " " << endl;
    cout << alphabet << "\n";
    cout << "after reversal:\n";
    reverseAlphabet(alphabet); 
    cout << alphabet; 
;
}