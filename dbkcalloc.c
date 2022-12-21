#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    if(ptr==NULL)//EGER YER AYRÝLMADÝYSA
    {
        printf("Yer bulunamadi !!");
    }
    else
        {
            for(int a=0;a<5;a++)
            {
                printf("ADRES-%d = %d\n",a+1,&ptr[a]);
            }
            for(int a=0;a<5;a++)
            {
                ptr[a]=a+1;
                printf("%d\t",ptr[a]);
            }

        }
        free(ptr);
}
