#include <stdio.h>

int main()
{
    // declaring variable and asking for input
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    // working for vowels
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
        printf("The character '%c' is a vowel .\n", character);
    } // end if
    
    // working for consonants
    else if (character>='a' && character<='z'){
        printf("The character '%c' is a consonant.\n", character);
    } // end else if
    
    // working for digits
    else if (character>='0' && character<='9'){
        printf("The character '%c' is a digit.\n", character);
    } // end else if

    // working for special characters
    else {
        printf("The character '%c' is a special character.\n", character);
    } // end else

    return 0;
} // end main
