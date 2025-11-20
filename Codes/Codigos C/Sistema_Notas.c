#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nombre[50];
    float* notas;
    int cantNotas;
} Alumno;

int main(){
    int cantAlumnos;
    Alumno* alumnos;

    printf("Cuantos alumnos hay en el sistema? \n");
    scanf("%d",&cantAlumnos);

    alumnos = (Alumno*)malloc (cantAlumnos*sizeof(Alumno));
    if (alumnos==NULL){
        printf("No se asignó correctamente el espacio en memoria");
        return 1;
    }
    for(int i=0;i<cantAlumnos;i++){
        printf("Ingrese el nombre del estudiante:\n");
        scanf("%s", alumnos[i].nombre);
        printf("Ingrese la cantidad de notas:\n");
        scanf("%d", &alumnos[i].cantNotas);
        alumnos[i].notas= (float*)malloc (alumnos[i].cantNotas*sizeof(float));
        
        if (alumnos[i].notas == NULL){
            printf("No se asigno correctamente el espacio en memoria");
            return 1;
        }
        for(int j=0;j<alumnos[i].cantNotas;j++){
            printf("Nota N°%d:",j+1);
            scanf("%f",&alumnos[i].notas[j]);
        }
    }

    printf("Listado de notas\n");
    for(int i=0;i<cantAlumnos;i++){
        printf("Nombre: %s\n",alumnos[i].nombre);
        for(int j=0;j<alumnos[i].cantNotas;j++)
        printf("Nota N°%d: %f\n",j+1,alumnos[i].notas[j]);
    }
}

