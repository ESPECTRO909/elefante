void escaneoLineas(float x1[], float y1[], float x2[], float y2[], int renglones);
float promedio(int arreglo[], int cuantos);


//cuerpo de la libreria

void escaneoLineas(float x1[], float y1[], float x2[], float y2[], int renglones)
{
    for(int escaneo=0; escaneo<renglones; escaneo++)
    {
        scanf("%f %f %f %f",&x1[escaneo],&y1[escaneo],&x2[escaneo],&y2[escaneo]); 
    }
}

float promedio(int arreglo[], int cuantos)//funcion para calcular el promedio y despues para dibujar el centro de masa //falta editar para que funcione 
 {
    int suma=0;
    for(int i=0; i<cuantos; i++)
    {
        suma =suma + arreglo[i];
    }
 return (float) suma / cuantos;
 }
