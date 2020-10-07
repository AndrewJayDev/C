

#include <cs50.h>
#include <stdio.h>

int get_int_18(void);

int main(void)
{
  //prompt user input  of 1 to 8 inclusive
        int height = get_int_18(); //works
 // calculate rows
        int counter = 0;
        for (int row=0; row<height; row++) {
            if (counter != height) {
              //print spaces
                for (int spaces = (height-1) - counter; spaces > 0; spaces--) {
                    printf(" ");
                }

                //print number of hashes on the left side
                for (int hashes = 0; hashes <= counter; hashes++) {
                    printf("#");
                }
              //print spaces between the two sides of the pyramid
                printf("  ");
              //print number of hashes on the right side
                for (int hashes = 0; hashes <= counter; hashes++) {
                    printf("#");
                }
              //moves to next line
                printf("\n");
              //increase counter to place more hashes on next line
                counter++;
            }
        }
}


int get_int_18()
{
    int n;
    do
    {

        n = get_int("Height:");
    }
    while (n < 1 || n>8);
    return n;
}