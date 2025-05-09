void inicioSvg(void);
void finSvg(void);
void contornoLineas(float x1[], float y1[], float x2[], float y2[], int renglones);
void circulosInterseccion (float x1[], float y1[],float x2[], float y2[], int renglones);
void circulosContorno (int numCirculosAleatorios);
void rutaContorno (float x1[], float y1[], int renglones);
//cuerpo de la libreria
void inicioSvg(void)
{
    printf("<svg width=\"1000\" height=\"1000\" xmlns=\"http://www.w3.org/2000/svg\">\n");
}

void finSvg(void)
{
    printf("</svg>\n");
}

void contornoLineas(float x1[], float y1[], float x2[], float y2[], int renglones)
{
    for(int linea=0; linea<renglones; linea++) 
    {
        printf("<line x1=\"%f\" y1=\"%f\" x2=\"%f\" y2=\"%f\" stroke=\"black\" stroke-width=\"3\" />\n",x1[linea],y1[linea],x2[linea],y2[linea]);
    }
} 

void circulosInterseccion (float x1[], float y1[],float x2[], float y2[], int renglones)
{
    for(int circulos=0; circulos<renglones; circulos++)
    {
        printf("<circle cx=\"%f\" cy=\"%f\" r=\"5\" fill=\"rgb(%d,%d,%d)\" />\n",x1[circulos],y1[circulos],rand()%256,rand()%256,rand()%256);
        printf("<circle>\n");
        printf("<circle cx=\"%f\" cy=\"%f\" r=\"5\" fill=\"rgb(%d,%d,%d)\" />\n",x2[circulos],y2[circulos],rand()%256,rand()%256,rand()%256);
        printf("</circle>\n");
    }
}

void circulosContorno(int numCirculosAleatorios)
{
    for(int i = 0; i < numCirculosAleatorios; i++) {
        printf("<circle r='10' fill='red'>\n");
        printf("<animateMotion repeatCount='indefinite' dur='%ds'>\n",rand()%60);
        printf("<mpath href='#rutaElefante' />\n");
        printf("</animateMotion>\n");
        printf("</circle>\n");
    }
}

void rutaContorno (float x1[], float y1[], int renglones)
{
    printf("<path id='rutaElefante' d='M ");
    for(int i = 0; i < renglones; i++) {
        printf("%f %f ", x1[i], y1[i]);
    }
    printf("' fill='none' stroke='none' />\n");
}