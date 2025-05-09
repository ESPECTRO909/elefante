#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<unistd.h>

//libreia de svg
#include"libreria_svg.h"

//libreia de funciones
#include"libreria_funciones.h"

int main()
{

 srand(time(NULL));

   //declaracion de<vareables
   float x1[486];
   float y1[486];
   float x2[486];
   float y2[486];
   int renglones;
   int numCirculosAleatorios;

   scanf("%d",&renglones);
   scanf("%d",&numCirculosAleatorios);

     //escaneo de 486 lineas
     escaneoLineas(x1,y1,x2,y2,renglones);

     //zona de imagen 
     inicioSvg();

       //lineas
       contornoLineas(x1,y1,x2,y2,renglones);

       //circulos
       circulosInterseccion(x1,y1,x2,y2,renglones);

       // ruta
       rutaContorno(x1,y1,renglones);
 
       // círculos
        circulosContorno(numCirculosAleatorios);

    finSvg();


 return 0;
}
