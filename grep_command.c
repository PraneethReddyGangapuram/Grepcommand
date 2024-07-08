#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void grep(char *substr,char *filename)
{
        FILE *src;
        src=fopen(filename,"r");
        char line[100];
        if(src==NULL)
        {
                printf("File not found\n");
                exit(0);
        }
        else
        {
                while(fgets(line,100,src))
                {
                        if(strstr(line,substr))
                        {
                                printf("%s\n",line);
                        }
                }
                fclose(src);
        }
}
int main(int n,char *argv[])
{
        if(n!=3)
        {
                printf("incorrect inputs\n");
                printf("exe substr mainfile\n");
                exit(0);
        }
        grep(argv[1],argv[2]);
}
