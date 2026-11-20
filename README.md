# cis165-lab10-
  lottery.cpp   README.md   AI_REFLECTION.md

Initial Plan
I will create two integer arrays named winningDigits and player, each containing five elements. I will use the rand() function to generate five random winning digits between 0 and 9 and store them in the winningDigits array using a loop.

Next, I will ask the user to enter five digits and use another loop to store those numbers in the player array. I will create a variable named matches and initialize it to zero. A comparison loop will check each position in both arrays and increase the match count whenever the digits at the same position are equal.

Finally, the program will display the winning digits, the player's digits, and the total number of matching positions.

How to Compile and Run
The program uses C++17.

To compile the program using g++, enter:


bash
g++ -std=c++17 -Wall -Wextra lottery.cpp -o lottery
To run the program:


bash
./lottery
On Windows, run:


bash
lottery.exe
Testing Results
I completed all six test cases. The actual results matched the expected results for every test.

Test 1: Two Matching Positions
Winning digits: [7, 4, 9, 1, 3]
Player digits: [4, 2, 9, 7, 3]
Expected matches: 2
Actual matches: 2
Result: PASS
Test 2: All Five Positions Match
Winning digits: [7, 4, 9, 1, 3]
Player digits: [7, 4, 9, 1, 3]
Expected matches: 5
Actual matches: 5
Result: PASS
Test 3: No Matching Positions
Winning digits: [7, 4, 9, 1, 3]
Player digits: [0, 0, 0, 0, 0]
Expected matches: 0
Actual matches: 0
Result: PASS
Test 4: Repeated Digits
Winning digits: [1, 1, 2, 2, 3]
Player digits: [1, 2, 2, 3, 3]
Expected matches: 3
Actual matches: 3
Result: PASS
Test 5: Additional Fixed-Array Test
Winning digits: [5, 6, 7, 8, 9]
Player digits: [5, 0, 7, 0, 9]
Expected matches: 3
Actual matches: 3
Result: PASS
The matching positions were 0, 2, and 4. This test helped verify that the program only counts digits that match in the same position.

Test 6: Final Random-Generation Test
Winning digits: [8, 3, 6, 1, 9]
Player digits: [8, 5, 6, 2, 9]
Expected matches: 3
Actual matches: 3
Result: PASS
I checked that all five randomly generated winning digits were between 0 and 9. I manually compared the winning digits with the player digits and confirmed that the match count was correct.

Final Verification
Both required arrays were included.
Loops were used to generate winning digits, collect player digits, and compare corresponding positions.
All six tests produced the expected results.
Temporary fixed winning arrays used for testing were removed.
Random number generation was restored.
The final program was compiled and tested using C++17.
The final random-generation test was completed successfully.
Explanation Questions
1. How does the random expression keep every digit between 0 and 9?
The expression rand() % 10 divides a random number by 10 and returns the remainder. The possible remainders are 0 through 9, so every generated digit stays within the required range.

2. Why does a matching digit in another position not count?
The program compares the digits at the same index in both arrays. For example, winningDigits[i] is compared with player[i]. A digit in a different position does not count because the positions must match.

3. Trace the count through the example arrays.
Winning digits: [7, 4, 9, 1, 3]

Player digits: [4, 2, 9, 7, 3]

Position 0: 7 and 4 do not match.
Position 1: 4 and 2 do not match.
Position 2: 9 and 9 match. Count = 1.
Position 3: 1 and 7 do not match.
Position 4: 3 and 3 match. Count = 2.
The final result is 2 matches.

4. Why do array loops stop before SIZE, and what did your fixed tests establish?
Array positions start at index 0. Since the arrays contain five elements, their indexes are 0 through 4. Using i < SIZE prevents the program from accessing an index outside the array.

The fixed tests established that the program correctly counts matching positions, handles identical and different arrays, and works with repeated digits.

Conclusion
This lab helped me practice using arrays, loops, random number generation, and conditional statements in C++. I learned how to compare corresponding array positions and count matches accurately. Testing different combinations helped me understand how the program works and verify its results.
