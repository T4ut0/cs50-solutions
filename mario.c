#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
  do
  {
        height = get_int("Height: ");
        if (height >= 1 && height <= 8)
            break;      
  } while (true);
    
    for(int column = 0; column < height; column++)
    {
       for (int spaces = height; spaces > column; spaces--)
       {
          printf(" "); 
       }
       for (int hashes = 0; hashes <= column; hashes++)
       {
          printf("#");
       }
       printf("  ");
       for (int hashes2= 0; hashes2 <= column; hashes2++)
       {
           printf("#");
       }
       printf("\n");
    }
}
