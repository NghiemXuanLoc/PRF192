#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int relativePosition(double x, double y, double r)
{
	double temp = sqrt((x * x + y * y));
	if (temp > r)
		return -1;
	else if (temp == r)
		return 0;
	else
		return 1;
}

int main()
{
	double x, y, r;
	printf("position of the point x, y: ");
	scanf("%lf%lf", &x, &y);

	do
	{
		printf("radius of the circle r: ");
		scanf("%lf", &r);
		if (r < 0)
			printf("Invalid value\n");
	} while (r < 0);
	int temp = relativePosition(x, y, r);
	if (temp == -1)
		printf("(%.2lf,%.2lf) is out of the circle", x, y);
	else if (temp == 0)
		printf("(%.2lf,%.2lf) is on the circle", x, y);
	else
		printf("(%.2lf,%.2lf) is in the circle", x, y);
	return 0;
}
