
#include < stdio.h >

/*
*main prints size in memory
*/

int main(void)
{
puts("Size of a char: %zu byte(s)\n", sizeof(char));
puts("Size of an int: %zu byte(s)\n", sizeof(int));
puts("Size of a long int: %zu byte(s)\n", sizeof(long int));
puts("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
puts("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
