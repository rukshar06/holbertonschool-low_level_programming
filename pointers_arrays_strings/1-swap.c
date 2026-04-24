/**
 * swap - swap a to b
 * @a: is a pointer to an int
 * @b: is a pointer to an int
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
