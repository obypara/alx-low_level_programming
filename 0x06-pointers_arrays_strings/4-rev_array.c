/**
 * reverse_array - reverse an array
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int j;
	int c;

	for (j = 0; j < n / 2; j++)
	{
		c = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = c;
	}
}
