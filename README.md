# cosc333
## Time complexity
TIMOTHY MUTHAMA
EB3/61523/22
###COSC1
if (n <= 1) return 1-- It takes O(1) time.
return n * factorial(n - 1)--time complexity is O(n).
int num;--takes O(1) time.
cout << "Enter a number: ";--takes O(1) time.
cin >> num;--is O(1).
if (num < 0) -- O(1) time.
{ cout << "Factorial is not defined for negative numbers." << endl; }-- O(1) time.
else { cout << "Factorial of " << num << " is "--is O(1).
<< factorial(num) << endl; }-- O(n) time due to recursion.
return 0;-- takes O(1) time.
overall time complexity of the program is O(n).
####COSC2
    int n; // O(1) - Declaring an integer variable takes constant time.
    cout << "Enter the number of terms: ";  // O(1) 
    cin >> n;  // O(1) - Taking input from the user is a constant-time operation.
    int a = 0, b = 1; // O(1) - Assigning values to variables is a constant-time operation.
    cout << "Fibonacci Sequence: " << a << " " << b << " ";  // O(1) - Printing fixed values takes constant time.
    for (int i = 3; i <= n; i++) {  // O(n-2) ≈ O(n) - Loop runs (n-2) times.
    int nextTerm = a + b;  // O(1) - Single arithmetic operation.
   cout << nextTerm << " "; // O(1) - Printing a single value takes constant time.
  a = b;  // O(1) - Assignment operation.
  b = nextTerm;  // O(1) - Assignment operation
  cout << endl;  // O(1) - Printing a newline is constant-time.
 return 0; // O(1) - Returning from main is constant-time.


