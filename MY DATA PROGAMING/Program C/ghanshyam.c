#include<stdio.h>
main()
{float fer=-40,cel;
    for(;fer<100;)
    {
        cel=5*(fer-32)/9;
        printf("cel=%f fer=%f  \n",cel,fer);
   fer=fer+10; }

}
