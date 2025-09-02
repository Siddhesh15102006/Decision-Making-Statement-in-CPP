// Experiment Number - 5
// Siddhesh Gajare
// ENTC (A3)
// 25070122511

#include <iostream>
using namespace std;

int main () 
{
    char C;
    cout << "Enter Any Character :- ";
    cin >> C;

    if ( C=='a' || C=='e' || C=='i' || C=='o' || C=='u' || C=='A' || C=='E' || C=='I' || C=='O' || C=='U' ) 
    {
        cout << " Character is a Vowel." << endl;
    } 
    
    else 
    {
        cout << " Character is a Consonant." << endl;
    }
    
    return 0;
}

Output :-
Enter a Character :- a
Character is a Vowel.

=== Code Execution Successful ===

Enter a Character :- b
Character is a Consonant.


=== Code Execution Successful ===
