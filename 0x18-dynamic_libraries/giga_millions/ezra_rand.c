/**
 * rand - function to inject my random numbers into the gm program
 *
 * Return: my random numbers
 */
int rand(void)
{
	int ans[6] = {8, 8, 7, 9, 23, 74};
	static int i = -1;

	return (ans[++i]);
}
