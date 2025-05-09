#include<stdio.h>
int main()
{
	int c, nl;
	long  nc;
nl = 0;
nc =0;

while ((c = getchar()) != EOF){


if (c == '\n')
{
	++nl;
}
++nc;

}
printf("%d\n",nl);
printf("%ld\n",nc);

	return 0;
}
