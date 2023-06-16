#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int ID_alumno;
    int mixta;

}peticiones_estu;

typedef struct{

    int ID_alumno;
    int m_1;
    int m_2;
    int m_3;
    int m_4;
    int m_5;
    int m_6;
    int m_7;
    int creditos_totales;

}creditos_materias;

typedef struct{
	
	int mate_1;
	int h_mat;
	int lab_s;
	int intro_elec;
	int fisica_1;
	int mate_2;
	int sen_con;
	int f_circuitos;
	int fisica_2;
	int mate_3;
	int fisica_3;
	int sen_dis;
	int dinamicos;
	int dispro;
	int mate_4;
	int IA;
	int fpga;
	int s_redes;
	int robotica;
	int iot;
	
}solicitudes;

typedef struct{
	
	int mate_1_g;
	int h_mat_g;
	int lab_s_g;
	int intro_elec_g;
	int fisica_1_g;
	int mate_2_g;
	int sen_con_g;
	int f_circuitos_g;
	int fisica_2_g;
	int mate_3_g;
	int fisica_3_g;
	int sen_dis_g;
	int dinamicos_g;
	int dispro_g;
	int mate_4_g;
	int IA_g;
	int fpga_g;
	int s_redes_g;
	int robotica_g;
	int iot_g;	
	
}conformacion;


void inicio(),metodos();
void menu_principal();
void mostrar_intencion();
void materias_ofrecidas();
void permiso();
void alternancia();
void mostrar_creditos();
void calculo_creditos();
void precio();
void solicitud_dep();
void materias_0();
void materia_1(),materia_2(),materia_3();
void materia_4(),materia_5(),materia_6(),materia_7();
void resumen_m();
void conformacion_grupos();
void imprimir_pantalla();
void imprimir_archivo();

peticiones_estu peticiones[8];
creditos_materias creditos[8];
solicitudes departamentos;
conformacion grupos;


int main(){
    while(1){
        system("color 01");
        inicio();
        menu_principal();
        metodos();
    }
}

