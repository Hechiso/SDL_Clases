#include <iostream>
#include <X11/Xlib.h>

int main() {
    Display* d = XOpenDisplay(NULL);
    Screen*  s = DefaultScreenOfDisplay(d);
    int ancho = WidthOfScreen(s);
    int alto = HeightOfScreen(s);
    std::cout << "Ancho de la pantalla: " << ancho << " Altura de la pantalla: " << alto << std::endl;
    XCloseDisplay(d);



    int anchoChunk = 64; // ancho de cada chunk en tu caso
    int altoChunk = 64; // alto de cada chunk en tu caso

    int anchoChunks = ancho / anchoChunk; // calcular la cantidad de chunks en el ancho
    int altoChunks = alto / altoChunk; // calcular la cantidad de chunks en el alto

    std::cout << "Cantidad de chunks en el ancho: " << anchoChunks << std::endl;
    std::cout << "Cantidad de chunks en el alto: " << altoChunks << std::endl;
    
    int medidaX = anchoChunks * anchoChunk - ancho;
    int medidaY = altoChunks *altoChunk -alto;

    std::cout << "Cantidad de pixeles sobrantes en X : " <<medidaX<< std::endl;
    std::cout << "Cantidad de pixeles sobrantes en Y : " << medidaY << std::endl;
    
    return 0;
}

