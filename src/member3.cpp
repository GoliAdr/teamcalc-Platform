#include <Arduino.h>
#include <string.h>

String get_string(String str);

void member3_sum()
{
    // Serial.println("Enter number 1: ");
    // while (Serial.available() == 0) {};
    // String input_1 = (Serial.readString());
    // input_1.trim();

    // Serial.println("Enter number 2: ");
    // while (Serial.available() == 0) {};
    // String input_2 = (Serial.readString());
    // input_2.trim();

    // Serial.print(input_1);
    // Serial.print(" + ");
    // Serial.print(input_2);
    // Serial.print(" = ");
    // Serial.print((String)(input_1.toInt() + input_2.toInt()));

    Serial.print('\n');

    int number_1 = get_string("\nEnter number 1: ").toInt();
    int number_2 = get_string("\nEnter number 2: ").toInt();

    Serial.print('\n');
    Serial.print(number_1);
    Serial.print(" + ");
    Serial.print(number_2);
    Serial.print(" = ");
    Serial.print(number_1 + number_2);
    Serial.print("\n\nPress any key to continue...\n\n");

    while (!Serial.available()); // awaits a keypress...
    Serial.read();
}

String get_string(String str) // gets string from user using serial comms
{
    char buff[32]; // input buffer
    char last = 0; // last read byte
    int index = 0; // buff pointer

    Serial.print(str);
    do
    {
        while (!Serial.available()); // awaits for readable data in register
        last = Serial.read(); // reads last byte of register

        if(last == 8) // ASCII 008 = BackSpace
        {
            if(index > 0) index--; // cuts buffer off at last character
            buff[index] = '\0';

            Serial.print("\n\n\n"); // reprints the buffer and input message
            Serial.print(str);
            Serial.print(buff);
        }
        else if((last >= '0') && (last <= '9')) // accepts only numbers
        {
            buff[index] = last; // adds last input to buffer and moves pointer
            index++;

            Serial.print(last); // prints the last input
        }
    } while (last != '\n'); // when enter is pressed, cycle ends

    buff[index] = '\0'; // ends the buffer

    return(buff);
}