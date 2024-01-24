#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	
	int base, base2, base3, base4, base5, altura, altura2, altura3, altura4, altura5, PE, PE2, PE3, PE4, PE5, cantidad_tuberia, cantidad_tuberia2, cantidad_tuberia3, cantidad_tuberia4, cantidad_tuberia5, n_bulbos_d_m, n_bulbos_d_m2, n_bulbos_d_m3, n_bulbos_d_m4, n_bulbos_d_m5, cantidad_bulbos, cantidad_bulbos2, cantidad_bulbos3, cantidad_bulbos4, cantidad_bulbos5, cantidad_reguladores, cantidad_reguladores2, cantidad_reguladores3, cantidad_reguladores4, cantidad_reguladores5, tuberia_por_metro_cuadrado, tuberia_por_metro_cuadrado2, tuberia_por_metro_cuadrado3, tuberia_por_metro_cuadrado4, tuberia_por_metro_cuadrado5, bulbos_por_metro_cuadrado, bulbos_por_metro_cuadrado2, bulbos_por_metro_cuadrado3, bulbos_por_metro_cuadrado4, bulbos_por_metro_cuadrado5, reguladores_por_metro_cuadrado, reguladores_por_metro_cuadrado2, reguladores_por_metro_cuadrado3, reguladores_por_metro_cuadrado4, reguladores_por_metro_cuadrado5, costo_por_metro_tuberia, costo_por_metro_tuberia2, costo_por_metro_tuberia3, costo_por_metro_tuberia4, costo_por_metro_tuberia5, costo_por_metro_blubos, costo_por_metro_blubos2, costo_por_metro_blubos3, costo_por_metro_blubos4, costo_por_metro_blubos5, costo_por_metro_reguladores, costo_por_metro_reguladores2, costo_por_metro_reguladores3, costo_por_metro_reguladores4, costo_por_metro_reguladores5, costo_total, costo_total2, costo_total3, costo_total4, costo_total5,costo_total_metro, costo_por_metro_cuadrado, costo_por_metro_cuadrado2, costo_por_metro_cuadrado3, costo_por_metro_cuadrado4, costo_por_metro_cuadrado5, costo_total_tuberia, costo_total_tuberia2, costo_total_tuberia3, costo_total_tuberia4, costo_total_tuberia5, n_paralelogramo, n_paralelogramo2, n_paralelogramo3, n_paralelogramo4, n_paralelogramo5, area_paralelogramo, area_paralelogramo2, area_paralelogramo3, area_paralelogramo4, area_paralelogramo5, area_del_lugar, area_del_lugar2, area_del_lugar3, area_del_lugar4, area_del_lugar5, costo_por_metro_bulbos, costo_por_metro_bulbos2, costo_por_metro_bulbos3, costo_por_metro_bulbos4, costo_por_metro_bulbos5, costo_total_bulbos, costo_total_bulbos2, costo_total_bulbos3, costo_total_bulbos4, costo_total_bulbos5, costo_total_reguladores, costo_total_reguladores2, costo_total_reguladores3, costo_total_reguladores4, costo_total_reguladores5, costo_por_metro_regulador, costo_por_metro_regulador2, costo_por_metro_regulador3, costo_por_metro_regulador4, costo_por_metro_regulador5, costo_total_metro2, costo_total_metro3, costo_total_metro4, costo_total_metro5, costo_total_por_dos_years_bulbos, costo_total_por_dos_years_bulbos2, costo_total_por_dos_years_bulbos3, costo_total_por_dos_years_bulbos4, costo_total_por_dos_years_bulbos5, plazo_de_renovacion, plazo_de_renovacion2, plazo_de_renovacion3, plazo_de_renovacion4, plazo_de_renovacion5, duracion_mantenimiento, duracion_mantenimiento2, duracion_mantenimiento3, duracion_mantenimiento4, duracion_mantenimiento5, veces_que_se_renueva_b, veces_que_se_renueva_b2, veces_que_se_renueva_b3, veces_que_se_renueva_b4, veces_que_se_renueva_b5, numerocamp, camp, opcion, op, numero, selec1, selec2, selec3, selec4, selec5, selec6;
	
	printf("\n CAMPESINO 1");
	
	printf("\n ");
	
	printf("\n INFORMACION DEL TERRENO: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la base total del lugar: ");
	scanf("%i", &base);
	
	printf("\n   Ingrese la altura total del lugar: ");
	scanf("%i", &altura);
	
	printf("\n   Ingrese el numero de diviciones que tiene en paralelogramos el terreno: ");
	scanf("%i", &n_paralelogramo);
	
	printf("\n ");
	
	printf("\n INFORMACION DE LOS MATERIALES: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la cantidad de tuberia requerida por metro cuadrado: ");
	scanf("%i", &tuberia_por_metro_cuadrado);
	
	printf("\n   Ingrese la cantidad de bulbos requeridos por metro cuadrado: ");
	scanf("%i", &bulbos_por_metro_cuadrado);
	
	printf("\n   Ingrese la cantidad de reguladores por metro cuadrado: ");
	scanf("%i", &reguladores_por_metro_cuadrado);
	
	printf("\n   Ingrese el costo por metro cuadrado de la tuberia: ");
	scanf("%i", &costo_por_metro_tuberia);
	
	printf("\n   Ingrese el costo por pieza de los bulbos: ");
	scanf("%i", &costo_por_metro_bulbos);
	
	printf("\n   Ingrese el costo por pieza de los reguladores: ");
	scanf("%i", &costo_por_metro_regulador);
	
	printf("\n ");
	
	printf("\n TIEMPO DE USO Y CICLOS DE VENCIMIENTO PARA LOS MATERIALES");
	
	printf("\n ");
	
	printf("\n   Ingrese el tiempo en meses que desea mantener el sistema de riego: ");
	scanf("%i", &duracion_mantenimiento);
	
	printf("\n   Ingrese el plazo en meses para la renovacion de los bulbos: ");
	scanf("%i", &plazo_de_renovacion);
	
	printf("\n Ingrese su presupuesto para determinar si es factible o no la manutencion del sistema de riego: ");
	
	scanf("%i", &PE);
	
	area_del_lugar = base * altura;
	
	area_paralelogramo = area_del_lugar / n_paralelogramo;
	
	cantidad_tuberia = area_del_lugar * tuberia_por_metro_cuadrado;
	
	cantidad_bulbos = area_del_lugar * bulbos_por_metro_cuadrado;
	
	cantidad_reguladores = area_del_lugar * reguladores_por_metro_cuadrado;
	
	costo_total_tuberia = costo_por_metro_tuberia * tuberia_por_metro_cuadrado * area_del_lugar;
	
	costo_total_bulbos = costo_por_metro_bulbos * bulbos_por_metro_cuadrado * area_del_lugar;
	
	veces_que_se_renueva_b = duracion_mantenimiento / plazo_de_renovacion;
	
	n_bulbos_d_m = bulbos_por_metro_cuadrado * area_del_lugar * veces_que_se_renueva_b;
	
	costo_total_por_dos_years_bulbos = costo_total_bulbos * veces_que_se_renueva_b;
	
	costo_total_reguladores = costo_por_metro_regulador * reguladores_por_metro_cuadrado * area_del_lugar;
	
	costo_total = costo_total_por_dos_years_bulbos + costo_total_reguladores + costo_total_tuberia;
	
	costo_total_metro = costo_total / area_del_lugar;
	
	system("cls");
	
	printf("\n CAMPESINO 2");
	
	printf("\n ");
	
	printf("\n INFORMACION DEL TERRENO: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la base total del lugar: ");
	scanf("%i", &base2);
	
	printf("\n   Ingrese la altura total del lugar: ");
	scanf("%i", &altura2);
	
	printf("\n   Ingrese el numero de diviciones que tiene en paralelogramos el terreno: ");
	scanf("%i", &n_paralelogramo2);
	
	printf("\n ");
	
	printf("\n INFORMACION DE LOS MATERIALES: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la cantidad de tuberia requerida por metro cuadrado: ");
	scanf("%i", &tuberia_por_metro_cuadrado2);
	
	printf("\n   Ingrese la cantidad de bulbos requeridos por metro cuadrado: ");
	scanf("%i", &bulbos_por_metro_cuadrado2);
	
	printf("\n   Ingrese la cantidad de reguladores por metro cuadrado: ");
	scanf("%i", &reguladores_por_metro_cuadrado2);
	
	printf("\n   Ingrese el costo por metro cuadrado de la tuberia: ");
	scanf("%i", &costo_por_metro_tuberia2);
	
	printf("\n   Ingrese el costo por pieza de los bulbos: ");
	scanf("%i", &costo_por_metro_bulbos2);
	
	printf("\n   Ingrese el costo por pieza de los reguladores: ");
	scanf("%i", &costo_por_metro_regulador2);
	
	printf("\n ");
	
	printf("\n TIEMPO DE USO Y CICLOS DE VENCIMIENTO PARA LOS MATERIALES");
	
	printf("\n ");
	
	printf("\n   Ingrese el tiempo en meses que desea mantener el sistema de riego: ");
	scanf("%i", &duracion_mantenimiento2);
	
	printf("\n   Ingrese el plazo en meses para la renovacion de los bulbos: ");
	scanf("%i", &plazo_de_renovacion2);
	
	printf("\n Ingrese su presupuesto para determinar si es factible o no la manutencion del sistema de riego: ");
	
	scanf("%i", &PE2);
	
	area_del_lugar2 = base2 * altura2;
	
	area_paralelogramo2 = area_del_lugar2 / n_paralelogramo2;
	
	cantidad_tuberia2 = area_del_lugar2 * tuberia_por_metro_cuadrado2;
	
	cantidad_bulbos2 = area_del_lugar2 * bulbos_por_metro_cuadrado2;
	
	cantidad_reguladores2 = area_del_lugar2 * reguladores_por_metro_cuadrado2;
	
	costo_total_tuberia2 = costo_por_metro_tuberia2 * tuberia_por_metro_cuadrado2 * area_del_lugar2;
	
	costo_total_bulbos2 = costo_por_metro_bulbos2 * bulbos_por_metro_cuadrado2 * area_del_lugar2;
	
	veces_que_se_renueva_b2 = duracion_mantenimiento2 / plazo_de_renovacion2;
	
	n_bulbos_d_m2 = bulbos_por_metro_cuadrado2 * area_del_lugar2 * veces_que_se_renueva_b2;
	
	costo_total_por_dos_years_bulbos2 = costo_total_bulbos2 * veces_que_se_renueva_b2;
	
	costo_total_reguladores2 = costo_por_metro_regulador2 * reguladores_por_metro_cuadrado2 * area_del_lugar2;
	
	costo_total2 = costo_total_por_dos_years_bulbos2 + costo_total_reguladores2 + costo_total_tuberia2;
	
	costo_total_metro2 = costo_total2 / area_del_lugar2;
	
	system("cls");
	
	printf("\n CAMPESINO 3");
	
	printf("\n ");
	
	printf("\n INFORMACION DEL TERRENO: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la base total del lugar: ");
	scanf("%i", &base3);
	
	printf("\n   Ingrese la altura total del lugar: ");
	scanf("%i", &altura3);
	
	printf("\n   Ingrese el numero de diviciones que tiene en paralelogramos el terreno: ");
	scanf("%i", &n_paralelogramo3);
	
	printf("\n ");
	
	printf("\n INFORMACION DE LOS MATERIALES: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la cantidad de tuberia requerida por metro cuadrado: ");
	scanf("%i", &tuberia_por_metro_cuadrado3);
	
	printf("\n   Ingrese la cantidad de bulbos requeridos por metro cuadrado: ");
	scanf("%i", &bulbos_por_metro_cuadrado3);
	
	printf("\n   Ingrese la cantidad de reguladores por metro cuadrado: ");
	scanf("%i", &reguladores_por_metro_cuadrado3);
	
	printf("\n   Ingrese el costo por metro cuadrado de la tuberia: ");
	scanf("%i", &costo_por_metro_tuberia3);
	
	printf("\n   Ingrese el costo por pieza de los bulbos: ");
	scanf("%i", &costo_por_metro_bulbos3);
	
	printf("\n   Ingrese el costo por pieza de los reguladores: ");
	scanf("%i", &costo_por_metro_regulador3);
	
	printf("\n ");
	
	printf("\n TIEMPO DE USO Y CICLOS DE VENCIMIENTO PARA LOS MATERIALES");
	
	printf("\n ");
	
	printf("\n   Ingrese el tiempo en meses que desea mantener el sistema de riego: ");
	scanf("%i", &duracion_mantenimiento3);
	
	printf("\n   Ingrese el plazo en meses para la renovacion de los bulbos: ");
	scanf("%i", &plazo_de_renovacion3);
	
	printf("\n Ingrese su presupuesto para determinar si es factible o no la manutencion del sistema de riego: ");
	
	scanf("%i", &PE3);
	
	area_del_lugar3 = base3 * altura3;
	
	area_paralelogramo3 = area_del_lugar3 / n_paralelogramo3;
	
	cantidad_tuberia3 = area_del_lugar3 * tuberia_por_metro_cuadrado3;
	
	cantidad_bulbos3 = area_del_lugar3 * bulbos_por_metro_cuadrado3;
	
	cantidad_reguladores3 = area_del_lugar3 * reguladores_por_metro_cuadrado3;
	
	costo_total_tuberia3 = costo_por_metro_tuberia3 * tuberia_por_metro_cuadrado3 * area_del_lugar3;
	
	costo_total_bulbos3 = costo_por_metro_bulbos3 * bulbos_por_metro_cuadrado3 * area_del_lugar3;
	
	veces_que_se_renueva_b3 = duracion_mantenimiento3 / plazo_de_renovacion3;
	
	n_bulbos_d_m3 = bulbos_por_metro_cuadrado3 * area_del_lugar3 * veces_que_se_renueva_b3;
	
	costo_total_por_dos_years_bulbos3 = costo_total_bulbos3 * veces_que_se_renueva_b3;
	
	costo_total_reguladores3 = costo_por_metro_regulador3 * reguladores_por_metro_cuadrado3 * area_del_lugar3;
	
	costo_total3 = costo_total_por_dos_years_bulbos3 + costo_total_reguladores3 + costo_total_tuberia3;
	
	costo_total_metro3 = costo_total3 / area_del_lugar3;
	
	system("cls");
	
	printf("\n CAMPESINO 4");
	
	printf("\n ");
	
	printf("\n INFORMACION DEL TERRENO: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la base total del lugar: ");
	scanf("%i", &base4);
	
	printf("\n   Ingrese la altura total del lugar: ");
	scanf("%i", &altura4);
	
	printf("\n   Ingrese el numero de diviciones que tiene en paralelogramos el terreno: ");
	scanf("%i", &n_paralelogramo4);
	
	printf("\n ");
	
	printf("\n INFORMACION DE LOS MATERIALES: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la cantidad de tuberia requerida por metro cuadrado: ");
	scanf("%i", &tuberia_por_metro_cuadrado4);
	
	printf("\n   Ingrese la cantidad de bulbos requeridos por metro cuadrado: ");
	scanf("%i", &bulbos_por_metro_cuadrado4);
	
	printf("\n   Ingrese la cantidad de reguladores por metro cuadrado: ");
	scanf("%i", &reguladores_por_metro_cuadrado4);
	
	printf("\n   Ingrese el costo por metro cuadrado de la tuberia: ");
	scanf("%i", &costo_por_metro_tuberia4);
	
	printf("\n   Ingrese el costo por pieza de los bulbos: ");
	scanf("%i", &costo_por_metro_bulbos4);
	
	printf("\n   Ingrese el costo por pieza de los reguladores: ");
	scanf("%i", &costo_por_metro_regulador4);
	
	printf("\n ");
	
	printf("\n TIEMPO DE USO Y CICLOS DE VENCIMIENTO PARA LOS MATERIALES");
	
	printf("\n ");
	
	printf("\n   Ingrese el tiempo en meses que desea mantener el sistema de riego: ");
	scanf("%i", &duracion_mantenimiento4);
	
	printf("\n   Ingrese el plazo en meses para la renovacion de los bulbos: ");
	scanf("%i", &plazo_de_renovacion4);
	
	printf("\n Ingrese su presupuesto para determinar si es factible o no la manutencion del sistema de riego: ");
	
	scanf("%i", &PE4);
	
	area_del_lugar4 = base4 * altura4;
	
	area_paralelogramo4 = area_del_lugar4 / n_paralelogramo4;
	
	cantidad_tuberia4 = area_del_lugar4 * tuberia_por_metro_cuadrado4;
	
	cantidad_bulbos4 = area_del_lugar4 * bulbos_por_metro_cuadrado4;
	
	cantidad_reguladores4 = area_del_lugar4 * reguladores_por_metro_cuadrado4;
	
	costo_total_tuberia4 = costo_por_metro_tuberia4 * tuberia_por_metro_cuadrado4 * area_del_lugar4;
	
	costo_total_bulbos4 = costo_por_metro_bulbos4 * bulbos_por_metro_cuadrado4 * area_del_lugar4;
	
	veces_que_se_renueva_b4 = duracion_mantenimiento4 / plazo_de_renovacion4;
	
	n_bulbos_d_m4 = bulbos_por_metro_cuadrado4 * area_del_lugar4 * veces_que_se_renueva_b4;
	
	costo_total_por_dos_years_bulbos4 = costo_total_bulbos4 * veces_que_se_renueva_b4;
	
	costo_total_reguladores4 = costo_por_metro_regulador4 * reguladores_por_metro_cuadrado4 * area_del_lugar4;
	
	costo_total4 = costo_total_por_dos_years_bulbos4 + costo_total_reguladores4 + costo_total_tuberia4;
	
	costo_total_metro = costo_total4 / area_del_lugar4;
	
	system("cls");
	
	printf("\n ");
	
	printf("\n CAMPESINO 5");
	
	printf("\n ");
	
	printf("\n INFORMACION DEL TERRENO: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la base total del lugar: ");
	scanf("%i", &base5);
	
	printf("\n   Ingrese la altura total del lugar: ");
	scanf("%i", &altura5);
	
	printf("\n   Ingrese el numero de diviciones que tiene en paralelogramos el terreno: ");
	scanf("%i", &n_paralelogramo5);
	
	printf("\n ");
	
	printf("\n INFORMACION DE LOS MATERIALES: ");
	
	printf("\n ");
	
	printf("\n   Ingrese la cantidad de tuberia requerida por metro cuadrado: ");
	scanf("%i", &tuberia_por_metro_cuadrado5);
	
	printf("\n   Ingrese la cantidad de bulbos requeridos por metro cuadrado: ");
	scanf("%i", &bulbos_por_metro_cuadrado5);
	
	printf("\n   Ingrese la cantidad de reguladores por metro cuadrado: ");
	scanf("%i", &reguladores_por_metro_cuadrado5);
	
	printf("\n   Ingrese el costo por metro cuadrado de la tuberia: ");
	scanf("%i", &costo_por_metro_tuberia5);
	
	printf("\n   Ingrese el costo por pieza de los bulbos: ");
	scanf("%i", &costo_por_metro_bulbos5);
	
	printf("\n   Ingrese el costo por pieza de los reguladores: ");
	scanf("%i", &costo_por_metro_regulador5);
	
	printf("\n ");
	
	printf("\n TIEMPO DE USO Y CICLOS DE VENCIMIENTO PARA LOS MATERIALES");
	
	printf("\n ");
	
	printf("\n   Ingrese el tiempo en meses que desea mantener el sistema de riego: ");
	scanf("%i", &duracion_mantenimiento5);
	
	printf("\n   Ingrese el plazo en meses para la renovacion de los bulbos: ");
	scanf("%i", &plazo_de_renovacion5);
	
	printf("\n Ingrese su presupuesto para determinar si es factible o no la manutencion del sistema de riego: ");
	
	scanf("%i", &PE5);
	
	area_del_lugar5 = base5 * altura5;
	
	area_paralelogramo5 = area_del_lugar5 / n_paralelogramo5;
	
	cantidad_tuberia5 = area_del_lugar5 * tuberia_por_metro_cuadrado5;
	
	cantidad_bulbos5 = area_del_lugar5 * bulbos_por_metro_cuadrado5;
	
	cantidad_reguladores5 = area_del_lugar5 * reguladores_por_metro_cuadrado5;
	
	costo_total_tuberia5 = costo_por_metro_tuberia5 * tuberia_por_metro_cuadrado5 * area_del_lugar5;
	
	costo_total_bulbos5 = costo_por_metro_bulbos5 * bulbos_por_metro_cuadrado5 * area_del_lugar5;
	
	veces_que_se_renueva_b5 = duracion_mantenimiento5 / plazo_de_renovacion5;
	
	n_bulbos_d_m5 = bulbos_por_metro_cuadrado5 * area_del_lugar5 * veces_que_se_renueva_b5;
	
	costo_total_por_dos_years_bulbos5 = costo_total_bulbos5 * veces_que_se_renueva_b5;
	
	costo_total_reguladores5 = costo_por_metro_regulador5 * reguladores_por_metro_cuadrado5 * area_del_lugar5;
	
	costo_total5 = costo_total_por_dos_years_bulbos5 + costo_total_reguladores5 + costo_total_tuberia5;
	
	costo_total_metro5 = costo_total5 / area_del_lugar5;
	
	do	{
		
		system("cls");
		
		printf("\n\n\n SE HAN ANALIZADO LOS DATOS DE LOS SIGUIENTES CAMPESINOS\n 1.- CAMPESINO 1\n 2.- CAMPESINO 2\n 3.- CAMPESINO 3\n 4.- CAMPESINO 4\n 5.- CAMPESINO 5\n 6.- SALIR DEL MENU\n\n SELECCIONE LA OPCION PARA CONSULTAR LA INFORMACION: ");
		scanf("%d", &selec1);
		
		switch(selec1)	{
			
			case 1:
			    
			    do	{
			    
					system("cls");
					
					printf("\n\n\n LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS:\n 1. INFORMACION DEL TERRENO\n 2. CANTIDADES DE MATERIAL REQUERIDOS\n 3. COSTO TOTAL POR CADA MATERIAL\n 4. COSTO TOTAL PARA TODO EL TERRENO\n 5. COSTO TOTAL POR CADA METRO CUADRADO\n 6. FACTIBILIDAD DE IMPLEMENTACON DEL SISTEMA DE RIEGO EN BASE A SU PRESUPUESTO\n 7. REGRESAR AL MENU ANTERIOR(insertar esta opcion 6 veces)\n\n INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ");
					scanf("%d", &selec2);
					
	    			switch(selec2)	{
					
	    			    
	    				case 1:
	    					
	    					printf("\n ");
	    					
	    					printf("\n \n INFORMACION DEL TERRENO");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   El area total del terreno es de: %i", area_del_lugar );
	    					
	    					printf("\n   El area por cada paralelogramo es de: %i", area_paralelogramo);
	    					
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    				break;
	    					
	    				case 2:
	    					
	    					printf("\n \n SE REQUIEREN LAS SIGUIENTES CANTIDADES DE MATERIAL: ");
	    					
	    					printf("\n ");
	    					
	    					printf("\n tuberias.");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   Se requieren %i", cantidad_bulbos);
	    					
	    					printf(" bulbos por cada: %i", plazo_de_renovacion );
	    					
	    					printf(" mes(es). ");
	    					
	    					printf("\n   Se requieren %i", n_bulbos_d_m);
	    					
	    					printf(" bulbos por cada: %i", duracion_mantenimiento );
	    					
	    					printf(" mes(es). ");
	    					
	    					printf("\n   Se requieren %i", cantidad_reguladores);
	    					
	    					printf(" reguladores.");
	    					
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    			    break;
	    					
	    				case 3:
	    					
	    					printf("\n \n COSTO TOTAL POR CADA MATERIAL: ");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   El costo total de la tuberia es de: %i", costo_total_tuberia );
	    					
	    					printf("\n   El costo de bulbos por cada %i", plazo_de_renovacion );
	    					
	    					printf(" mes(es) es de: %i", costo_total_bulbos );
	    					
	    					printf("\n   El costo de bulbos por cada %i", duracion_mantenimiento );
	    					
	    					printf(" mes(es) es de: %i", costo_total_por_dos_years_bulbos );
	    					
	    					printf("\n   El costo total de los reguladores es de: %i", costo_total_reguladores );
	    					
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    				break;
	    					
	    				case 4:
	    					
	    					printf("\n \n COSTO TOTAL PARA TODO EL TERRENO: ");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   El costo total del sistema de riego para %i", duracion_mantenimiento );
	    					
	    					printf(" mes(es) es de: %i", costo_total );
	    					
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    				break;
	    					
	    				case 5:
	    					
	    					printf("\n \n COSTO TOTAL POR CADA METRO CUADRADO: ");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   El costo total por metro cuadrado es de: %i", costo_total_metro );
	    					
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    				break;
	    				
	    				case 6: 
	    					
	    					if (PE<costo_total)	{
	    						
	    						printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: NO FACTIBLE" );
	    						
	    						printf("\n ");
	    						
	    						system("pause");
	    						
	    						break;
	    					}
	    						
	    					if (PE>costo_total)	{
	    						
	    						printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: FACTIBLE" );
	    						
	    						printf("\n ");
	    						
	    						system("pause");
	    						
	    						break;
	    					}
						
					    case 7:
					    break;
	    			}
				}while(selec2!=7);
			break;
			case 2:
				
				do	{
					
					system("cls");
					
					printf("\n\n\n LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS:\n 1. INFORMACION DEL TERRENO\n 2. CANTIDADES DE MATERIAL REQUERIDOS\n 3. COSTO TOTAL POR CADA MATERIAL\n 4. COSTO TOTAL PARA TODO EL TERRENO\n 5. COSTO TOTAL POR CADA METRO CUADRADO\n 6. FACTIBILIDAD DE IMPLEMENTACON DEL SISTEMA DE RIEGO EN BASE A SU PRESUPUESTO\n 7. REGRESAR AL MENU ANTERIOR(insertar esta opcion 6 veces)\n\n INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ");
					scanf("%d", &selec3);
					
	    			switch(selec3)	{
	    				
	    				case 1:
	    					
	    					printf("\n \n INFORMACION DEL TERRENO");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   El area total del terreno es de: %i", area_del_lugar );
	    					
	    					printf("\n   El area por cada paralelogramo es de: %i", area_paralelogramo);
	    					
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    					break;
	    					
	    				case 2:
	    					
	    					printf("\n \n SE REQUIEREN LAS SIGUIENTES CANTIDADES DE MATERIAL: ");
	    					
	    					printf("\n ");
	    					
	    					printf("\n tuberias.");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   Se requieren %i", cantidad_bulbos2);
	    					
	    					printf(" bulbos por cada: %i", plazo_de_renovacion2 );
	    					
	    					printf(" mes(es). ");
	    					
	    					printf("\n   Se requieren %i", n_bulbos_d_m2);
	    					
	    					printf(" bulbos por cada: %i", duracion_mantenimiento2 );
	    					
	    					printf(" mes(es). ");
	    					
	    					printf("\n   Se requieren %i", cantidad_reguladores2);
	    					
	    					printf(" reguladores.");
	    					
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    					break;
	    				
	    				case 3:
	    					
	    					printf("\n \n COSTO TOTAL POR CADA MATERIAL: ");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   El costo total de la tuberia es de: %i", costo_total_tuberia2 );
	    					
	    					printf("\n   El costo de bulbos por cada %i", plazo_de_renovacion2 );
	    					
	    					printf(" mes(es) es de: %i", costo_total_bulbos2 );
	    					
	    					printf("\n   El costo de bulbos por cada %i", duracion_mantenimiento2 );
	    					
	    					printf(" mes(es) es de: %i", costo_total_por_dos_years_bulbos2 );
	    					
	    					printf("\n   El costo total de los reguladores es de: %i", costo_total_reguladores );
	    					
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    					break;
	    					
	    				case 4:
	    					
	    					printf("\n \n COSTO TOTAL PARA TODO EL TERRENO: ");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   El costo total del sistema de riego para %i", duracion_mantenimiento2 );
	    					
	    					printf(" mes(es) es de: %i", costo_total2 );
	    					
	    					printf("\n ");
	    					
	    					system("pasue");
	    					
	    					break;
	    					
	    				case 5:
	    					
	    					printf("\n \n COSTO TOTAL POR CADA METRO CUADRADO: ");
	    					
	    					printf("\n ");
	    					
	    					printf("\n   El costo total por metro cuadrado es de: %i", costo_total_metro2 );
	    					
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    					break;
	    					
	    				case 6:
	    					
	    					if (PE2<costo_total2)	{
	    						
	    						printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: NO FACTIBLE" );
	    						
	    						printf("\n ");
	    						
	    						system("pause");
	    						
	    						break;
	    					}
	    					
	    					if (PE2>costo_total2)	{
	    					
	    						
	    						printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: FACTIBLE" );
	    						
	    						printf("\n ");
	    						
	    						system("pause");
	    						
	    						break;
	    					}
	    					
	    				case 7:
	    				break;
	    			}
				}while(selec3!=7);
			break;
			case 3:
				
				do	{
					
					system("cls");
					
					printf("\n\n\n LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS:\n 1. INFORMACION DEL TERRENO\n 2. CANTIDADES DE MATERIAL REQUERIDOS\n 3. COSTO TOTAL POR CADA MATERIAL\n 4. COSTO TOTAL PARA TODO EL TERRENO\n 5. COSTO TOTAL POR CADA METRO CUADRADO\n 6. FACTIBILIDAD DE IMPLEMENTACON DEL SISTEMA DE RIEGO EN BASE A SU PRESUPUESTO\n 7. REGRESAR AL MENU ANTERIOR(insertar esta opcion 6 veces)\n\n INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ");
					scanf("%d", &selec4);
					
					switch(selec4)	{
	    				
	    				case 1:
	    					
	    					printf("\n \n INFORMACION DEL TERRENO");
	    					
	    					printf("\n ");
	    				
	    					printf("\n   El area total del terreno es de: %i", area_del_lugar3 );
	    				
	    					printf("\n   El area por cada paralelogramo es de: %i", area_paralelogramo3);
	    				
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    					break;
	    					
	    				case 2:
	    					
	    					printf("\n \n SE REQUIEREN LAS SIGUIENTES CANTIDADES DE MATERIAL: ");
	    					
	    					printf("\n ");
	    				
	    					printf("\n tuberias.");
	    				
	    					printf("\n ");
	    				
	    					printf("\n   Se requieren %i", cantidad_bulbos3);
	    				
	    					printf(" bulbos por cada: %i", plazo_de_renovacion3 );
	    				
	    					printf(" mes(es). ");
	    				
	    					printf("\n   Se requieren %i", n_bulbos_d_m3);
	    				
	    					printf(" bulbos por cada: %i", duracion_mantenimiento3 );
	    				
	    					printf(" mes(es). ");
	    				
	    					printf("\n   Se requieren %i", cantidad_reguladores3);
	    				
	    					printf(" reguladores.");
	    				
	    					printf("\n ");
	    					
	    					system("pause");
	    					
	    					break;
	    					
	    				case 3:
	    					
	    					printf("\n \n COSTO TOTAL POR CADA MATERIAL: ");
	    				
	    					printf("\n ");
	    				
	    					printf("\n   El costo total de la tuberia es de: %i", costo_total_tuberia3 );
	    				
	    					printf("\n   El costo de bulbos por cada %i", plazo_de_renovacion3 );
	    				
	    					printf(" mes(es) es de: %i", costo_total_bulbos3 );
	    				
	    					printf("\n   El costo de bulbos por cada %i", duracion_mantenimiento3 );
	    				
	    					printf(" mes(es) es de: %i", costo_total_por_dos_years_bulbos3 );
	    				
	    					printf("\n   El costo total de los reguladores es de: %i", costo_total_reguladores3 );
	    				
	    					printf("\n ");
	    				
	    					system("pause");
	    					
	    					break;
	    					
	    				case 4:
	    					
	    					printf("\n \n COSTO TOTAL PARA TODO EL TERRENO: ");
	    				
	    					printf("\n ");
	    				
	    					printf("\n   El costo total del sistema de riego para %i", duracion_mantenimiento3 );
	    				
	    					printf(" mes(es) es de: %i", costo_total3 );
	    				
	    					printf("\n ");
	    				
	    					system("pause");
	    					
	    					break;
	    					
	    				case 5:
	    					
	    					printf("\n \n COSTO TOTAL POR CADA METRO CUADRADO: ");
	    				
	    					printf("\n ");
	    					
	    					printf("\n   El costo total por metro cuadrado es de: %i", costo_total_metro3 );
	    				
	    					printf("\n ");
	    				
	    					system("pause");
	    					
	    					break;
	    					
	    				case 6:
	    				
	    					if (PE3<costo_total3)	{
	    						
	    						printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: NO FACTIBLE" );
	    					
	    						printf("\n ");
	    						
	    						system("pause");
	    						
	    						break;
	    					}
	    				
	    					if (PE3>costo_total3)	{
	    						
	    						printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: FACTIBLE" );
	    					
	    						printf("\n ");
	    						
	    						system("pause");
	    						
	    						break;
	    					}
	    				
	    				case 7:
	    				break;
	    			}
		        }while(selec4!=7);
	    	break;   
	    	case 4:
	    	 	
	    		do	{
					
					system("cls");
					
					printf("\n\n\n LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS:\n 1. INFORMACION DEL TERRENO\n 2. CANTIDADES DE MATERIAL REQUERIDOS\n 3. COSTO TOTAL POR CADA MATERIAL\n 4. COSTO TOTAL PARA TODO EL TERRENO\n 5. COSTO TOTAL POR CADA METRO CUADRADO\n 6. FACTIBILIDAD DE IMPLEMENTACON DEL SISTEMA DE RIEGO EN BASE A SU PRESUPUESTO\n 7. REGRESAR AL MENU ANTERIOR(insertar esta opcion 6 veces)\n\n INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ");
					scanf("%d", &selec5);
					
	    			switch(selec5){
	    			
		    			case 1:
		    				
		    				printf("\n \n INFORMACION DEL TERRENO");
		    				
		    				printf("\n ");
		    				
		    				printf("\n   El area total del terreno es de: %i", area_del_lugar4 );
		    				
		    				printf("\n   El area por cada paralelogramo es de: %i", area_paralelogramo4);
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 2:
		    				
		    				printf("\n \n SE REQUIEREN LAS SIGUIENTES CANTIDADES DE MATERIAL: ");
		    				
		    				printf("\n ");
		    				
		    				printf("\n tuberias.");
		    				
		    				printf("\n ");
		    				
		    				printf("\n   Se requieren %i", cantidad_bulbos4);
		    				
		    				printf(" bulbos por cada: %i", plazo_de_renovacion4 );
		    				
		    				printf(" mes(es). ");
		    				
		    				printf("\n   Se requieren %i", n_bulbos_d_m4);
		    				
		    				printf(" bulbos por cada: %i", duracion_mantenimiento4 );
		    				
		    				printf(" mes(es). ");
		    				
		    				printf("\n   Se requieren %i", cantidad_reguladores4);
		    				
		    				printf(" reguladores.");
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 3:
		    				
		    				printf("\n \n COSTO TOTAL POR CADA MATERIAL: ");
		    				
		    				printf("\n ");
		    				
		    				printf("\n   El costo total de la tuberia es de: %i", costo_total_tuberia4 );
		    				
		    				printf("\n   El costo de bulbos por cada %i", plazo_de_renovacion4 );
		    				
		    				printf(" mes(es) es de: %i", costo_total_bulbos4 );
		    				
		    				printf("\n   El costo de bulbos por cada %i", duracion_mantenimiento4 );
		    				
		    				printf(" mes(es) es de: %i", costo_total_por_dos_years_bulbos4 );
		    				
		    				printf("\n   El costo total de los reguladores es de: %i", costo_total_reguladores4 );
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 4:
		    				
		    				printf("\n \n COSTO TOTAL PARA TODO EL TERRENO: ");
		    				
		    				printf("\n ");
		    				
		    				printf("\n   El costo total del sistema de riego para %i", duracion_mantenimiento4 );
		    				
		    				printf(" mes(es) es de: %i", costo_total4 );
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 5:
		    				
		    				printf("\n \n COSTO TOTAL POR CADA METRO CUADRADO: ");
		    				
		    				printf("\n ");
		    				
		    				printf("\n   El costo total por metro cuadrado es de: %i", costo_total_metro4 );
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 6: 
		    				
		    				if (PE4<costo_total4)	{
		    					
		    					printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: NO FACTIBLE" );
		    					
		    					printf("\n ");
		    					
		    					system("pause");
		    					
		    					break;
		    				}
		    				
		    				if (PE4>costo_total4)	{
		    					
		    					printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: FACTIBLE" );
		    					
		    					printf("\n ");
		    					
		    					system("pause");
		    					
		    					break;
		    				}
		    				
		    			case 7:
		    			break;
		    		}
	    		}while(selec5!=7);
	    	break;
	    	case 5:
	    		
				do	{
					
					system("cls");
					
					printf("\n\n\n LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS:\n 1. INFORMACION DEL TERRENO\n 2. CANTIDADES DE MATERIAL REQUERIDOS\n 3. COSTO TOTAL POR CADA MATERIAL\n 4. COSTO TOTAL PARA TODO EL TERRENO\n 5. COSTO TOTAL POR CADA METRO CUADRADO\n 6. FACTIBILIDAD DE IMPLEMENTACON DEL SISTEMA DE RIEGO EN BASE A SU PRESUPUESTO\n 7. REGRESAR AL MENU ANTERIOR(insertar esta opcion 6 veces)\n\n INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ");
					scanf("%d", &selec6);
					
		    		switch(selec6)	{
		    			
		    			case 1:
		    				
		    				printf("\n \n INFORMACION DEL TERRENO");
		    			
		    				printf("\n ");
		    				
		    				printf("\n   El area total del terreno es de: %i", area_del_lugar5 );
		    				
		    				printf("\n   El area por cada paralelogramo es de: %i", area_paralelogramo5);
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 2:
		    				
		    				printf("\n \n SE REQUIEREN LAS SIGUIENTES CANTIDADES DE MATERIAL: ");
		    				
		    				printf("\n ");
		    				
		    				printf("\n tuberias.");
		    				
		    				printf("\n ");
		    				
		    				printf("\n   Se requieren %i", cantidad_bulbos5);
		    				
		    				printf(" bulbos por cada: %i", plazo_de_renovacion5 );
		    				
		    				printf(" mes(es). ");
		    				
		    				printf("\n   Se requieren %i", n_bulbos_d_m5);
		    				
		    				printf(" bulbos por cada: %i", duracion_mantenimiento5 );
		    				
		    				printf(" mes(es). ");
		    				
		    				printf("\n   Se requieren %i", cantidad_reguladores5);
		    				
		    				printf(" reguladores.");
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 3:
		    				
		    				printf("\n \n COSTO TOTAL POR CADA MATERIAL: ");
		    				
		    				printf("\n ");
		    				
		    				printf("\n   El costo total de la tuberia es de: %i", costo_total_tuberia5 );
		    				
		    				printf("\n   El costo de bulbos por cada %i", plazo_de_renovacion5 );
		    				
		    				printf(" mes(es) es de: %i", costo_total_bulbos5 );
		    				
		    				printf("\n   El costo de bulbos por cada %i", duracion_mantenimiento5 );
		    				
		    				printf(" mes(es) es de: %i", costo_total_por_dos_years_bulbos5 );
		    				
		    				printf("\n   El costo total de los reguladores es de: %i", costo_total_reguladores5 );
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 4:
		    				
		    				printf("\n \n COSTO TOTAL PARA TODO EL TERRENO: ");
		    				
		    				printf("\n ");
		    				
		    				printf("\n   El costo total del sistema de riego para %i", duracion_mantenimiento5 );
		    				
		    				printf(" mes(es) es de: %i", costo_total5 );
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 5:
		    				
		    				printf("\n \n COSTO TOTAL POR CADA METRO CUADRADO: ");
		    				
		    				printf("\n ");
		    				
		    				printf("\n   El costo total por metro cuadrado es de: %i", costo_total_metro5 );
		    				
		    				printf("\n ");
		    				
		    				system("pause");
		    				
		    			break;
		    				
		    			case 6: 
		    				
		    				if (PE5<costo_total5)	{
		    					
		    					printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: NO FACTIBLE" );
		    					
		    					printf("\n ");
		    					
		    					system("pause");
		    					
		    					break;
		    				}
		    				
		    				if (PE5>costo_total5)	{
		    					
		    					printf("\n \n EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: FACTIBLE" );
		    					
		    					printf("\n ");
		    					
		    					system("pause");
		    					
		    					break;
		    				}
		    				
		    			case 7:
		    			break;
		    		}
			    }while(selec6!=7);
		    case 6:
	    	break;
	    }
	}while(selec1!=6);

printf("\n GRACIAS POR UTILIAR ESTE PROGRAMA :D\n");

printf("\n ");

system("pause");
return 0;
} 