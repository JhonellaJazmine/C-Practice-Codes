//C Program to Count the Number of Vowels, Consonants, Digits, and White Spaces

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[150];                         //declaration of variables
    int vowels, consonants, digits, spaces;
    vowels = consonants = digits = spaces = 0;  //initialization of variables to 0

    printf("Enter sentence: ");
    fgets(sentence, sizeof(sentence), stdin);   //gets user string input

    int length = strlen(sentence);              //gets the length of the string user input

    for (int i=0; i<length; i++)                //loop for determining content of string (sentence variable)
    {
        if(sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i' || sentence[i]=='o' || sentence[i]=='u' ||
           sentence[i]=='A' || sentence[i]=='E' || sentence[i]=='I' || sentence[i]=='O' || sentence[i]=='U')    //checks element in string if its a vowel
        {
            vowels++;   //increment vowels variable / add vowels variable by 1
        }
        else if(sentence[i]>='a'&&sentence[i]<='z'||sentence[i]>='A'&&sentence[i]<='Z')     //checks element in string if its a consonant
        {
            consonants++;   //increment consonants variable / add consonants variable by 1
        }
        else if(sentence[i]>='1'&&sentence[i]<='9') //checks element in string if its a digit
        {
            digits++;      //increment digits variable / add digits variable by 1
        }
        else if(sentence[i]==' ')   //checks element in string if its a space
        {
            spaces++;       //increment spaces variable / add spaces variable by 1
        }
    }
    //displays number of vowels, consonants, digits, and spaces in the string (sentence)
    printf("The sentence consists of...\nVowel: %d \nConsonants: %d\nDigits: %d\nSpaces: %d",vowels,consonants,digits,spaces);

    return 0; //exit program

}
