#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct point {
    double x;
    double y;
};

struct circle {
    struct point point;
    double r;
};

int main()
{
	double num;
	char str[50];
	FILE* data;
	data = fopen("point.txt","r");
	
	if (data == NULL) {
		printf("Error open file\n");

		return 1;
	}
	
	while (fgets(str, 50, data) != NULL) {
	
		num = strtod(strchr(str, '(') + 1, NULL);
		printf("%.2f \n", num);
		puts(str);
	}	

    return 0;
}
