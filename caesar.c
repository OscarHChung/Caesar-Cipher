#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2) 
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    
    int o = atoi(argv[1]);
    
    if(o < 0)
    {
        printf("Key must be positive.");
        return 1;
    }
    
    else 
    {
        string plain = get_string("plaintext: ");
        printf("ciphertext: ");
        for(int i = 0; i < strlen(plain); i++)
        {
            if(islower(plain[i])) 
            {
                printf("%c", (((plain[i] + o) - 97) % 26) + 97);
            }
            else if(isupper(plain[i]))
            {
                printf("%c", (((plain[i] + o) - 65) % 26) + 65);
            }
            else
            {
                printf("%c", plain[i]);
            }
        }
        printf("\n");
        return 0;
    }
}
