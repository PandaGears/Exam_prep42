int	swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = *a;
}
