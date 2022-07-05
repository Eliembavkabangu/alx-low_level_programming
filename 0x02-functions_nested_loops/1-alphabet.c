#include "main.h"

int main(void)
{
print_alphabet();

return (0);
}
void print_alphabet(void)
for (char letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar("\n");