void inicio(){

    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("°°                                                                        °°\n");
    printf("°° Bienvenido al sistema principal para el manejo, control y modificacion °°\n");
    printf("°° de peticiones de asiganaturas de la P.U.J.                             °°\n");
    printf("°°                                                                        °°\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    system("pause");
    system("cls");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("°°                                                                        °°\n");
    printf("°° En este Programa Ud. podra realizar el proceso de inscripcion de clase °°\n");
    printf("°° Para los Estudiantes de la carrera de Ing. sistemas de la universidad  °°\n");
    printf("°°                                                                        °°\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    system("pause");
    system("cls");
}

void menu_principal(){

    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\nLas opciones para el programa son las siguientes:\n");
    printf("\n\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t°°°°°°°°°°°°°°°°°°°|Acciones de administrador|°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t°°°°° 1. Intencion horaria de los estudiantes                °°°°°\n");
    printf("\t°°°°° 2. Materias ofrecidas por la carrera                   °°°°°\n");
    printf("\t°°°°° 3. Materias que se pueden ver de acuerdo al semestre   °°°°°\n");
    printf("\t°°°°° 4. Disposicion de los estudiantes para modalidad mixta °°°°°\n");
    printf("\t°°°°° 5. Creditos totatles por estudiante                    °°°°°\n");
    printf("\t°°°°° 6. Costo del semestre                                  °°°°°\n");
    printf("\t°°°°° 7. Solicitud a los departamentos                       °°°°°\n");
    printf("\t°°°°° 8. SALIR                                               °°°°°\n");
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

}

void metodos(){
    int opcion;

    printf("\nOPCION DEL MENU (1,2,3,4,5,6,7,8): ");
    scanf("%d", &opcion);
    system("cls");

    switch(opcion){

        case 1:{
            mostrar_intencion();
            break;
        }

        case 2:{
            materias_ofrecidas();
            break;
        }
        case 3:{
            permiso();
            break;
        }
        case 4:{
            alternancia();
            break;
        }
        case 5:{
            mostrar_creditos();
            break;
        }
        case 6:{
            precio();
            break;
        }
        case 7:{       
            solicitud_dep();
            break;
        }
        case 8:
            printf("\nEscogiste la opcion 8: Salir");
            printf("\nGracias por venir, vuelva pronto\n");
            system("pause");
            system("cls");
            exit(-1);

        default:{
            printf("Esta no es una opcion valida, digite otra opcion");
            break;
        }
    }
}

void mostrar_intencion(){
    int i;
    char aux[40];
    FILE *intencion_alumnos;
    intencion_alumnos = fopen("intencion_alumnos.txt", "r");

    printf("Ud. escogio la opcion de ver las materias que desea ver cada alumno\n");
    printf("para este semestre, observara el id y las materias correspondientes.\n\n");
    system("pause");
    system("cls");

    if(intencion_alumnos == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("ID:     M_1 	M_2 	M_3	M_4     M_5     M_6     M_7\n\n");
    for(i=0;i<15;i++){
        fgets(aux,40,intencion_alumnos);
        printf("%s", aux);
    }
    //while(!feof(intencion_alumnos)){
    //	fscanf(aux,40,intencion_alumnos);
    //	printf("%s", aux);
    //}
    printf("\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\nEl archivo se encuentra junto a la carpeta de este proyecto.\n\n");
    fclose(intencion_alumnos);
    system("pause");
    system("cls");
}

void materias_ofrecidas(){
    
    char aux[80];
    FILE *materias_carrera;
    materias_carrera = fopen("materias_carrera.txt", "r");

    printf("Ud. escogio la opcion de ver las materias ofrecidas por la carrera\n");
    printf("observara el nombre, el Id, los creditos y su intensidad de horas semanales.\n\n");
    system("pause");
    system("cls");

    if(materias_carrera == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

    while(!feof(materias_carrera)){
        fgets(aux,80,materias_carrera);
        printf("%s", aux);
    }
    printf("\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\nEl archivo se encuentra junto a la carpeta de este proyecto.\n\n");
    fclose(materias_carrera);
    system("pause");
    system("cls");
}

void permiso(){

    int semestre;
    char aux[80];
    FILE *historial_alumnos;
    historial_alumnos = fopen("historial_alumnos.txt", "r");

    //texto de descripcion
    printf("Ud. escogio la opcion de ver que materias pueden ver los alumnos por semestre.\n\n");
    printf("Observara el historial de cada alumno y despues podra seleccionar el semestre.\n");
    printf("Para ver que materias se pueden ver de acuerdo a este.\n\n");

    if(historial_alumnos == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }

    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    while(!feof(historial_alumnos)){
        fgets(aux,80,historial_alumnos);
        printf("%s", aux);
    }
    printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    fclose(historial_alumnos);
    system("pause");
    system("cls");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    printf("Por Favor digite que Semestre desea ver\nSemestre: ");
    scanf("%d", &semestre);
    if(semestre < 1 || semestre > 10){
        printf("El semestre seleccionado no se encuentra entre los ofrecidos.");
        exit(1);
    }

    FILE *materias_semestre;
    materias_semestre = fopen("materias_x_semestre.txt","w");

    if(materias_semestre == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }

    fprintf(materias_semestre,"Semestre seleccionado: %d\n\n",semestre);
    fprintf(materias_semestre,"Las materias que pude ver son: \n\n");
    if(semestre == 1){
        fprintf(materias_semestre,"° Matematicas 1\n");
        fprintf(materias_semestre,"° Herramientas Matematicas\n");
        fprintf(materias_semestre,"° Laboratorio de senales\n");
        fprintf(materias_semestre,"° Intro Electronica\n");
        fprintf(materias_semestre,"° Fisica 1\n");
    }
    else if(semestre == 2){
        fprintf(materias_semestre,"° Matematicas 1\n");
        fprintf(materias_semestre,"° Herramientas Matematicas\n");
        fprintf(materias_semestre,"° Laboratorio de senales\n");
        fprintf(materias_semestre,"° Intro Electronica\n");
        fprintf(materias_semestre,"° Fisica 1\n");
        fprintf(materias_semestre,"° matematicas 2\n");
        fprintf(materias_semestre,"° senales continuas\n");
        fprintf(materias_semestre,"° fundamentos de circuitos\n");
        fprintf(materias_semestre,"° fisica 2\n");
    }
    else if(semestre == 3){
        fprintf(materias_semestre,"° Matematicas 1\n");
        fprintf(materias_semestre,"° Herramientas Matematicas\n");
        fprintf(materias_semestre,"° Laboratorio de senales\n");
        fprintf(materias_semestre,"° Intro Electronica\n");
        fprintf(materias_semestre,"° Fisica 1\n");
        fprintf(materias_semestre,"° matematicas 2\n");
        fprintf(materias_semestre,"° senales continuas\n");
        fprintf(materias_semestre,"° fundamentos de circuitos\n");
        fprintf(materias_semestre,"° fisica 2\n");
        fprintf(materias_semestre,"° Matematicas 3\n");
        fprintf(materias_semestre,"° fisica 3\n");
        fprintf(materias_semestre,"° senales discretas\n");
        fprintf(materias_semestre,"° sistemas dinamicos\n");
        fprintf(materias_semestre,"° dispro\n");
    }
    else if(semestre == 4){
        fprintf(materias_semestre,"° Matematicas 1\n");
        fprintf(materias_semestre,"° Herramientas Matematicas\n");
        fprintf(materias_semestre,"° Laboratorio de senales\n");
        fprintf(materias_semestre,"° Intro Electronica\n");
        fprintf(materias_semestre,"° Fisica 1\n");
        fprintf(materias_semestre,"° matematicas 2\n");
        fprintf(materias_semestre,"° senales continuas\n");
        fprintf(materias_semestre,"° fundamentos de circuitos\n");
        fprintf(materias_semestre,"° fisica 2\n");
        fprintf(materias_semestre,"° Matematicas 3\n");
        fprintf(materias_semestre,"° fisica 3\n");
        fprintf(materias_semestre,"° senales discretas\n");
        fprintf(materias_semestre,"° sistemas dinamicos\n");
        fprintf(materias_semestre,"° dispro\n");
        fprintf(materias_semestre,"° Matematicas 4\n");
    }
    else if(semestre == 5){
        fprintf(materias_semestre,"° Matematicas 1\n");
        fprintf(materias_semestre,"° Herramientas Matematicas\n");
        fprintf(materias_semestre,"° Laboratorio de senales\n");
        fprintf(materias_semestre,"° Intro Electronica\n");
        fprintf(materias_semestre,"° Fisica 1\n");
        fprintf(materias_semestre,"° matematicas 2\n");
        fprintf(materias_semestre,"° senales continuas\n");
        fprintf(materias_semestre,"° fundamentos de circuitos\n");
        fprintf(materias_semestre,"° fisica 2\n");
        fprintf(materias_semestre,"° Matematicas 3\n");
        fprintf(materias_semestre,"° fisica 3\n");
        fprintf(materias_semestre,"° senales discretas\n");
        fprintf(materias_semestre,"° sistemas dinamicos\n");
        fprintf(materias_semestre,"° dispro\n");
        fprintf(materias_semestre,"° Matematicas 4\n");
    }
    else if(semestre == 6){
        fprintf(materias_semestre,"° Matematicas 1\n");
        fprintf(materias_semestre,"° Herramientas Matematicas\n");
        fprintf(materias_semestre,"° Laboratorio de senales\n");
        fprintf(materias_semestre,"° Intro Electronica\n");
        fprintf(materias_semestre,"° Fisica 1\n");
        fprintf(materias_semestre,"° matematicas 2\n");
        fprintf(materias_semestre,"° senales continuas\n");
        fprintf(materias_semestre,"° fundamentos de circuitos\n");
        fprintf(materias_semestre,"° fisica 2\n");
        fprintf(materias_semestre,"° Matematicas 3\n");
        fprintf(materias_semestre,"° fisica 3\n");
        fprintf(materias_semestre,"° senales discretas\n");
        fprintf(materias_semestre,"° sistemas dinamicos\n");
        fprintf(materias_semestre,"° dispro\n");
        fprintf(materias_semestre,"° Matematicas 4\n");
        fprintf(materias_semestre,"° inteligencia artificial\n");
    }
    else {
        fprintf(materias_semestre,"° Matematicas 1\n");
        fprintf(materias_semestre,"° Herramientas Matematicas\n");
        fprintf(materias_semestre,"° Laboratorio de senales\n");
        fprintf(materias_semestre,"° Intro Electronica\n");
        fprintf(materias_semestre,"° Fisica 1\n");
        fprintf(materias_semestre,"° matematicas 2\n");
        fprintf(materias_semestre,"° senales continuas\n");
        fprintf(materias_semestre,"° fundamentos de circuitos\n");
        fprintf(materias_semestre,"° fisica 2\n");
        fprintf(materias_semestre,"° Matematicas 3\n");
        fprintf(materias_semestre,"° fisica 3\n");
        fprintf(materias_semestre,"° senales discretas\n");
        fprintf(materias_semestre,"° sistemas dinamicos\n");
        fprintf(materias_semestre,"° dispro\n");
        fprintf(materias_semestre,"° Matematicas 4\n");
        fprintf(materias_semestre,"° inteligencia artificial\n");
        fprintf(materias_semestre,"° diseno en fpga\n");
        fprintf(materias_semestre,"° seguridad en redes\n");
        fprintf(materias_semestre,"° herramientas de robotica\n");
        fprintf(materias_semestre,"° IOT\n");
    }
    fclose(materias_semestre);
    printf("\nEl archivo con las materias que puede ver para el semestre seleccionado\n");
    printf("se encuentra en la carpeta del proyecto\n\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    system("pause");
    system("cls");
}

void alternancia(){

    int i;
    char aux[80],temp[50];
    FILE *historial_alumnos;
    historial_alumnos = fopen("historial_alumnos.txt", "r");

    //texto de descripcion
    printf("Ud. escogio la opcion de ver que estudiantes pueden estudiar en modo de alternancia.\n\n");
    printf("Observara el historial de cada alumno y si puede o no estudiar en alternancia.\n");
    printf("Adicionalmente se creara un archivo con dicha informacion\n");

    if(historial_alumnos == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }

    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    while(!feof(historial_alumnos)){
        fgets(aux,80,historial_alumnos);
        printf("%s", aux);
    }
    printf("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    fclose(historial_alumnos);
    system("pause");
    system("cls");


    FILE *ID_estudiantes;
    ID_estudiantes = fopen("ID_estudiantes.txt","r");

    if(ID_estudiantes == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    printf("Recuerde que: 0 = No alternancia, 1 = alternancia.\n\n");
    for(i= 0; !feof(ID_estudiantes); i++){
        fscanf(ID_estudiantes,"%s",temp);
        peticiones[i].ID_alumno = atoi(temp);

        fscanf(ID_estudiantes,"%s",temp);
        peticiones[i].mixta = atoi(temp);

        printf("ID Estudiante: %d\n", peticiones[i].ID_alumno);
        printf("Mdodalidad mixta: %d\n\n", peticiones[i].mixta);
    }
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    fclose(ID_estudiantes);
    system("pause");
    system("cls");
}

void mostrar_creditos(){

    int i;
    char temp[50];
    FILE *intencion_alumnos;
    intencion_alumnos = fopen("intencion_alumnos.txt", "r");

    if(intencion_alumnos == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    printf("Ud. escogio la opcion de ver la cantidad de creditos\n");
    printf("que vera el estudiante en el semestre.\n\n");
    printf("Se mostrara en pantalla el id del estudiante, el codigo de las materias\n");
    printf("y a cuantos creditos equivalen.\n\n");
    printf("Adicionalmente se creara un archivo con dicha informacion\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    system("pause");
    system("cls");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    for(i= 0; !feof(intencion_alumnos); i++){

        fscanf(intencion_alumnos,"%s",temp);
        creditos[i].ID_alumno = atoi(temp);

        fscanf(intencion_alumnos,"%s",temp);
        creditos[i].m_1= atoi(temp);

        fscanf(intencion_alumnos,"%s",temp);
        creditos[i].m_2= atoi(temp);

        fscanf(intencion_alumnos,"%s",temp);
        creditos[i].m_3= atoi(temp);

        fscanf(intencion_alumnos,"%s",temp);
        creditos[i].m_4= atoi(temp);

        fscanf(intencion_alumnos,"%s",temp);
        creditos[i].m_5= atoi(temp);

        fscanf(intencion_alumnos,"%s",temp);
        creditos[i].m_6= atoi(temp);

        fscanf(intencion_alumnos,"%s",temp);
        creditos[i].m_7= atoi(temp);

        printf("ID Estudiante: %d\n", creditos[i].ID_alumno);
        printf("Materia	1: %d\n", creditos[i].m_1);
        printf("Materia	2: %d\n", creditos[i].m_2);
        printf("Materia	3: %d\n", creditos[i].m_3);
        printf("Materia	4: %d\n", creditos[i].m_4);
        printf("Materia	5: %d\n", creditos[i].m_5);
        printf("Materia	6: %d\n", creditos[i].m_6);
        printf("Materia	7: %d\n\n", creditos[i].m_7);
        printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        creditos[i].creditos_totales = 0;
    }
    fclose(intencion_alumnos);
    printf("\n\n");
    system("pause");
    system("cls");
    calculo_creditos();
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    for(i=0; i<8;i++){
        printf("ID estudiante: %d, Creditos Totales: %d\n\n", creditos[i].ID_alumno, creditos[i].creditos_totales);
    }
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("\n\nEl archivo fue creado correctamente con el nombre C_totales.txt\n\n");
    system("pause");
    system("cls");
}

void calculo_creditos(){
    int i, j;

    FILE *C_totales;
    C_totales = fopen("C_totales.txt", "w");

    if(C_totales == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }
    for(j = 0; j < 8; j++){
        creditos[j].creditos_totales = 0;
    }

    for(j = 0; j < 8; j++){
        if(creditos[j].m_1 == 1802){
            creditos[j].creditos_totales += 2;
        }
        else if(creditos[j].m_1 == 1683||creditos[j].m_1 == 1684||creditos[j].m_1 == 1686||creditos[j].m_1 == 1342||creditos[j].m_1 == 2888||creditos[j].m_1 == 2893||creditos[j].m_1 == 3889||creditos[j].m_1 == 3583||creditos[j].m_1 == 4890||creditos[j].m_1 == 6680||creditos[j].m_1 == 8692||creditos[j].m_1 == 8702||creditos[j].m_1 == 8942||creditos[j].m_1 == 8685){
            creditos[j].creditos_totales += 3;
        }
        else if(creditos[j].m_1 == 2894||creditos[j].m_1 == 2931||creditos[j].m_1 == 3932||creditos[j].m_1 == 3584||creditos[j].m_1 == 3581){
            creditos[j].creditos_totales += 4;
        }
        else{
            creditos[j].creditos_totales += 0;
        }

        if(creditos[j].m_2 == 1802){
            creditos[j].creditos_totales += 2;
        }
        else if(creditos[j].m_2 == 1683||creditos[j].m_2 == 1684||creditos[j].m_2 == 1686||creditos[j].m_2 == 1342||creditos[j].m_2 == 2888||creditos[j].m_2 == 2893||creditos[j].m_2 == 3889||creditos[j].m_2 == 3583||creditos[j].m_2 == 4890||creditos[j].m_2 == 6680||creditos[j].m_2 == 8692||creditos[j].m_2 == 8702||creditos[j].m_2 == 8942||creditos[j].m_2 == 8685){
            creditos[j].creditos_totales += 3;
        }
        else if(creditos[j].m_2 == 2894||creditos[j].m_2 == 2931||creditos[j].m_2 == 3932||creditos[j].m_2 == 3584||creditos[j].m_2 == 3581){
            creditos[j].creditos_totales += 4;
        }
        else{
            creditos[j].creditos_totales += 0;
        }

        if(creditos[j].m_3 == 1802){
            creditos[j].creditos_totales += 2;
        }
        else if(creditos[j].m_3 == 1683||creditos[j].m_3 == 1684||creditos[j].m_3 == 1686||creditos[j].m_3 == 1342||creditos[j].m_3 == 2888||creditos[j].m_3 == 2893||creditos[j].m_3 == 3889||creditos[j].m_3 == 3583||creditos[j].m_3 == 4890||creditos[j].m_3 == 6680||creditos[j].m_3 == 8692||creditos[j].m_3 == 8702||creditos[j].m_3 == 8942||creditos[j].m_3 == 8685){
            creditos[j].creditos_totales += 3;
        }
        else if(creditos[j].m_3 == 2894||creditos[j].m_3 == 2931||creditos[j].m_3 == 3932||creditos[j].m_3 == 3584||creditos[j].m_3 == 3581){
            creditos[j].creditos_totales += 4;
        }
        else{
            creditos[j].creditos_totales += 0;
        }

        if(creditos[j].m_4 == 1802){
            creditos[j].creditos_totales += 2;
        }
        else if(creditos[j].m_4 == 1683||creditos[j].m_4 == 1684||creditos[j].m_4 == 1686||creditos[j].m_4 == 1342||creditos[j].m_4 == 2888||creditos[j].m_4 == 2893||creditos[j].m_4 == 3889||creditos[j].m_4 == 3583||creditos[j].m_4 == 4890||creditos[j].m_4 == 6680||creditos[j].m_4 == 8692||creditos[j].m_4 == 8702||creditos[j].m_4 == 8942||creditos[j].m_4 == 8685){
            creditos[j].creditos_totales += 3;
        }
        else if(creditos[j].m_4 == 2894||creditos[j].m_4 == 2931||creditos[j].m_4 == 3932||creditos[j].m_4 == 3584||creditos[j].m_4 == 3581){
            creditos[j].creditos_totales += 4;
        }
        else{
            creditos[j].creditos_totales += 0;
        }

        if(creditos[j].m_5 == 1802){
            creditos[j].creditos_totales += 2;
        }
        else if(creditos[j].m_5 == 1683||creditos[j].m_5 == 1684||creditos[j].m_5 == 1686||creditos[j].m_5 == 1342||creditos[j].m_5 == 2888||creditos[j].m_5 == 2893||creditos[j].m_5 == 3889||creditos[j].m_5 == 3583||creditos[j].m_5 == 4890||creditos[j].m_5 == 6680||creditos[j].m_5 == 8692||creditos[j].m_5 == 8702||creditos[j].m_5 == 8942||creditos[j].m_5 == 8685){
            creditos[j].creditos_totales += 3;
        }
        else if(creditos[j].m_5 == 2894||creditos[j].m_5 == 2931||creditos[j].m_5 == 3932||creditos[j].m_5 == 3584||creditos[j].m_5 == 3581){
            creditos[j].creditos_totales += 4;
        }
        else{
            creditos[j].creditos_totales += 0;
        }

        if(creditos[j].m_6 == 1802){
            creditos[j].creditos_totales += 2;
        }
        else if(creditos[j].m_6 == 1683||creditos[j].m_6 == 1684||creditos[j].m_6 == 1686||creditos[j].m_6 == 1342||creditos[j].m_6 == 2888||creditos[j].m_6 == 2893||creditos[j].m_6 == 3889||creditos[j].m_6 == 3583||creditos[j].m_6 == 4890||creditos[j].m_6 == 6680||creditos[j].m_6 == 8692||creditos[j].m_6 == 8702||creditos[j].m_6 == 8942||creditos[j].m_6 == 8685){
            creditos[j].creditos_totales += 3;
        }
        else if(creditos[j].m_6 == 2894||creditos[j].m_6 == 2931||creditos[j].m_6 == 3932||creditos[j].m_6 == 3584||creditos[j].m_6 == 3581){
            creditos[j].creditos_totales += 4;
        }
        else{
            creditos[j].creditos_totales += 0;
        }

        if(creditos[j].m_7 == 1802){
            creditos[j].creditos_totales += 2;
        }
        else if(creditos[j].m_7 == 1683||creditos[j].m_7 == 1684||creditos[j].m_7 == 1686||creditos[j].m_7 == 1342||creditos[j].m_7 == 2888||creditos[j].m_7 == 2893||creditos[j].m_7 == 3889||creditos[j].m_7 == 3583||creditos[j].m_7 == 4890||creditos[j].m_7 == 6680||creditos[j].m_7 == 8692||creditos[j].m_7 == 8702||creditos[j].m_7 == 8942||creditos[j].m_7 == 8685){
            creditos[j].creditos_totales += 3;
        }
        else if(creditos[j].m_7 == 2894||creditos[j].m_7 == 2931||creditos[j].m_7 == 3932||creditos[j].m_7 == 3584||creditos[j].m_7 == 3581){
            creditos[j].creditos_totales += 4;
        }
        else{
            creditos[j].creditos_totales += 0;
        }
    }

    for(i=0; i<8;i++){
        fprintf(C_totales,"ID estudiante: %d, Creditos Totales: %d\n\n", creditos[i].ID_alumno, creditos[i].creditos_totales);
    }
    fclose(C_totales);
}

void precio(){

    int i;
    unsigned long int matriculas[2] = {12858000,6429000};
    FILE *precio_matricula;
    precio_matricula = fopen("precio_matricula.txt", "w");

    if(precio_matricula == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    for(i=0;i<8;i++){
        if(creditos[i].creditos_totales > 10){
            printf("ID: %d °°° Creditos: %d °°° Costo matricula: %lu (Matricula Completa)\n\n", creditos[i].ID_alumno,creditos[i].creditos_totales,matriculas[0]);
            fprintf(precio_matricula,"ID: %d °°° Creditos: %d °°° Costo matricula: %lu (Matricula Completa)\n\n", creditos[i].ID_alumno,creditos[i].creditos_totales,matriculas[0]);
        }
        else{
            printf("ID: %d °°° Creditos: %d °°° Costo matricula: %lu (Media Matricula)\n\n", creditos[i].ID_alumno,creditos[i].creditos_totales,matriculas[1]);
            fprintf(precio_matricula,"ID: %d °°° Creditos: %d °°° Costo matricula: %lu (Media Matricula)\n\n", creditos[i].ID_alumno,creditos[i].creditos_totales,matriculas[1]);
        }
    }
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    fclose(precio_matricula);
    system("pause");
    system("cls");
}

void materias_0(){
	
	departamentos.dinamicos = 0;
	departamentos.dispro = 0;
	departamentos.fisica_1 = 0;
	departamentos.fisica_2 = 0;
	departamentos.fisica_3 = 0;
	departamentos.fpga = 0;
	departamentos.f_circuitos = 0;
	departamentos.h_mat = 0;
	departamentos.IA = 0;
	departamentos.intro_elec = 0;
	departamentos.iot = 0;
	departamentos.lab_s = 0;
	departamentos.mate_1 = 0;
	departamentos.mate_2 = 0;
	departamentos.mate_3 = 0;
	departamentos.mate_4 = 0;
	departamentos.robotica = 0;
	departamentos.sen_con = 0;
	departamentos.sen_dis = 0;
	departamentos.s_redes = 0;

}

void solicitud_dep(){
	
	int i;
    char temp[50];
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    printf("Ud. escogio la opcion de crear las solicitudes a los departamentos\n");
    printf("Se mostrara en pantalla el id de la materia, su nombre, cuantos inscritos hay\n");
    printf("la conformacion de los grupos, su horario, modalidad y restricciones.\n\n");
    printf("Adicionalmente se creara un archivo con dicha informacion\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
    system("pause");
    system("cls");
    
    materias_0();
    materia_1();
    materia_2();
    materia_3();
    materia_4();
    materia_5();
    materia_6();
    materia_7();
	resumen_m(); 
	conformacion_grupos();
	imprimir_pantalla();
	imprimir_archivo();
	
}

void materia_1(){
	
	int i, p;
	for(i = 0; i < 8; i++){
    	if(creditos[i].m_1 == 1683){
			departamentos.mate_1 += 1;
		}
		else if(creditos[i].m_1 == 1684){
			departamentos.h_mat += 1;
		}
		else if(creditos[i].m_1 == 1802){
			departamentos.lab_s += 1;
		}
		else if(creditos[i].m_1 == 1686){
			departamentos.intro_elec += 1;
		}
		else if(creditos[i].m_1 == 1342){
			departamentos.fisica_1 += 1;
		}
		else if(creditos[i].m_1 == 2888){
			departamentos.mate_2 += 1;
		}
		else if(creditos[i].m_1 == 2893){
			departamentos.sen_con += 1;
		}
		else if(creditos[i].m_1 == 2894){
			departamentos.f_circuitos += 1;
		}
		else if(creditos[i].m_1 == 2931){
			departamentos.fisica_2 += 1;
		}
		else if(creditos[i].m_1 == 3889){
			departamentos.mate_3 += 1;
		}
		else if(creditos[i].m_1 == 3932){
			departamentos.fisica_3 += 1;
		}
		else if(creditos[i].m_1 == 3583){
			departamentos.sen_dis += 1;
		}
		else if(creditos[i].m_1 == 3584){
			departamentos.dinamicos += 1;
		}
		else if(creditos[i].m_1 == 3581){
			departamentos.dispro += 1;
		}
		else if(creditos[i].m_1 == 4890){
			departamentos.mate_4 += 1;
		}
		else if(creditos[i].m_1 == 6680){
			departamentos.IA += 1;
		}
		else if(creditos[i].m_1 == 8692){
			departamentos.fpga += 1;
		}
		else if(creditos[i].m_1 == 8702){
			departamentos.s_redes += 1;
		}
		else if(creditos[i].m_1 == 8942){
			departamentos.robotica += 1;
		}
		else if(creditos[i].m_1 == 8685){
			departamentos.iot += 1;
		}
		else{
			p=0;
		}
	}
}

void materia_2(){
	int i, p;
	for(i = 0; i < 8; i++){
    	if(creditos[i].m_2 == 1683){
			departamentos.mate_1 += 1;
		}
		else if(creditos[i].m_2 == 1684){
			departamentos.h_mat += 1;
		}
		else if(creditos[i].m_2 == 1802){
			departamentos.lab_s += 1;
		}
		else if(creditos[i].m_2 == 1686){
			departamentos.intro_elec += 1;
		}
		else if(creditos[i].m_2 == 1342){
			departamentos.fisica_1 += 1;
		}
		else if(creditos[i].m_2 == 2888){
			departamentos.mate_2 += 1;
		}
		else if(creditos[i].m_2 == 2893){
			departamentos.sen_con += 1;
		}
		else if(creditos[i].m_2 == 2894){
			departamentos.f_circuitos += 1;
		}
		else if(creditos[i].m_2 == 2931){
			departamentos.fisica_2 += 1;
		}
		else if(creditos[i].m_2 == 3889){
			departamentos.mate_3 += 1;
		}
		else if(creditos[i].m_2 == 3932){
			departamentos.fisica_3 += 1;
		}
		else if(creditos[i].m_2 == 3583){
			departamentos.sen_dis += 1;
		}
		else if(creditos[i].m_2 == 3584){
			departamentos.dinamicos += 1;
		}
		else if(creditos[i].m_2 == 3581){
			departamentos.dispro += 1;
		}
		else if(creditos[i].m_2 == 4890){
			departamentos.mate_4 += 1;
		}
		else if(creditos[i].m_2 == 6680){
			departamentos.IA += 1;
		}
		else if(creditos[i].m_2 == 8692){
			departamentos.fpga += 1;
		}
		else if(creditos[i].m_2 == 8702){
			departamentos.s_redes += 1;
		}
		else if(creditos[i].m_2 == 8942){
			departamentos.robotica += 1;
		}
		else if(creditos[i].m_2 == 8685){
			departamentos.iot += 1;
		}
		else{
			p=0;
		}
	}
}

void materia_3(){
	int i, p;
	for(i = 0; i < 8; i++){
    	if(creditos[i].m_3 == 1683){
			departamentos.mate_1 += 1;
		}
		else if(creditos[i].m_3 == 1684){
			departamentos.h_mat += 1;
		}
		else if(creditos[i].m_3 == 1802){
			departamentos.lab_s += 1;
		}
		else if(creditos[i].m_3 == 1686){
			departamentos.intro_elec += 1;
		}
		else if(creditos[i].m_3 == 1342){
			departamentos.fisica_1 += 1;
		}
		else if(creditos[i].m_3 == 2888){
			departamentos.mate_2 += 1;
		}
		else if(creditos[i].m_3 == 2893){
			departamentos.sen_con += 1;
		}
		else if(creditos[i].m_3 == 2894){
			departamentos.f_circuitos += 1;
		}
		else if(creditos[i].m_3 == 2931){
			departamentos.fisica_2 += 1;
		}
		else if(creditos[i].m_3 == 3889){
			departamentos.mate_3 += 1;
		}
		else if(creditos[i].m_3 == 3932){
			departamentos.fisica_3 += 1;
		}
		else if(creditos[i].m_3 == 3583){
			departamentos.sen_dis += 1;
		}
		else if(creditos[i].m_3 == 3584){
			departamentos.dinamicos += 1;
		}
		else if(creditos[i].m_3 == 3581){
			departamentos.dispro += 1;
		}
		else if(creditos[i].m_3 == 4890){
			departamentos.mate_4 += 1;
		}
		else if(creditos[i].m_3 == 6680){
			departamentos.IA += 1;
		}
		else if(creditos[i].m_3 == 8692){
			departamentos.fpga += 1;
		}
		else if(creditos[i].m_3 == 8702){
			departamentos.s_redes += 1;
		}
		else if(creditos[i].m_3 == 8942){
			departamentos.robotica += 1;
		}
		else if(creditos[i].m_3 == 8685){
			departamentos.iot += 1;
		}
		else{
			p=0;
		}
	}
}

void materia_4(){
	int i, p;
	for(i = 0; i < 8; i++){
    	if(creditos[i].m_4 == 1683){
			departamentos.mate_1 += 1;
		}
		else if(creditos[i].m_4 == 1684){
			departamentos.h_mat += 1;
		}
		else if(creditos[i].m_4 == 1802){
			departamentos.lab_s += 1;
		}
		else if(creditos[i].m_4 == 1686){
			departamentos.intro_elec += 1;
		}
		else if(creditos[i].m_4 == 1342){
			departamentos.fisica_1 += 1;
		}
		else if(creditos[i].m_4 == 2888){
			departamentos.mate_2 += 1;
		}
		else if(creditos[i].m_4 == 2893){
			departamentos.sen_con += 1;
		}
		else if(creditos[i].m_4 == 2894){
			departamentos.f_circuitos += 1;
		}
		else if(creditos[i].m_4 == 2931){
			departamentos.fisica_2 += 1;
		}
		else if(creditos[i].m_4 == 3889){
			departamentos.mate_3 += 1;
		}
		else if(creditos[i].m_4 == 3932){
			departamentos.fisica_3 += 1;
		}
		else if(creditos[i].m_4 == 3583){
			departamentos.sen_dis += 1;
		}
		else if(creditos[i].m_4 == 3584){
			departamentos.dinamicos += 1;
		}
		else if(creditos[i].m_4 == 3581){
			departamentos.dispro += 1;
		}
		else if(creditos[i].m_4 == 4890){
			departamentos.mate_4 += 1;
		}
		else if(creditos[i].m_4 == 6680){
			departamentos.IA += 1;
		}
		else if(creditos[i].m_4 == 8692){
			departamentos.fpga += 1;
		}
		else if(creditos[i].m_4 == 8702){
			departamentos.s_redes += 1;
		}
		else if(creditos[i].m_4 == 8942){
			departamentos.robotica += 1;
		}
		else if(creditos[i].m_4 == 8685){
			departamentos.iot += 1;
		}
		else{
			p=0;
		}
	}
}

void materia_5(){
	int i, p;
	for(i = 0; i < 8; i++){
    	if(creditos[i].m_5 == 1683){
			departamentos.mate_1 += 1;
		}
		else if(creditos[i].m_5 == 1684){
			departamentos.h_mat += 1;
		}
		else if(creditos[i].m_5 == 1802){
			departamentos.lab_s += 1;
		}
		else if(creditos[i].m_5 == 1686){
			departamentos.intro_elec += 1;
		}
		else if(creditos[i].m_5 == 1342){
			departamentos.fisica_1 += 1;
		}
		else if(creditos[i].m_5 == 2888){
			departamentos.mate_2 += 1;
		}
		else if(creditos[i].m_5 == 2893){
			departamentos.sen_con += 1;
		}
		else if(creditos[i].m_5 == 2894){
			departamentos.f_circuitos += 1;
		}
		else if(creditos[i].m_5 == 2931){
			departamentos.fisica_2 += 1;
		}
		else if(creditos[i].m_5 == 3889){
			departamentos.mate_3 += 1;
		}
		else if(creditos[i].m_5 == 3932){
			departamentos.fisica_3 += 1;
		}
		else if(creditos[i].m_5 == 3583){
			departamentos.sen_dis += 1;
		}
		else if(creditos[i].m_5 == 3584){
			departamentos.dinamicos += 1;
		}
		else if(creditos[i].m_5 == 3581){
			departamentos.dispro += 1;
		}
		else if(creditos[i].m_5 == 4890){
			departamentos.mate_4 += 1;
		}
		else if(creditos[i].m_5 == 6680){
			departamentos.IA += 1;
		}
		else if(creditos[i].m_5 == 8692){
			departamentos.fpga += 1;
		}
		else if(creditos[i].m_5 == 8702){
			departamentos.s_redes += 1;
		}
		else if(creditos[i].m_5 == 8942){
			departamentos.robotica += 1;
		}
		else if(creditos[i].m_5 == 8685){
			departamentos.iot += 1;
		}
		else{
			p=0;
		}
	}
}

void materia_6(){
	int i, p;
	for(i = 0; i < 8; i++){
    	if(creditos[i].m_6 == 1683){
			departamentos.mate_1 += 1;
		}
		else if(creditos[i].m_6 == 1684){
			departamentos.h_mat += 1;
		}
		else if(creditos[i].m_6 == 1802){
			departamentos.lab_s += 1;
		}
		else if(creditos[i].m_6 == 1686){
			departamentos.intro_elec += 1;
		}
		else if(creditos[i].m_6 == 1342){
			departamentos.fisica_1 += 1;
		}
		else if(creditos[i].m_6 == 2888){
			departamentos.mate_2 += 1;
		}
		else if(creditos[i].m_6 == 2893){
			departamentos.sen_con += 1;
		}
		else if(creditos[i].m_6 == 2894){
			departamentos.f_circuitos += 1;
		}
		else if(creditos[i].m_6 == 2931){
			departamentos.fisica_2 += 1;
		}
		else if(creditos[i].m_6 == 3889){
			departamentos.mate_3 += 1;
		}
		else if(creditos[i].m_6 == 3932){
			departamentos.fisica_3 += 1;
		}
		else if(creditos[i].m_6 == 3583){
			departamentos.sen_dis += 1;
		}
		else if(creditos[i].m_6 == 3584){
			departamentos.dinamicos += 1;
		}
		else if(creditos[i].m_6 == 3581){
			departamentos.dispro += 1;
		}
		else if(creditos[i].m_6 == 4890){
			departamentos.mate_4 += 1;
		}
		else if(creditos[i].m_6 == 6680){
			departamentos.IA += 1;
		}
		else if(creditos[i].m_6 == 8692){
			departamentos.fpga += 1;
		}
		else if(creditos[i].m_6 == 8702){
			departamentos.s_redes += 1;
		}
		else if(creditos[i].m_6 == 8942){
			departamentos.robotica += 1;
		}
		else if(creditos[i].m_6 == 8685){
			departamentos.iot += 1;
		}
		else{
			p=0;
		}
	}
}

void materia_7(){
	int i, p;
	for(i = 0; i < 8; i++){
    	if(creditos[i].m_7 == 1683){
			departamentos.mate_1 += 1;
		}
		else if(creditos[i].m_7 == 1684){
			departamentos.h_mat += 1;
		}
		else if(creditos[i].m_7 == 1802){
			departamentos.lab_s += 1;
		}
		else if(creditos[i].m_7 == 1686){
			departamentos.intro_elec += 1;
		}
		else if(creditos[i].m_7 == 1342){
			departamentos.fisica_1 += 1;
		}
		else if(creditos[i].m_7 == 2888){
			departamentos.mate_2 += 1;
		}
		else if(creditos[i].m_7 == 2893){
			departamentos.sen_con += 1;
		}
		else if(creditos[i].m_7 == 2894){
			departamentos.f_circuitos += 1;
		}
		else if(creditos[i].m_7 == 2931){
			departamentos.fisica_2 += 1;
		}
		else if(creditos[i].m_7 == 3889){
			departamentos.mate_3 += 1;
		}
		else if(creditos[i].m_7 == 3932){
			departamentos.fisica_3 += 1;
		}
		else if(creditos[i].m_7 == 3583){
			departamentos.sen_dis += 1;
		}
		else if(creditos[i].m_7 == 3584){
			departamentos.dinamicos += 1;
		}
		else if(creditos[i].m_7 == 3581){
			departamentos.dispro += 1;
		}
		else if(creditos[i].m_7 == 4890){
			departamentos.mate_4 += 1;
		}
		else if(creditos[i].m_7 == 6680){
			departamentos.IA += 1;
		}
		else if(creditos[i].m_7 == 8692){
			departamentos.fpga += 1;
		}
		else if(creditos[i].m_7 == 8702){
			departamentos.s_redes += 1;
		}
		else if(creditos[i].m_7 == 8942){
			departamentos.robotica += 1;
		}
		else if(creditos[i].m_7 == 8685){
			departamentos.iot += 1;
		}
		else{
			p=0;
		}
	}
}

void resumen_m(){
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("Sistemas dinamicos:           %d personas\n\n",departamentos.dinamicos);
    printf("Dispro:                       %d personas\n\n",departamentos.dispro);
    printf("Fisica 1:                     %d personas\n\n",departamentos.fisica_1);
    printf("Fisica 2:                     %d personas\n\n",departamentos.fisica_2);
    printf("Fisica 3:                     %d personas\n\n",departamentos.fisica_3);
    printf("diseno en FPGA:               %d personas\n\n",departamentos.fpga);
    printf("Fundamentos de circuitos:     %d personas\n\n",departamentos.f_circuitos);
    printf("Herramientas matematicas:     %d personas\n\n",departamentos.h_mat);
    printf("Inteligencia Artificial:      %d personas\n\n",departamentos.IA);
    printf("Intro a Electronica:          %d personas\n\n",departamentos.intro_elec);
    printf("IOT:                          %d personas\n\n",departamentos.iot);
    printf("Laboratorio de señales:       %d personas\n\n",departamentos.lab_s);
    printf("Matematicas 1:                %d personas\n\n",departamentos.mate_1);
    printf("Matematicas 2:                %d personas\n\n",departamentos.mate_2);
    printf("Matematicas 3:                %d personas\n\n",departamentos.mate_3);
    printf("Matematicas 4:                %d personas\n\n",departamentos.mate_4);
    printf("Robotica:                     %d personas\n\n",departamentos.robotica);
    printf("Senales Continuas:            %d personas\n\n",departamentos.sen_con);
    printf("Senales Discretas:            %d personas\n\n",departamentos.sen_dis);
    printf("Seguridad de Redes:           %d personas\n",departamentos.s_redes);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    system("pause");
    system("cls");
    //printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
}

void conformacion_grupos(){
	
	if(departamentos.dinamicos <= 10){
		grupos.dinamicos_g = 1;
	}
	else if(departamentos.dinamicos > 10 && departamentos.dinamicos <= 20){
		grupos.dinamicos_g = 2;
	}
	else if(departamentos.dinamicos > 20 && departamentos.dinamicos <= 30){
		grupos.dinamicos_g = 3;
	}
	else if(departamentos.dinamicos > 30 && departamentos.dinamicos <= 40){
		grupos.dinamicos_g = 4;
	}
	
	if(departamentos.dispro <= 10){
		grupos.dispro_g = 1;
	}
	else if(departamentos.dispro > 10 && departamentos.dispro <= 20){
		grupos.dispro_g = 2;
	}
	else if(departamentos.dispro > 20 && departamentos.dispro <= 30){
		grupos.dispro_g = 3;
	}
	else if(departamentos.dispro > 30 && departamentos.dispro <= 40){
		grupos.dispro_g = 4;
	}
	
	if(departamentos.fisica_1 <= 10){
		grupos.fisica_1_g = 1;
	}
	else if(departamentos.fisica_1 > 10 && departamentos.fisica_1 <= 20){
		grupos.fisica_1_g = 2;
	}
	else if(departamentos.fisica_1 > 20 && departamentos.fisica_1 <= 30){
		grupos.fisica_1_g = 3;
	}
	else if(departamentos.fisica_1 > 30 && departamentos.fisica_1 <= 40){
		grupos.fisica_1_g = 4;
	}
	
	if(departamentos.fisica_2 <= 10){
		grupos.fisica_2_g = 1;
	}
	else if(departamentos.fisica_2 > 10 && departamentos.fisica_2 <= 20){
		grupos.fisica_2_g = 2;
	}
	else if(departamentos.fisica_2 > 20 && departamentos.fisica_2 <= 30){
		grupos.fisica_2_g = 3;
	}
	else if(departamentos.fisica_2 > 30 && departamentos.fisica_2 <= 40){
		grupos.fisica_2_g = 4;
	}
	
	if(departamentos.fisica_3 <= 10){
		grupos.fisica_3_g = 1;
	}
	else if(departamentos.fisica_3 > 10 && departamentos.fisica_3 <= 20){
		grupos.fisica_3_g = 2;
	}
	else if(departamentos.fisica_3 > 20 && departamentos.fisica_3 <= 30){
		grupos.fisica_3_g = 3;
	}
	else if(departamentos.fisica_3 > 30 && departamentos.fisica_3 <= 40){
		grupos.fisica_3_g = 4;
	}
	
	if(departamentos.fpga <= 10){
		grupos.fpga_g = 1;
	}
	else if(departamentos.fpga > 10 && departamentos.fpga <= 20){
		grupos.fpga_g = 2;
	}
	else if(departamentos.fpga > 20 && departamentos.fpga <= 30){
		grupos.fpga_g = 3;
	}
	else if(departamentos.fpga > 30 && departamentos.fpga <= 40){
		grupos.fpga_g = 4;
	}
	
	if(departamentos.f_circuitos <= 10){
		grupos.f_circuitos_g = 1;
	}
	else if(departamentos.f_circuitos > 10 && departamentos.f_circuitos <= 20){
		grupos.f_circuitos_g = 2;
	}
	else if(departamentos.f_circuitos > 20 && departamentos.f_circuitos <= 30){
		grupos.f_circuitos_g = 3;
	}
	else if(departamentos.f_circuitos > 30 && departamentos.f_circuitos <= 40){
		grupos.f_circuitos_g = 4;
	}
	
	if(departamentos.h_mat <= 10){
		grupos.h_mat_g = 1;
	}
	else if(departamentos.h_mat > 10 && departamentos.h_mat <= 20){
		grupos.h_mat_g = 2;
	}
	else if(departamentos.h_mat > 20 && departamentos.h_mat <= 30){
		grupos.h_mat_g = 3;
	}
	else if(departamentos.h_mat > 30 && departamentos.h_mat <= 40){
		grupos.h_mat_g = 4;
	}
	
	if(departamentos.IA <= 10){
		grupos.IA_g = 1;
	}
	else if(departamentos.IA > 10 && departamentos.IA <= 20){
		grupos.IA_g = 2;
	}
	else if(departamentos.IA > 20 && departamentos.IA <= 30){
		grupos.IA_g = 3;
	}
	else if(departamentos.IA > 30 && departamentos.IA <= 40){
		grupos.IA_g = 4;
	}
	
	if(departamentos.intro_elec <= 10){
		grupos.intro_elec_g = 1;
	}
	else if(departamentos.intro_elec > 10 && departamentos.intro_elec <= 20){
		grupos.intro_elec_g = 2;
	}
	else if(departamentos.intro_elec > 20 && departamentos.intro_elec <= 30){
		grupos.intro_elec_g = 3;
	}
	else if(departamentos.intro_elec > 30 && departamentos.intro_elec <= 40){
		grupos.intro_elec_g = 4;
	}
	
	if(departamentos.iot <= 10){
		grupos.iot_g = 1;
	}
	else if(departamentos.iot > 10 && departamentos.iot <= 20){
		grupos.iot_g = 2;
	}
	else if(departamentos.iot > 20 && departamentos.iot <= 30){
		grupos.iot_g = 3;
	}
	else if(departamentos.iot > 30 && departamentos.iot <= 40){
		grupos.iot_g = 4;
	}
	
	if(departamentos.lab_s <= 10){
		grupos.lab_s_g = 1;
	}
	else if(departamentos.lab_s > 10 && departamentos.lab_s <= 20){
		grupos.lab_s_g = 2;
	}
	else if(departamentos.lab_s > 20 && departamentos.lab_s <= 30){
		grupos.lab_s_g = 3;
	}
	else if(departamentos.lab_s > 30 && departamentos.lab_s <= 40){
		grupos.lab_s_g = 4;
	}
	
	if(departamentos.mate_1 <= 10){
		grupos.mate_1_g = 1;
	}
	else if(departamentos.mate_1 > 10 && departamentos.mate_1 <= 20){
		grupos.mate_1_g = 2;
	}
	else if(departamentos.mate_1 > 20 && departamentos.mate_1 <= 30){
		grupos.mate_1_g = 3;
	}
	else if(departamentos.mate_1 > 30 && departamentos.mate_1 <= 40){
		grupos.mate_1_g = 4;
	}
	
	if(departamentos.mate_2 <= 10){
		grupos.mate_2_g = 1;
	}
	else if(departamentos.mate_2 > 10 && departamentos.mate_2 <= 20){
		grupos.mate_2_g = 2;
	}
	else if(departamentos.mate_2 > 20 && departamentos.mate_2 <= 30){
		grupos.mate_2_g = 3;
	}
	else if(departamentos.mate_2 > 30 && departamentos.mate_2 <= 40){
		grupos.mate_2_g = 4;
	}
	
	if(departamentos.mate_3 <= 10){
		grupos.mate_3_g = 1;
	}
	else if(departamentos.mate_3 > 10 && departamentos.mate_3 <= 20){
		grupos.mate_3_g = 2;
	}
	else if(departamentos.mate_3 > 20 && departamentos.mate_3 <= 30){
		grupos.mate_3_g = 3;
	}
	else if(departamentos.mate_3 > 30 && departamentos.mate_3 <= 40){
		grupos.mate_3_g = 4;
	}
	
	if(departamentos.mate_4 <= 10){
		grupos.mate_4_g = 1;
	}
	else if(departamentos.mate_4 > 10 && departamentos.mate_4 <= 20){
		grupos.mate_4_g = 2;
	}
	else if(departamentos.mate_4 > 20 && departamentos.mate_4 <= 30){
		grupos.mate_4_g = 3;
	}
	else if(departamentos.mate_4 > 30 && departamentos.mate_4 <= 40){
		grupos.mate_4_g = 4;
	}
	
	if(departamentos.robotica <= 10){
		grupos.robotica_g = 1;
	}
	else if(departamentos.robotica > 10 && departamentos.robotica <= 20){
		grupos.robotica_g = 2;
	}
	else if(departamentos.robotica > 20 && departamentos.robotica <= 30){
		grupos.robotica_g = 3;
	}
	else if(departamentos.robotica > 30 && departamentos.robotica <= 40){
		grupos.robotica_g = 4;
	}
	
	if(departamentos.sen_con <= 10){
		grupos.sen_con_g = 1;
	}
	else if(departamentos.sen_con > 10 && departamentos.sen_con <= 20){
		grupos.sen_con_g = 2;
	}
	else if(departamentos.sen_con > 20 && departamentos.sen_con <= 30){
		grupos.sen_con_g = 3;
	}
	else if(departamentos.sen_con > 30 && departamentos.sen_con <= 40){
		grupos.sen_con_g = 4;
	}
	
	if(departamentos.sen_dis <= 10){
		grupos.sen_dis_g = 1;
	}
	else if(departamentos.sen_dis > 10 && departamentos.sen_dis <= 20){
		grupos.sen_dis_g = 2;
	}
	else if(departamentos.sen_dis > 20 && departamentos.sen_dis <= 30){
		grupos.sen_dis_g = 3;
	}
	else if(departamentos.sen_dis > 30 && departamentos.sen_dis <= 40){
		grupos.sen_dis_g = 4;
	}
	
	if(departamentos.s_redes <= 10){
		grupos.s_redes_g = 1;
	}
	else if(departamentos.s_redes > 10 && departamentos.s_redes <= 20){
		grupos.s_redes_g = 2;
	}
	else if(departamentos.s_redes > 20 && departamentos.s_redes <= 30){
		grupos.s_redes_g = 3;
	}
	else if(departamentos.s_redes > 30 && departamentos.s_redes <= 40){
		grupos.s_redes_g = 4;
	}
	
}

void imprimir_pantalla(){
	
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
	
	printf("ID Materia: 1683 \nNombre: Matematicas 1 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.mate_1, grupos.mate_1_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 1684 \nNombre: herramientas matematicas \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.h_mat, grupos.h_mat_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 1802 \nNombre: laboratorio de senales \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.lab_s, grupos.lab_s_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 1686 \nNombre: intro Electronica \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.intro_elec, grupos.intro_elec_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 1342 \nNombre: fisica 1 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.fisica_1, grupos.fisica_1_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 2888 \nNombre: matematicas 2 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 1683\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.mate_2, grupos.mate_2_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 2893 \nNombre: senales continuas \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2802\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.sen_con, grupos.sen_con_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 2894 \nNombre: fundamentos de circuitos \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 1686\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.f_circuitos, grupos.f_circuitos_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 2931 \nNombre: fisica 2 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 1342\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.fisica_2, grupos.fisica_2_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 3889 \nNombre: matematicas 3 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2888\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.mate_3, grupos.mate_3_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 3932 \nNombre: fisica 3 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2931\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.fisica_3, grupos.fisica_3_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 3583 \nNombre: senales discretas \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2893\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.sen_dis, grupos.sen_dis_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 3584 \nNombre: sistemas dinamicos \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2894\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.dinamicos, grupos.dinamicos_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 3581 \nNombre: dispro \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 1686\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.dispro, grupos.dispro_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 4890 \nNombre: matematicas 4 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 3889\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.mate_4, grupos.mate_4_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 6680 \nNombre: inteligencia artificial \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.IA, grupos.IA_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 8692 \nNombre: diseno en fpga \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.fpga, grupos.fpga_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 8702 \nNombre: seguridad en redes \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.s_redes, grupos.s_redes_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 8942 \nNombre: herramientas de robotica \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.robotica, grupos.robotica_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    printf("ID Materia: 8685 \nNombre: IOT \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    printf("Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.iot, grupos.iot_g);
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
	
	printf("EL ARCHIVO SE CREO CORRECTAMENTE Y SE ENCUENTRA EN LOS ARCHIVOS DEL PROYECTO");
	system("pause");
    system("cls");
}

void imprimir_archivo(){
	
	FILE *solicitud_departamentos;
    solicitud_departamentos = fopen("solicitud_departamentos.txt", "w");

    if(solicitud_departamentos == NULL){
        printf("no se ha podido abrir el archivo.");
        exit(1);
    }
    
    fprintf(solicitud_departamentos,"ID Materia: 1683 \nNombre: Matematicas 1 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.mate_1, grupos.mate_1_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 1684 \nNombre: herramientas matematicas \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.h_mat, grupos.h_mat_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 1802 \nNombre: laboratorio de senales \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.lab_s, grupos.lab_s_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 1686 \nNombre: intro Electronica \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.intro_elec, grupos.intro_elec_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 1342 \nNombre: fisica 1 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.fisica_1, grupos.fisica_1_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 2888 \nNombre: matematicas 2 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 1683\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.mate_2, grupos.mate_2_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 2893 \nNombre: senales continuas \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2802\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.sen_con, grupos.sen_con_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 2894 \nNombre: fundamentos de circuitos \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 1686\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.f_circuitos, grupos.f_circuitos_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 2931 \nNombre: fisica 2 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 1342\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.fisica_2, grupos.fisica_2_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 3889 \nNombre: matematicas 3 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2888\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.mate_3, grupos.mate_3_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 3932 \nNombre: fisica 3 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2931\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.fisica_3, grupos.fisica_3_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 3583 \nNombre: senales discretas \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2893\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.sen_dis, grupos.sen_dis_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 3584 \nNombre: sistemas dinamicos \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 2894\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.dinamicos, grupos.dinamicos_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 3581 \nNombre: dispro \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 1686\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.dispro, grupos.dispro_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 4890 \nNombre: matematicas 4 \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 3889\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.mate_4, grupos.mate_4_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 6680 \nNombre: inteligencia artificial \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.IA, grupos.IA_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 8692 \nNombre: diseno en fpga \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.fpga, grupos.fpga_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 8702 \nNombre: seguridad en redes \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.s_redes, grupos.s_redes_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 8942 \nNombre: herramientas de robotica \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.robotica, grupos.robotica_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    fprintf(solicitud_departamentos,"ID Materia: 8685 \nNombre: IOT \nHorario: Diurno \nModalidad: Remota \nID Restriccion: 0000\n");
    fprintf(solicitud_departamentos,"Total inscripciones: %d \nCantidad de grupos: %d\n",departamentos.iot, grupos.iot_g);
    fprintf(solicitud_departamentos,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n" );
    
    
	fclose(solicitud_departamentos);
}


