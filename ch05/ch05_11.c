#include <stdio.h>

int solve()
{
	for (unsigned int i = 0; i < 32; i++)
	{
		printf("%08x\n", i);
	}

}


int main()
{
	solve();
	return 0;
}