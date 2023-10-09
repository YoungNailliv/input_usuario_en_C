#include <stdio.h>
//Libreria para trabajar string, en este caso solo se uso para al usar fgets, hacerle un string formating para eliminar el \n que se crea con esa funcion.
#include <string.h>

//Programa simple para recibir input del usuario.


int main(){

    //Creamos las variables pero no le asignamos un valor.
    //En el caso de char como queremos trabajarlo como un array de caracteres tenemos que especificar el largo maximo (En bytes) de nuestro array. (1 char = 1 byte)
    //Pasarnos de ese largo va a hacer que creemos un overflow.
    char name[50]; //bytes
    int age;


    //La funcion scanf nos permite agregar un input de usuario, pero solo hasta en contrarse con un espacio.
    //Entonces cuando necesitemos input que sea necesario que tengan espacio como nombre, por ejemplo, usamos fgets.
    //El unico inconveniente de fgets es que crea un \n al final del input.
    //Podemos eliminar el \n que sea crea con un string formating con el siguiente statment name[strlen(name)-1] = '\0';
    //Veremos como funciona mas adelante al ver strings.

    printf("\nWhat's your name: ");
    //scanf("%s", &name);
    //fgets (nombre variable, espacio en memoria o 'largo', stdin 'standard input')
    //fgets no necesita & en antes de la variable.
    fgets(name, 50, stdin);
    name[strlen(name)-1] = '\0';

    //en el scanf debemos especificar el formato del input que estamos haciendo y donde asignamos la variable ante poner un & lo cual indica el address de esa variable.
    printf("How old are you?: ");
    scanf("%d", &age);


    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old", age);

    return 0;
}