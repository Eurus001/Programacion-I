#include <stdio.h>
#include <strings.h>

int main(){

    char contrasenaU[10];
    char contrasena[10]="hola123";


    fgets(10,contrasenaU,stdin);


    if (strcomp(contrasena,contrasenaU) != 0){
        printf("Contraseña correcta");
    } else {
        printf("Contraseña incorrecta");
    }

    return 0;

}