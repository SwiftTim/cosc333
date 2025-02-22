#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for the number of terms
    cout << "Enter the number of terms: ";
    cin >> n;

    // First two Fibonacci numbers
    int a = 0, b = 1;

    // Print the first two terms
    cout << "Fibonacci Sequence: " << a << " " << b << " ";

    // Generate the remaining Fibonacci numbers
    for (int i = 3; i <= n; i++) {
        int nextTerm = a + b;  // Sum of the previous two terms
        cout << nextTerm << " ";
        
        // Update a and b for the next iteration
        a = b;
        b = nextTerm;
    }

    cout << endl;  // Print a newline after the sequence
    return 0;
}
    