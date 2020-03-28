#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Jim, Technician \n pam, Receptionist \n Oscar, Management");

    //fprintf(fpointer, "Kelly, Service\n", );

    fclose(fpointer);
    return 0;
}
