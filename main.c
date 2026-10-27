#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[1000];
    int i = 0;
    int sentence = 1;
    int hasText = 0;

    printf("SIMULATE SENTENCE DIVIDER\n\n");

    printf("Enter a paragraph:\n");
    fgets(text, sizeof(text), stdin);

    printf("\nOUTPUT:\n\n");
    printf("Sentence %d: ", sentence);

    while (text[i] != '\0')
    {
        printf("\n[MEMORY] Reading: '%c' | Address: %d", text[i], i);
        printf("\n[CPU] FETCH -> DECODE -> EXECUTE");
        printf("\n[ALU] Checking character...");

        printf("\n%c", text[i]);

        if (!isspace((unsigned char)text[i]))
            hasText = 1;

        if (text[i] == '.' ||
            text[i] == '!' ||
            text[i] == '?' ||
            text[i] == ';' ||
            text[i] == ':')
        {
            char mark = text[i];

            printf("\n[ALU] DELIMITER FOUND: '%c'", mark);
            printf("\n[CONTROL UNIT] Sentence boundary detected");

            while (text[i + 1] == '.' ||
                   text[i + 1] == '!' ||
                   text[i + 1] == '?')
            {
                i++;
                printf("%c", text[i]);
            }

            if (hasText)
            {
                printf("\nEnding punctuation: %c\n", mark);

                while (isspace((unsigned char)text[i + 1]))
                    i++;

                if (text[i + 1] != '\0')
                {
                    sentence++;

                    printf("\n[CONTROL UNIT] Moving to next sentence");
                    printf("\n[REGISTER] Sentence = %d\n", sentence);

                    printf("Sentence %d: ", sentence);
                }

                hasText = 0;
            }
        }
        else
        {
            printf("\n[ALU] No delimiter -> Continue");
        }

        i++;
    }

    printf("\n\nTotal Sentences Found : %d\n", sentence);

    return 0;
}
