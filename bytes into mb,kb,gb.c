#include<stdio.h>

int main(int argc, char* argv[])
{
long long bytes = 2147483648; //Example: 2 GB in bytes
double kb = (double)bytes / 1024;
double mb = (double)bytes / (1024*1024);
double gb = (double)bytes / (1024*1024*1024);
printf("bytes: %11d\n", bytes);
printf("Kilobytes (Kb): %.2f\n", kb);
printf("Megabytes (Mb): %.2f\n", mb);
printf("Gigabytes (Gb): %.2f\n", gb);
return 0;
}
