#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <cstring>
#include <windows.h>
#include<cmath>

using namespace std;
void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
}
char opc;
int x=10, y=10;
int main()
{
    int opcion, ele, elec, numero, p, i;
    float primero, segundo, resultado, resul, cantidad;
    do
    {
    	cout << "\t \t \t \t  Menu realizado por el estudiante de ingeneria en sistemas"<< endl;
    	cout << "\t \t \t \t \t  ***** Julio Alejandro Ponce Tobias *****" << endl;
        cout << "\n  1. Suma, Resta, Multiplicacion y division de dos numeros." << "\t   11. Numeros decimales a binario."<< endl;
        cout << "\n  2. Numero Par o Impar." << "\t \t \t \t \t   12. Numeros decimales a hexadecimales."<<endl;
        cout << "\n  3. Conversor." << "\t \t \t \t \t \t \t   13. Figuras geometricas." << endl;
        cout << "\n  4. Numero o palabra palindromo." << "\t \t \t \t   14. Mover un punto por la pantalla." << endl;
        cout << "\n  5. Numeros arabigos a romanos." << "\t \t \t \t   15. Simulacion de un Cajero." << endl; 
        cout << "\n  6. Numeros a letras."  << "\t \t \t \t \t \t   16. Calcular la hipotenusa." << endl;
        cout << "\n  7. Numeros decimales a letras." << "\t \t \t \t   17. Calcular signo zodiacal."<< endl;
        cout << "\n  8. Tabla de un numero."<< "\t \t \t \t \t   18. Serie fibonacci." << endl;
        cout << "\n  9. Tablas de multiplicar del 1 al 10." << "\t \t \t \t   19. Numeros amigos." << endl;
        cout << "\n  10. Multiplicacion grafica." << "\t \t \t \t \t   20. Promedio de 3 notas." << endl;
        cout << "\n \t \t \t \t \t \t \t \t \b   21. Salir." << endl;
        cout << "\n\n   Introduzca opcion (): " << endl;

        cin >> opcion;

        switch ( opcion )
        {
            case 1: 
			cout << "Que operacion desea realizar Suma [1] Resta [2] Multiplicacion [3] Division [4]." << endl;
			cin >> ele;
			cout << "Ingrese el primer numero: ";
			cin >> primero;
			cout << "Ingrese el segundo numero: ";
			cin >> segundo;
			if (ele==1){
			 resultado = primero+segundo;}
			if (ele==2){
			resultado = primero-segundo;}
			if (ele==3){
			resultado = primero*segundo;}
			if (ele==4){
			resultado = primero/segundo;}
			cout << resultado;
			break;
			
			case 2: int numero;
    		cout << " Escribe un numero :" << endl;
    		cin >> numero;
    			if(numero % 2 == 0){
    				cout << "Es par" << endl;
    				}else{
    				cout << "Es impar" << endl;
					}
                    break;
            case 3 :
            	cout << "Que conversion desea realizar km a mi [1] mi a km [2] " << endl;
            	cout << " m a pul [3] pul a m [4] lb a kg [5] kg a lb [6]  " << endl;
				cin >> elec;
				switch(elec){
				case 1 :
					cout << " Introduce la cantidad de km: " << endl;
					cin>>cantidad;
					resul=cantidad*0.6214;
					cout << cantidad << "km equivale a " << resul << " millas" << endl;
					break;
				case 2 :
				 cout << " Introduce la cantidad de millas: " << endl;
					cin>>cantidad;
					resul=cantidad*1.6093;
					cout << cantidad<< " millas equivale a " <<  resul <<" km" << endl;
					break;
				case 3 :
				cout << " Introduce la cantidad de metros: " << endl;
					cin>>cantidad;
					resul=cantidad*39.3701;
					cout << cantidad<< " m equivale a " <<  resul <<" pul" << endl;
					break;
			case 4 :
				cout << " Introduce la cantidad de pulgadas: " << endl;
				cin>>cantidad;
				resul=cantidad*0.0254 ;
				cout << cantidad<< " pul equivale a " <<  resul << " m" << endl;
				break;
			case 5:
				cout << " Introduce la cantidad de libras: " << endl;
					cin>>cantidad;
					resul=cantidad*2.20462;
					cout << cantidad<< " lb equivale a " <<  resul << " kg" << endl;
					break;
				case 6:
				 	cout << " Introduce la cantidad de kilogramos: " << endl;
					cin>>cantidad;
					resul=cantidad* 0.453592;
					cout << cantidad<< " kg equivale a "  <<  resul << " lb" << endl;
					break;
				}
            	break;
            case 4 :
    			char cadena[100], copia[100];
    			cout<<"Ingrese palabra o numero: "<<endl;
    			cin>>cadena;
    			
    			for(int i=(strlen(cadena)-1);i>=0;i--){
    				copia[strlen(cadena)-1-i]=cadena[i];
				}
				copia[strlen(cadena)]='\0';
				if(strcmp(cadena,copia)==0){
					cout << "Es palindroma";
				}else{
					cout << "no es palindroma";
				}
    			break;
    		case 5 :
				int numeros,unidades,decenas,centenas,millares;
				cout << "\nIngresa un numero entre [1-3999] para convertirlo a romano: ";
				cin >> numero;
		
				unidades = numero%10; numero /= 10;
				decenas = numero%10; numero /= 10;
				centenas = numero%10; numero /= 10;
				millares = numero%10; numero /= 10;
		
				switch(millares){
				case 1: cout << "M"; break;
				case 2: cout << "MM"; break;
				case 3: cout << "MMM"; break;}
		
				switch(centenas){
				case 1: cout << "C"; break;
				case 2: cout << "CC"; break;
				case 3: cout << "CCC"; break;
				case 4: cout << "CD"; break;
				case 5: cout << "D"; break;
				case 6: cout << "DC"; break;
				case 7: cout << "DCC"; break;
				case 8: cout << "DCCC"; break;
				case 9: cout << "CM"; break;}
		
				switch(decenas){	
				case 1: cout << "X"; break;
				case 2: cout << "XX"; break;
				case 3: cout << "XXX"; break;
				case 4: cout << "XL"; break;
				case 5: cout << "L"; break;
				case 6: cout << "LX"; break;
				case 7: cout << "LXX"; break;
				case 8: cout << "LXXX"; break;
				case 9: cout << "XC"; break;}
		
				switch(unidades){
				case 1: cout << "I"; break;
				case 2: cout << "II"; break;
				case 3: cout << "III"; break;
				case 4: cout << "IV"; break;
				case 5: cout << "V"; break;
				case 6: cout << "VI"; break;
				case 7: cout << "VII"; break;
				case 8: cout << "VIII"; break;
				case 9: cout << "IX"; break;}
    			break;
    		case 6:
    			int x;
   				 cout<<"ingrese un numero"<<endl;
  				  cin>>x;
				if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
				else{
        		if(x>=900)   {cout<<"Novecientos " ;x=x-900;}
      			else if(x>=800)   {cout<<"Ochocientos " ;x=x-800;}
       			else if(x>=700)   {cout<<"Setecientos " ;x=x-700;}
       			else if(x>=600)   {cout<<"Seiscientos " ;x=x-600;}
       			else if(x>=500)   {cout<<"Quinientos "  ;x=x-500;}
       			else if(x>=400)   {cout<<"Cuatrocientos "   ;x=x-400;}
       			else if(x>=300)   {cout<<"Trescientos " ;x=x-300;}
       			else if(x>=200)   {cout<<"Doscientos "  ;x=x-200;}
      			else if(x>100)    {cout<<"Ciento "  ;x=x-100;}
       			else if(x==100)  {cout<<"Cien"     ;x=x-100;}
        		if(x>90) {cout<<"Noventa y "   ;x=x-90; }
            	if(x==90)   {cout<<"Noventa"  ;x=x-90; }  
           		if(x>80) {cout<<"Ochenta y "   ;x=x-80; }
            	if(x==80)   {cout<<"Ochenta"  ;x=x-80; }
            	if(x>70) {cout<<"Setenta y "   ;x=x-70; }
            	if(x==70)   {cout<<"Setenta"  ;x=x-70; }
            	if(x>60) {cout<<"Sesenta y "   ;x=x-60; }
            	if(x==60)   {cout<<"Sesenta"  ;x=x-60; }
            	if(x>50) {cout<<"Cincuenta y " ;x=x-50; }
            	if(x==50)   {cout<<"Cincuenta"    ;x=x-50; }
            	if(x>40) {cout<<"Cuarenta y "  ;x=x-40; }
            	if(x==40)   {cout<<"Cuarenta" ;x=x-40; }
            	if(x>30) {cout<<"Treinta y "   ;x=x-30; }
            	if(x==30)   {cout<<"Treinta"  ;x=x-30; }
            	if(x>20) {cout<<"Veinte y"       ;x=x-20; }
            	if(x==20)   {cout<<"Veinte"       ;x=x-20; }
        		if(x>=16)    {cout<<"Dieci"        ;x=x-10; }
       			else if(x==15)   {cout<<"Quince"       ;x=x-15; }
       			else if(x==14)   {cout<<"Catorce"  ;x=x-14; }
       			else if(x==13)   {cout<<"Trece"        ;x=x-13; } 
       			else if(x==12)   {cout<<"Doce"     ;x=x-12; }
       			else if(x==11)   {cout<<"Once"     ;x=x-11; }
       			else if(x==10)   {cout<<"Diez"     ;x=x-10; }      
        		if(x==9)    {cout<<"Nueve"        ;x=x-9;  }
        		if(x==8)    {cout<<"Ocho"     ;x=x-8;  }
        		if(x==7)    {cout<<"Siete"        ;x=x-7;  }
            	if(x==6)    {cout<<"Seis"     ;x=x-6;  }
       			else if(x==5)    {cout<<"Cinco"        ;x=x-5;  }
       			else if(x==4)    {cout<<"Cuatro"       ;x=x-4;  }
       			else if(x==3)    {cout<<"Tres"     ;x=x-3;  }
       			else if(x==2)    {cout<<"Dos"      ;x=x-2;  }
       			else if(x==1)    {cout<<"Uno"      ;x=x-1;  }
       			}
    			break;
    		case 7:
    		double pol;
			 cout<<"ingrese un numero"<<endl;
			  cin>>pol;
			  int parte_entera;
				double parte_decimal;
				parte_entera = pol/1;
				parte_decimal = pol-parte_entera;
        		if(parte_entera>=900)   {cout<<"Novecientos " ;parte_entera=parte_entera-900; parte_decimal;}
      			else if(parte_entera>=800)   {cout<<"Ochocientos " ;parte_entera=parte_entera-800;parte_decimal;}
       			else if(parte_entera>=700)   {cout<<"Setecientos " ;parte_entera=parte_entera-700;parte_decimal;}
       			else if(parte_entera>=600)   {cout<<"Seiscientos " ;parte_entera=parte_entera-600;parte_decimal;}
       			else if(parte_entera>=500)   {cout<<"Quinientos "  ;parte_entera=parte_entera-500;parte_decimal;}
       			else if(parte_entera>=400)   {cout<<"Cuatrocientos "   ;parte_entera=parte_entera-400;parte_decimal;}
       			else if(parte_entera>=300)   {cout<<"Trescientos " ;parte_entera=parte_entera-300;parte_decimal;}
       			else if(parte_entera>=200)   {cout<<"Doscientos "  ;parte_entera=parte_entera-200;parte_decimal;}
      			else if(parte_entera>100)    {cout<<"Ciento "  ;parte_entera=parte_entera-100;parte_decimal;}
       			else if(parte_entera==100)  {cout<<"Cien"     ;parte_entera=parte_entera-100;parte_decimal;}
        		if(parte_entera>90) {cout<<"Noventa y "   ;parte_entera=parte_entera-90; parte_decimal;}
            	if(parte_entera==90)   {cout<<"Noventa"  ;parte_entera=parte_entera-90; parte_decimal;}  
           		if(parte_entera>80) {cout<<"Ochenta y "   ;parte_entera=parte_entera-80; parte_decimal;}
            	if(parte_entera==80)   {cout<<"Ochenta"  ;parte_entera=parte_entera-80; parte_decimal; }
            	if(parte_entera>70) {cout<<"Setenta y "   ;parte_entera=parte_entera-70; parte_decimal;}
            	if(parte_entera==70)   {cout<<"Setenta"  ;parte_entera=parte_entera-70; parte_decimal;}
            	if(parte_entera>60) {cout<<"Sesenta y "   ;parte_entera=parte_entera-60; parte_decimal;}
            	if(parte_entera==60)   {cout<<"Sesenta"  ;parte_entera=parte_entera-60; parte_decimal;}
            	if(parte_entera>50) {cout<<"Cincuenta y " ;parte_entera=parte_entera-50; parte_decimal;}
            	if(parte_entera==50)   {cout<<"Cincuenta"    ;parte_entera=parte_entera-50; parte_decimal;}
            	if(parte_entera>40) {cout<<"Cuarenta y "  ;parte_entera=parte_entera-40; parte_decimal;}
            	if(parte_entera==40)   {cout<<"Cuarenta" ;parte_entera=parte_entera-40; parte_decimal;}
            	if(parte_entera>30) {cout<<"Treinta y "   ;parte_entera=parte_entera-30; parte_decimal;}
            	if(parte_entera==30)   {cout<<"Treinta"  ;parte_entera=parte_entera-30; parte_decimal;}
            	if(parte_entera>20) {cout<<"Veinte y"       ;parte_entera=parte_entera-20; parte_decimal;}
            	if(parte_entera==20)   {cout<<"Veinte"       ;parte_entera=parte_entera-20; parte_decimal;}
        		if(parte_entera>=16)    {cout<<"Dieci"        ;parte_entera=parte_entera-10; parte_decimal;}
       			else if(parte_entera==15)   {cout<<"Quince"       ;parte_entera=parte_entera-15; parte_decimal;}
       			else if(parte_entera==14)   {cout<<"Catorce"  ;parte_entera=parte_entera-14; parte_decimal;}
       			else if(parte_entera==13)   {cout<<"Trece"        ;parte_entera=parte_entera-13; parte_decimal;} 
       			else if(parte_entera==12)   {cout<<"Doce"     ;parte_entera=parte_entera-12; parte_decimal;}
       			else if(parte_entera==11)   {cout<<"Once"     ;parte_entera=parte_entera-11; parte_decimal;}
       			else if(parte_entera==10)   {cout<<"Diez "    ;parte_entera=parte_entera-10;parte_decimal;}      
        		if(parte_entera==9)    {cout<<"Nueve"        ;parte_entera=parte_entera-9; parte_decimal; }
        		if(parte_entera==8)    {cout<<"Ocho"     ;parte_entera=parte_entera-8;  parte_decimal;}
        		if(parte_entera==7)    {cout<<"Siete"        ;parte_entera=parte_entera-7;  parte_decimal;}
            	if(parte_entera==6)    {cout<<"Seis"     ;parte_entera=parte_entera-6;  parte_decimal;}
       			else if(parte_entera==5)    {cout<<"Cinco"        ;parte_entera=parte_entera-5; parte_decimal; }
       			else if(parte_entera==4)    {cout<<"Cuatro"       ;parte_entera=parte_entera-4;  parte_decimal;}
       			else if(parte_entera==3)    {cout<<"Tres"     ;parte_entera=parte_entera-3; parte_decimal; }
       			else if(parte_entera==2)    {cout<<"Dos"      ;parte_entera=parte_entera-2; parte_decimal; }
       			else if(parte_entera==1)    {cout<<"Uno"      ;parte_entera=parte_entera-1; parte_decimal; }
       			
    
        		if(parte_decimal>.90) {cout<<" Punto Noventa y "   ;parte_decimal=parte_decimal-.90; }
            	if(parte_decimal==.90)   {cout<<" punto" <<" Noventa"  ;parte_decimal=parte_decimal-.90; }  
           		if(parte_decimal>.80) {cout<<" punto" <<" Ochenta y "   ;parte_decimal=parte_decimal-.80; }
            	if(parte_decimal==80)   {cout<<" punto" <<" Ochenta"  ;parte_decimal=parte_decimal-.80; }
            	if(parte_decimal>.70) {cout<<" punto" <<" Setenta y "   ;parte_decimal=parte_decimal-.70; }
            	if(parte_decimal==.70)   {cout<<" punto" <<" Setenta"  ;parte_decimal=parte_decimal-.70; }
            	if(parte_decimal>.60) {cout<<" punto" <<" Sesenta y "   ;parte_decimal=parte_decimal-.60; }
            	if(parte_decimal==.60)   {cout<<" punto" <<" Sesenta"  ;parte_decimal=parte_decimal-.60; }
            	if(parte_decimal>.50) {cout<<" punto" <<" Cincuenta y " ;parte_decimal=parte_decimal-.50; }
            	if(parte_decimal==.50)   {cout <<" punto" <<" Cincuenta"    ;parte_decimal=parte_decimal-.50; }
            	if(parte_decimal>.40) {cout<<" punto" <<" Cuarenta y "  ;parte_decimal=parte_decimal-.40; }
            	if(parte_decimal==.40)   {cout<<" punto" <<" Cuarenta" ;parte_decimal=parte_decimal-.40; }
            	if(parte_decimal>.30) {cout<<" punto" <<" Treinta y "   ;parte_decimal=parte_decimal-.30; }
            	if(parte_decimal==.30)   {cout<<" punto" <<" Treinta"  ;parte_decimal=parte_decimal-.30; }
            	if(parte_decimal>.20) {cout<<" punto" <<" Veinte y"       ;parte_decimal=parte_decimal-.20; }
            	if(parte_decimal==.20)   {cout<<" punto" <<" Veinte"       ;parte_decimal=parte_decimal-.20; }
        		if(parte_decimal>=.16)    {cout<<" punto" <<" Dieci"        ;parte_decimal=parte_decimal-.10; }
       			else if(parte_decimal==.15)   {cout<<" punto" <<" Quince"  ;parte_decimal=parte_decimal-.15 ; }
       			else if(parte_decimal==.14)   {cout<<" punto" <<" Catorce"  ;parte_decimal=parte_decimal-.14; }
       			else if(parte_decimal==.13)   {cout<<" punto" <<" Trece"        ;parte_decimal=parte_decimal-.13; } 
       			else if(parte_decimal==.12)   {cout<<" punto" <<" doce"     ;parte_decimal=parte_decimal-.12; }
       			else if(parte_decimal==.11)   {cout<<" punto" <<" Once"     ;parte_decimal=parte_decimal-.11; }
       			else if(parte_decimal==.10)   {cout<<" punto" <<" Diez"     ;parte_decimal=parte_decimal-.10; }      
        		if(parte_decimal==.9)    {cout<<" punto" <<" Nueve"        ;parte_decimal=parte_decimal-.9;  }
        		if(parte_decimal==.8)    {cout<<" punto" <<" Ocho"     ;parte_decimal=parte_decimal-.8;  }
        		if(parte_decimal==.7)    {cout<<" punto" <<" Siete"        ;parte_decimal=parte_decimal-.7;  }
            	if(parte_decimal==.6)    {cout<<" punto" <<" Seis"     ;parte_decimal=parte_decimal-.6;  }
       			else if(parte_decimal==.5)    {cout<<" punto" <<" Cinco"        ;parte_decimal=parte_decimal-.5;  }
       			else if(parte_decimal==.4)    {cout<< " punto" <<" Cuatro"       ;parte_decimal=parte_decimal-.4;  }
       			else if(parte_decimal==.3)    {cout<<" punto" <<" Tres"     ;parte_decimal=parte_decimal-.3;  }
       			else if(parte_decimal==.2)    {cout<<" punto" <<" Dos"      ;parte_decimal=parte_decimal-.2;  }
       			else if(parte_decimal==.1)    {cout<<" punto" <<" Uno"      ;parte_decimal=parte_decimal-.1; }
       			if(parte_decimal==.9)    {cout<<" Nueve"        ;parte_decimal=parte_decimal-.9;  }
        		if(parte_decimal==.8)    {cout<<" punto" <<" Ocho"     ;parte_decimal=parte_decimal-.8;  }
        		if(parte_decimal==.7)    {cout<<" punto" <<" Siete"        ;parte_decimal=parte_decimal-.7;  }
            	if(parte_decimal==.6)    {cout<<" punto" <<" Seis"     ;parte_decimal=parte_decimal-.6;  }
       			else if(parte_decimal==.5)    {cout<<" punto" <<" Cinco"        ;parte_decimal=parte_decimal-.5;  }
       			else if(parte_decimal==.4)    {cout<< " punto" <<" Cuatro"       ;parte_decimal=parte_decimal-.4;  }
       			else if(parte_decimal==.3)    {cout<<" punto" <<" Tres"     ;parte_decimal=parte_decimal-.3;  }
       			else if(parte_decimal==.2)    {cout<<" punto" <<" Dos"      ;parte_decimal=parte_decimal-.2;  }
       			else if(parte_decimal==.1)    {cout<<" punto" <<" Uno"      ;parte_decimal=parte_decimal-.1; }
					break;
			case 8 :
				int num;
				cout <<"ingrese un numero entero positivo: " << endl;
				cin>>num;
				for(int i=1;i<=10;i++){
					cout << num <<" x " <<i<<" = " <<num*i<<endl;
				}
				break;
			case 9 :
				for(int i = 1; i <=10; i++){
					cout <<"_________________"<<endl;
					cout <<"La tabla del " << i<< endl;
					for(int m =0; m <= 10; m++){
						cout << i << " x " << m << " = " << i * m << endl;
					}
				}
				break;
			case 10:
				float n1, n2, n3, n4, resul;{
				cout<<"\n \t"<<"Escribe el primer Valor para multiplicar"<<endl;
				cout<<"\n \t";
				cin>>n1;
				cout<<"\n \t"<<"Escribe el segundo valor para multiplicar"<<endl;
				cout<<"\n \t";
				cin>>n2;
				cout<<"\n"<<endl;;
				resul=n1*n2;
				cout<<"\n \t"<<"     "<<n1<<endl;
				cout<<"\n \t"<<"  x "<<" "<<n2<<endl;
				cout<<"\t---------"<<endl;
				cout<<"\n \t"<<"     "<<resul<<endl;
				};
				return 0;
				break;
			case 11:
				int decimal;
			    short binario[8];
			    cout << "Teclea el valor en decimal a convertir:" << endl;
			    cin >> decimal;
			    for (int i = 0; i < 8; i++)
			    {
			    binario[i] = decimal % 2;
			    decimal /= 2;
			    }
			    cout << "El numero en binario es:" << endl;
			    for (int i = 7; i >= 0; i--)
			    {
			    cout << binario[i];
			    }
				break;
			case 12:
				int o, hexadecimal[999];
				printf("Ingresa un numero en sistema decimal: ");
				scanf("%i",&o);
				    
			     while (o!=0)
			     {
			           hexadecimal[i] = o%16; 
			           o = o /16; 
			           i++; 
			     }
			    
				i--;
				printf("Resultado en Hexadecimal: ");
				 
			     while (i>=0) 
			     {
			           switch(hexadecimal[i]) 
			           {
			                             case 10:
			                                  printf("A");
			                             break;
			                             case 11:
			                                  printf("B");
			                             break;
			                             case 12:
			                                  printf("C");
			                             break;
			                             case 13:
			                                  printf("D");
			                             break;
			                             case 14:
			                                  printf("E");
			                             break;
			                             case 15:
			                                  printf("F");
			                             break;
			                             default:
			                                   printf("%i",hexadecimal[i]); 
			                             break;
			           } 
			           i--;
			     }
			     printf("\n");
				return 0;
				break;
			case 13:
				int elec1, i;
				int n;
				cout << "Que Figura desea realizar cuadrado [1] triangulo [2]" << endl;
				cin >> elec1;
				switch(elec1){
					case 1:
					printf("Especifica el tamanio del cuadrado: ");
					scanf("%i",&n);
					printf("\n");
					  	for(int r = 1; r <= n; r++)
					  	{
					  	  for(int l = 1 ; l <=n ; l++)
							{
								printf("*");
						    }
						    printf("\n");
						}return 0;
						break;
					case 2:
						int k;
						printf("Ingresa el tamanio del triangulo: ");
						scanf("%i",&k);
						printf("\n");
						int ast=1, esp=k-1;
						  	for(int ren=1; ren<=k; ren++) 
							{
							  for(int i=1; i<=esp ; i++) 
								printf(" ");
							  for(int i=1; i<=ast ; i++)
					        	printf("*");
								printf("\n");
								ast= ast+2; 
								esp= esp-1; 
							}return 0;
						break;
				}
				break;
		case 14:
			while(opc !='z'){
				system("cls");
				gotoxy(x,y);cout<<"*";
				opc=getch();
				switch(opc)
				{
					case'w': y--;break;
					case's': y++;break;
					case'a': x--;break;
					case'd': x++;break;
				}
			}
			return 0;
			break;
		case 15:
			 int Saly;
			 int aja, lol;
			 Saly=10000;
			 do{
			  cout<<"Cajero automatico"<<endl;
			  cout<<"1- Consultar saldo inicial"<<endl;
			  cout<<"2- Retirar efectivo"<<endl;
			  cout<<"3- SALIR"<<endl;
			  cin>>aja;
			  switch (aja){
			   case 1:
			    cout<<"Su saldo inicial es de: "<<Saly<<endl;
			    break;
			   case 2:
			    cout<<"Ingrese monto a retirar" <<endl;
			    cin>>lol;
			    cout<<"Su nuevo saldo es de: "<<Saly-lol<<endl;
			    break;
			  }  
			 }
			 while (aja!=3);
			break;
		case 16:
			int uwu,nashe;
				 float lola;
				 {
				 
				 cout<<"digite cateto opuesto: ";
				 cin>>uwu;
				 
				 cout<<"digite cateto adyacente: ";
				 cin>>nashe;
				 
				 lola=sqrt (pow(uwu,2)+pow(nashe,2));
				 
				 cout<<"la hipotenusa es: "<<lola;
				 
				 cin.get();
				};
			break;
		case 17:
			  int mes, dia;
		      cout<<"\t\t\tSIGNO ZODIACAL"<<endl;
		      cout<<"(1)Enero  \t(2)Febrero  \t(3)Marzo  \t(4)Abril"<<endl;
		      cout<<"(5)Mayo  \t(6)Junio     \t(7)Julio  \t(8)Agosto"<<endl;
		      cout<<"(9)Septiembre  \t(10)Octubre  \t(11)Noviembre  \t(12)Diciembre"<<endl<<endl;
		      cout<<"Ingrese la fecha de su cumple"<<char(164)<<"o (dia y mes)"<<endl;
		      cin>>dia>>mes;
		      switch(mes)
		      {
		      case 1:if(dia<21) cout<<"Capricornio"<<endl;
		                        else      cout<<"Acuario"<<endl;break;
		 
		     case 2:if(dia<21) cout<<"Acuario"<<endl;
		                        else      cout<<"Piscis"<<endl;break;
		 
		       case 3:if(dia<21) cout<<"Piscis"<<endl;
		                        else      cout<<"Aries"<<endl;break;
		 
		       case 4:if(dia<21) cout<<"Aries"<<endl;
		                        else      cout<<"Tauro"<<endl;break;
		 
		       case 5:if(dia<22) cout<<"Tauro"<<endl;
		                        else      cout<<"Geminis"<<endl;break;
		 
		       case 6:if(dia<22) cout<<"Geminis"<<endl;
		                        else      cout<<"Cancer"<<endl;break;
		 
		       case 7:if(dia<23) cout<<"Cancer"<<endl;
		                        else      cout<<"Leo"<<endl;break;
		 
		      case 8:if(dia<23) cout<<"Leo"<<endl;
		                        else      cout<<"Virgo"<<endl;break;
		 
			 case 9:if(dia<24) cout<<"Virgo"<<endl;
		                        else      cout<<"Libra"<<endl;break;
		 
			   case 10:if(dia<25)cout<<"Libra"<<endl;
			                        else      cout<<"Escorpio"<<endl;break;
			 
			  case 11:if(dia<23)cout<<"Escorpio"<<endl;
			                        else      cout<<"Sagitario"<<endl;break;
			 
			   case 12:if(dia<22)cout<<"Sagitario"<<endl;
			                        else      cout<<"Capricornio"<<endl;break;
			 
				default:cout<<"INGRESE UNA FECHA VALIDA"<<endl;
		      }
			  break;
		case 18:
			int nur,fibo1,fibo2;
		   do
		   {
		         cout << "Introduce numero mayor que 1: ";
		         cin >> nur;
		   }while(nur<=1);
		   cout << endl;
		    cout << "Los " << nur << " primeros numeros de la serie de Fibonacci son:" << endl;
		   fibo1=1;
		   fibo2=1;
		   cout << fibo1 << " ";
		   for(i=2;i<=nur;i++)
		   {
		       cout << fibo2 << " ";
		       fibo2 = fibo1 + fibo2;
		       fibo1 = fibo2 - fibo1;
		   }
		   cout << endl << endl;
			break;
		case 19:
			int awa,beb,cod,cad,num1,num2;
			cout<<" Ingrese el primer numero:";
			cin>>num1;
			cout<<" Ingrese el segundo numero:";
			cin>>num2;
			for(awa=1;awa<=num1/2;awa++){
			if (num1 % awa==0){
			cod=cod+awa;
			}
			}
			for(beb=1;beb<=num2/2;beb++){
			if (num2%beb==0){
			cad=cad+beb;
			}
			}
			if (cod==num2){
			cout<<" Los numeros son amigos"<<endl;
			}
			else {
			cout<<" Los numeros no son amigos"<<endl;
			}
			break;
		case 20:
			double not1, not2, not3, prom ; 
		    cout << "Ingrese Nota 01 : " << endl;
		    cin>>not1;
		    cout << "Ingrese Nota 02 : " << endl;
		    cin>>not2;
		    cout << "Ingrese Nota 03 : " << endl;
		    cin>>not3;
		    prom = (not1 + not2 + not3)/3;
		    cout <<"EL PROMEDIO ES : "<< prom<<endl;
			break;
    	}
  	} while ( opcion != 21 );
    return 0;
}
