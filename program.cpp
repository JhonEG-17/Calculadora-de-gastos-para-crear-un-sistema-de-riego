#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	int base, altura, PE, op, numero, cantidad_tuberia, n_bulbos_d_m, cantidad_bulbos, cantidad_reguladores, tuberia_por_metro_cuadrado, bulbos_por_metro_cuadrado, reguladores_por_metro_cuadrado, costo_por_metro_tuberia, costo_por_metro_blubos, costo_por_metro_reguladores, costo_total, costo_por_metro_cuadrado, costo_total_tuberia, n_paralelogramo, area_paralelogramo, area_del_lugar, costo_por_metro_bulbos, costo_total_bulbos, costo_total_reguladores, costo_por_metro_regulador, costo_total_metro, costo_total_por_dos_years_bulbos, plazo_de_renovacion, duracion_mantenimiento, veces_que_se_renueva_b;
	
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
	
	op = 1;
	
	while(op == 1){
		
		printf("\n LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS: ");
		
		printf("\n ");
		
		printf("\n 1. INFORMACION DEL TERRENO ");
		
		printf("\n 2. CANTIDADES DE MATERIAL REQUERIDOS");
		
		printf("\n 3. COSTO TOTAL POR CADA MATERIAL");
		
		printf("\n 4. COSTO TOTAL PARA TODO EL TERRENO");
		
		printf("\n 5. COSTO TOTAL POR CADA METRO CUADRADO");
		
		printf("\n 6. FACTIBILIDAD DE IMPLEMENTACON DEL SISTEMA DE RIEGO EN BASE A SU PRESUPUESTO");
		
		printf("\n ");
		
		printf("\n INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ");
		scanf("%i", &numero);
		
		switch(numero)
		{   case 1:printf("\n INFORMACION DEL TERRENO");
			printf("\n ");
			
			printf("\n   El area total del terreno es de: %i", area_del_lugar );
			
			printf("\n   El area por cada paralelogramo es de: %i", area_paralelogramo);
			
			printf("\n ");
			
			printf("\n QUIERES VOLVER AL MENU DE SELECCION DE RESULTADOS? ");
			
			printf("\n1. si\n2. No\n Escriba 1 para Si y 2 para No: ");
			
			scanf("%d",&op);                                                 
			
			printf("\n "); break;
			
			case 2: printf("\n SE REQUIEREN LAS SIGUIENTES CANTIDADES DE MATERIAL: ");
			
			printf("\n ");
			
			printf(" tuberias.");
			
			printf("\n   Se requieren %i", cantidad_bulbos);
			
			printf(" bulbos por cada: %i", plazo_de_renovacion );
			
			printf(" mes(es). ");
			
			printf("\n   Se requieren %i", n_bulbos_d_m);
			
			printf(" bulbos por cada: %i", duracion_mantenimiento );
			
			printf(" mes(es). ");
			
			printf("\n   Se requieren %i", cantidad_reguladores);
			
			printf(" reguladores.");
			
			printf("\n ");
			
			printf("\n QUIERES VOLVER AL MENU DE SELECCION DE RESULTADOS? ");
			
			printf("\n1. si\n2. No\n Escriba 1 para Si y 2 para No: ");
			
			scanf("%d",&op);
			
			printf("\n "); break;
			
			case 3: printf("\n COSTO TOTAL POR CADA MATERIAL: ");
			
			printf("\n ");
			
			printf("\n   El costo total de la tuberia es de: %i", costo_total_tuberia );
			
			printf("\n   El costo de bulbos por cada %i", plazo_de_renovacion );
			
			printf(" mes(es) es de: %i", costo_total_bulbos );
			
			printf("\n   El costo de bulbos por cada %i", duracion_mantenimiento );
			
			printf(" mes(es) es de: %i", costo_total_por_dos_years_bulbos );
			
			printf("\n   El costo total de los reguladores es de: %i", costo_total_reguladores );
			
			printf("\n ");
			
			printf("\n QUIERES VOLVER AL MENU DE SELECCION DE RESULTADOS? ");
			
			printf("\n1. si\n2. No\n Escriba 1 para Si y 2 para No: ");
			
			scanf("%d",&op);
			
			printf("\n "); break;
			
			case 4: printf("\n COSTO TOTAL PARA TODO EL TERRENO: ");
			
			printf("\n ");
			
			printf("\n   El costo total del sistema de riego para %i", duracion_mantenimiento );
			
			printf(" mes(es) es de: %i", costo_total );
			
			printf("\n ");
			
			printf("\n QUIERES VOLVER AL MENU DE SELECCION DE RESULTADOS? ");
			
			printf("\n1. si\n2. No\n Escriba 1 para Si y 2 para No: ");
			
			scanf("%d",&op);
			
			printf("\n "); break;
			
			case 5: printf("\n COSTO TOTAL POR CADA METRO CUADRADO: ");
			
			printf("\n ");
			
			printf("\n   El costo total por metro cuadrado es de: %i", costo_total_metro );
			
			printf("\n ");
			
			printf("\n QUIERES VOLVER AL MENU DE SELECCION DE RESULTADOS? ");
			
			printf("\n1. si\n2. No\n Escriba 1 para Si y 2 para No: ");
			
			scanf("%d",&op);
			
			printf("\n "); break;
			
			case 6: 
			
			if (PE<costo_total){
				printf("EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: FACTIBLE" );
				
				printf("\n ");
				
				printf("\n QUIERES VOLVER AL MENU DE SELECCION DE RESULTADOS? ");
				
				printf("\n1. si\n2. No\n Escriba 1 para Si y 2 para No: ");
				
				scanf("%d",&op);
				
				printf("\n "); break;
			}
			
			if (PE>costo_total){
				printf("EN BASE AL PRESUPUESTO OTORGADO SE A DETERMINADO QUE LA ELABOACION DE ESTE SISTEMA DE RIEGO ES: NO FACTIBLE" );
				
				printf("\n ");
				
				printf("\n QUIERES VOLVER AL MENU DE SELECCION DE RESULTADOS? ");
				
				printf("\n1. si\n2. No\n Escriba 1 para Si y 2 para No: ");
				
				scanf("%d",&op);
				
				printf("\n "); break;
			}
			
			default: printf("LA OPCION QUE SELLECCIONO NO EXISTE, POR FAVOR VERIFIQUE SU ELECCION.");
			
			printf("\n ");
			
			printf("\n QUIERES VOLVER AL MENU DE SELECCION DE RESULTADOS? ");
			
			printf("\n1. si\n2. No\n Escriba 1 para Si y 2 para No: ");
			
			scanf("%d",&op);
			
			printf("\n "); break;
		}
	}
	system("cls");
	printf("MUCHAS GRACIAS POR UTILIZAR ESTE PROGRAMA");
	return 0;
}