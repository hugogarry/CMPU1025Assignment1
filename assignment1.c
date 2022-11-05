/*
Author: Hugo Garry (C22750675)

Date: 04/11/2022

Description:    Develop a C program to enable bank customers to manage their 
                Personal Identification Number (PIN) on an Automated Teller Machine (ATM).
                The PIN is any 4-digit number.
                Assume that the customer's default PIN has been initially assigned the number: 1234

                Functions:
                    1. Enter PIN and verify correct
                    2. Change PIN
                    3. Display the number of times the PIN was entered (i) Successfully (ii) Incorrectly
                    4. Exit Program
*/

#include <stdio.h>

int main() {

    int pin = 1234; //users pin is initially set to 1234
    int programState = 1; //program runs while 1, and breaks once changed to 0
    int pin1 = 0; //counter for successful PIN input
    int pin0 = 0; //counter for unsuccessful PIN input
    int userChoice; //stores users function choice
    int pinInput; //variable used to take user input for PIN verification and change


    printf("\nWelcome to the ATM\nPlease select an option from below:\n");
    
    while (programState == 1){ //the main menu appears at program start and also after each function has ended

        printf("\nMain Menu -\n");
        printf("\n1. Enter PIN and verify correct\n2. Change PIN");
        printf("\n3. Display no. of times PIN entered correctly and incorrectly\n4. Exit\n");

        printf("\nYour choice: ");
        scanf("%d", &userChoice);

        if (userChoice == 1){ //enter PIN and verify correct

            printf("\nPlease enter your PIN to verify if it is correct: ");
            scanf("%d", &pinInput);

            if (pinInput == pin){
                
                printf("You entered the correct PIN\n");
                pin1++;

            } //end if

            else {
                
                printf("You entered the incorrect PIN\n");
                pin0++;

            } //end else

        } //end if

        else if (userChoice == 2){ //change PIN

            printf("\nPlease enter a new PIN: ");
            scanf("%d", &pin);

            printf("PIN changed successfully\n");

        } //end else if

        else if (userChoice == 3){ //display no. of times PIN entered correctly and incorrectly

            printf("\nYou have entered the pin -\n");
            printf("\n- Correctly: %d", pin1);
            printf("\n- Incorrectly: %d\n", pin0);
            
        } //end else if

        else if (userChoice == 4){ //exit program
            
            programState = 0; //end while loop

        } //end else if

        else {

            printf("\nIncorrect choice, please choose an integer between 1 and 4\n");
            
        } //end else
    
    } //end while

    printf("\nThank you for using this ATM service. Have a nice day.");
    

    return 0;
}
