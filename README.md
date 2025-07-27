# Decision_making
# Software Required:
Visual Studio
# Theory:
Decision-making is the process to make a decision about which part of the code should be executed or not based on some condition. Decision-making in C++ involves the usage of conditional statements (also called decision control statements) to execute specific blocks of code primarily based on given situations and their results.

1. if Statement:
In C++, the if statement is the simplest decision-making statement. It allows the execution of a block of code if the given condition is true. The body of the if statement is executed only if the given condition is true.

2. if-else Statement
The if else is a decision-making statement allows us to make a decision based on the evaluation of a given condition. If the given condition evaluates to true then the code inside the 'if' block is executed and in case the condition is false, the code inside the 'else' block is executed.

3. if else if Ladder
The if else if Ladder statements allow us to include additional situations after the preliminary if condition. The 'else if' condition is checked only if the above condition is not true, and the `else` is the statement that will be executed if none of the above conditions is true. If some condition is true, then not only the associated block is executed.

4. Nested if else
The nested if else statement contains an 'if' statement inside another 'if' statement. This structure lets in more complex selection-making by way of comparing multiple conditions. In this type of statement, multiple conditions are checked, and then the body of the last if statement is executed.

5. Switch Statement
In C++, the switch statement is used when multiple situations need to be evaluated primarily based on the value of a variable or an expression. switch statement acts as an alternative to multiple if statements or if-else ladder and has a cleaner structure and it is easy for handling multiple conditions.

 # Implementation:
 Based on the above decision making statements in C++ , Simple programs have been used to help understand how decision making statements work in c++.
 The programs are:
 + Odd-Even check
 + Vowel Check
 + Finding the largest number from three given numbers by the user
 + Making car showroom using switch case

# Algorihtms:
Program 1:

Objective:
To determine whether a user-entered number is even or odd.

Steps:

Step 1. Start

Step 2.  Ask the user to enter an integer (n)

Step 3. Read input into variable n

Step 4. Check divisibility of n by 2:

If n % 2 == 0, then:

Display "This is an even number"

Else:

Display "This is an Odd number"

Step 5. End

Program 2:

Objective:
To determine whether the character entered by the user is a vowel or a consonant.

Steps:

Step 1. Start

Step 2. Declare a character variable str

Step 3. Ask the user to enter a character

Step 4. Read the input into str

   Check if the character is a vowel:

If str is equal to 'a', 'e', 'i', 'o', 'u' (or their uppercase forms), then:

Display "The Character entered is a Vowel"

Else:

Display "The Character entered is a Consonant"

Step 5. End

Program 3

Objective:

To determine and display the largest number among three user-entered integers.

Steps:

Step 1. Start

Step 2. Declare three integer variables: a, b, c

Step 3. Ask user to enter three numbers

Step 4. Read input values into a, b, and c

Step 5. Initialize num ← a

Step 6. Compare b and c with num:

If b > num, set num ← b

If c > num, set num ← c

Step 7. Display the largest number (num)

Step 8. End

Program 4:

Objective:
To stimulate a car showroom using switch case 
Step 1: Start

Step 2: Display Welcome Message
Show the user a welcome message for the car showroom.

Step 3: Show Brand Menu
Display a list of 5 options:

Toyota
BMW
Tesla
Hyundai
Exit

Step 4: Get User Input
Prompt the user to enter their choice (an integer between 1 and 5).

Read and store the input in the variable brandChoice.

Step 5: Evaluate Choice Using Switch Case
Use a switch statement to handle different cases based on the value of brandChoice.

Step 6: Handle Each Case
Case 1: Display details for Toyota (models, price range, and description).

Case 2: Display details for BMW.

Case 3: Display details for Tesla.

Case 4: Display details for Hyundai.

Case 5: Display a thank-you message and exit.

Default: If input is not between 1 and 5, show an "Invalid choice" message.

Step 7: End Message
Display a message indicating that the simulation is complete.

Step 8: End 


# Conclusion:
The Programs helps to understand the logic and flow of the decision making statements available in C++
