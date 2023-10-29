Este es un proyecto de practicas de SDL y C++ para la creacion de proyectos graficos 

objetivos :

 crear clases personalizadas y reutilizables utilizando c++ y SDL para crear proyectos graficos


 1.- Ventana
 2.- Interfaz
 3.- Texto
 4.- Raton
 5.- Teclado
 6.- Sonido


Clase Controlador {

Datos publicos : 
     Contructor de la clase ()
       ~Destructor de la clase ()

    Metodos de la clase

int pantalla;

	inicializadores();

	interfaz(int pantalla);
	Texto(int x,int y,string texto);
	EventoRaton(int x,int y,boton,estado);
	Teclado(char tecla);

	BluclePrincipal(int FPS,bool FinDelPrograma);

	
	finalizadores();

Datos privados :

	EstrategiaIntefaz interfaz;
	EstrategiaTexto texto;
	EstrategiaRaton raton;
	EstrategiaTeclado teclado;
	

}
