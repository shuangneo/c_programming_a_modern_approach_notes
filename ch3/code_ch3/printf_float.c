# include<stdio.h>

int main(void)
{
    float value = 12.34f;
    printf("%-8.1e\n",value);
    printf("%10.6e\n",value);
    printf("%-8.3f\n",value);
    printf("%6.0f\n",value);
    return 0;
}