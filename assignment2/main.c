#include <stdio.h>
#include <string.h>
#include <conio.h>



int main() {

    //counts spacing for print
    int counter[100];

    // stores message
    char input[100];
    printf("enter a message: ");
    scanf("%100[a-zA-Z ]", input);
    int k;

    // for statement to go each char in array************
    for (k = 0; k < input[k]; k++) {
        //
        switch(input[k]) {

            case ' ':
                printf("  ");
                //counter[k] counts each char in print(morse code)***********
                counter[k] = 1;
                break;
            case 'a':case 'A':
                printf(".- ");
                counter[k] = 2;
                break;
            case 'b':case 'B':
                printf("-... ");
                counter[k] = 4;
                break;
            case 'c':case 'C':
                printf("-.-. ");
                counter[k] = 4;
                break;
            case 'd':case 'D':
                printf("-.. ");
                counter[k] = 3;
                break;
            case 'e':case 'E':
                printf(". ");
                counter[k] = 1;
                break;
            case 'f':case 'F':
                printf("..-. ");
                counter[k] = 4;
                break;
            case 'g':case 'G':
                printf("--. ");
                counter[k] = 3;
                break;
            case 'h':case 'H':
                printf(".... ");
                counter[k] = 4;
                break;
            case 'i':case 'I':
                printf(".. ");
                counter[k] = 2;
                break;
            case 'j':case 'J':
                printf(".--- ");
                counter[k] = 4;
                break;
            case 'k':case 'K':
                printf("-.- ");
                counter[k] = 3;
                break;
            case 'l':case 'L':
                printf(".-.. ");
                counter[k] = 4;
                break;
            case 'm':case 'M':
                printf("-- ");
                counter[k] = 2;
                break;
            case 'n':case 'N':
                printf("-. ");
                counter[k] = 2;
                break;
            case 'o':case 'O':
                printf("--- ");
                counter[k] = 3;
                break;
            case 'p':case 'P':
                printf(".--. ");
                counter[k] = 4;
                break;
            case 'q':case 'Q':
                printf("--.- ");
                counter[k] = 4;
                break;
            case 'r':case 'R':
                printf(".-. ");
                counter[k] = 3;
                break;
            case 's':case 'S':
                printf("... ");
                counter[k] = 3;
                break;
            case 't':case 'T':
                printf("- ");
                counter[k] = 1;
                break;
            case 'u':case 'U':
                printf("..- ");
                counter[k] = 3;
                break;
            case 'v':case 'V':
                printf("...- ");
                counter[k] = 4;
                break;
            case 'w':case 'W':
                printf(".-- ");
                counter[k] = 3;
                break;
            case 'x':case 'X':
                printf("-..- ");
                counter[k] = 4;
                break;
            case 'y':case 'Y':
                printf("-.-- ");
                counter[k] = 4;
                break;
            case 'z':case 'Z':
                printf("--.. ");
                counter[k] = 4;
                break;
            default:
                printf("not a valid message! ");
                break;
        }
    }

    printf("\n");
    //for input array
    for(int j = 0; j < input[j]; j++)
    {
        printf("%c", input[j]);
        //for spacing input array
        for (int i = 0; i < counter[j]; i++)
        {
            printf(" ");
        }
    }

    return 0;
}
