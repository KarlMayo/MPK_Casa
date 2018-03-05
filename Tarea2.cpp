//Semestre 2018 - 2
//Tarea 2

//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Mayo Palma Karla			******//
//*************		Visual Studio 2015							******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.03f, 0.35f, 0.63f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}
void cuadrado(float valX,float valY,float numero) {
	for (size_t i = 0; i < numero; i++)
	{
		glBegin(GL_QUADS);
		glVertex3f(valX, valY, -1.0);
		glVertex3f(valX+1,valY , -1.0);
		glVertex3f(valX+1, valY+1 , -1.0);
		glVertex3f(valX,valY+1 , -1.0);
		glEnd();
		valX++;
	}
	
}
void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	//bloque de codigo (para dibujar LETRAS)

//DIBUJO DE IMAGEN
//-------------------------------------------------------------------------------------------------
	//LINEA 11 ---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO 
	cuadrado(17.0, 11.0, 3.0);
	cuadrado(24.0, 11.0, 3.0);
	cuadrado(29.0, 11.0, 3.0);
	//LINEA 12---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO 
	cuadrado(10.0, 12.0, 3.0);
	cuadrado(16.0, 12.0, 1.0);
	cuadrado(19.0, 12.0, 1.0);
	cuadrado(23.0, 12.0, 1.0);
	cuadrado(26.0, 12.0, 1.0);
	cuadrado(28.0, 12.0, 1.0);
	cuadrado(31.0, 12.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(17.0, 12.0, 2.0);
	cuadrado(24.0, 12.0, 2.0);
	cuadrado(29.0, 12.0, 2.0);
	//LINEA 13----------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO 
	cuadrado(10.0, 13.0, 1.0);
	cuadrado(13.0, 13.0, 1.0);
	cuadrado(15.0, 13.0, 19.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(11.0, 13.0, 2.0);
	//LINEA 14----------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO 
	cuadrado(10.0, 14.0, 1.0);
	cuadrado(14.0, 14.0, 2.0);
	cuadrado(23.0, 14.0, 1.0);
	cuadrado(34.0, 14.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(11.0, 14.0, 3.0);
	cuadrado(24.0, 14.0, 10.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(16.0, 14.0, 7.0);
	//LINEA 15---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO 
	cuadrado(11.0, 15.0, 4.0);
	cuadrado(22.0, 15.0, 1.0);
	cuadrado(26.0, 15.0, 7.0);
	cuadrado(35.0, 15.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(23.0, 15.0, 3.0);
	cuadrado(33.0, 15.0, 2.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 15.0, 3.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(18.0, 15.0, 4.0);

	glColor3f(0.5, 0.18, 0.7);				// COLOR MORADO
	cuadrado(1.0, 15.0, 3.0);
	cuadrado(9.0, 15.0, 2.0);
	//LINEA 16---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(13.0, 16.0, 2.0);
	cuadrado(21.0, 16.0, 1.0);
	cuadrado(26.0, 16.0, 1.0);
	cuadrado(29.0, 16.0, 1.0);
	cuadrado(32.0, 16.0, 1.0);
	cuadrado(36.0, 16.0,1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(22.0, 16.0, 1.0);
	cuadrado(25.0, 16.0, 1.0);
	cuadrado(27.0, 16.0, 2.0);
	cuadrado(30.0, 16.0, 2.0);
	cuadrado(33.0, 16.0, 1.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 16.0, 2.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(17.0, 16.0, 1.0);
	cuadrado(19.0, 16.0, 2.0);
	cuadrado(23.0, 16.0, 2.0);
	cuadrado(34.0, 16.0, 2.0);

	glColor3f(0.5, 0.18, 0.7);				// COLOR MORADO
	cuadrado(1.0, 16.0, 12.0);

	glColor3f(0.82, 0.42, 0.94);			// COLOR LILA
	cuadrado(18.0,16.0, 1.0);
	//LINEA 17---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(14.0, 17.0, 1.0);
	cuadrado(21.0, 17.0, 1.0);
	cuadrado(36.0, 17.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(22.0, 17.0, 1.0);
	cuadrado(25.0, 17.0, 9.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 17.0, 1.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(16.0, 17.0, 3.0);
	cuadrado(20.0, 17.0, 1.0);
	cuadrado(23.0, 17.0, 2.0);
	cuadrado(34.0, 17.0, 2.0);

	glColor3f(0.5, 0.18, 0.7);				// COLOR MORADO
	cuadrado(4.0, 17.0, 5.0);

	glColor3f(0.82, 0.42, 0.94);			// COLOR LILA
	cuadrado(19.0, 17.0, 1.0);

	glColor3f(0.0, 0.57, 1.0);				// COLOR AZUL
	cuadrado(1.0, 17.0, 3.0);
	cuadrado(9.0, 17.0, 5.0);
	//LINEA 18---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(14.0, 18.0, 1.0);
	cuadrado(21.0, 18.0, 1.0);
	cuadrado(25.0, 18.0, 2.0);
	cuadrado(30.0, 18.0, 1.0);
	cuadrado(32.0, 18.0, 2.0);
	cuadrado(36.0, 18.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(22.0, 18.0, 3.0);
	cuadrado(27.0, 18.0, 3.0);
	cuadrado(31.0, 18.0, 1.0);
	cuadrado(34.0, 18.0, 2.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 18.0, 1.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(16.0, 18.0, 1.0);
	cuadrado(18.0, 18.0, 3.0);

	glColor3f(0.82, 0.42, 0.94);			// COLOR LILA
	cuadrado(17.0, 18.0, 1.0);

	glColor3f(0.0, 0.57, 1.0);				// COLOR AZUL
	cuadrado(1.0, 18.0, 13.0);
	//LINEA 19---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(12.0, 19.0, 3.0);
	cuadrado(21.0, 19.0, 1.0);
	cuadrado(26.0, 19.0, 1.0);
	cuadrado(33.0, 19.0, 1.0);
	cuadrado(36.0, 19.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(22.0, 19.0, 3.0);
	cuadrado(27.0, 19.0, 5.0);
	cuadrado(34.0, 19.0, 2.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 19.0, 1.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(16.0, 19.0, 4.0);

	glColor3f(0.82, 0.42, 0.94);			// COLOR LILA
	cuadrado(20.0, 19.0, 1.0);

	glColor3f(0.0, 0.57, 1.0);				// COLOR AZUL
	cuadrado(4.0, 19.0, 8.0);

	glColor3f(0.0, 1.0, 0.0);				// COLOR VERDE
	cuadrado(1.0, 19.0, 8.0);

	glColor3f(1.0, 1.0, 1.0);				// COLOR BLANCO
	cuadrado(25.0, 19.0, 1.0);
	cuadrado(32.0, 19.0, 1.0);
	//LINEA 20---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(9.0, 20.0, 4.0);
	cuadrado(14.0, 20.0, 1.0);
	cuadrado(22.0, 20.0, 1.0);
	cuadrado(35.0, 20.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(13.0, 20.0, 1.0);
	cuadrado(23.0, 20.0, 12.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 20.0, 1.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(16.0, 20.0, 6.0);

	glColor3f(0.0, 1.0, 0.0);				// COLOR VERDE
	cuadrado(1.0, 20.0, 8.0);
	//LINEA 21---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(7.0, 21.0, 2.0);
	cuadrado(14.0, 21.0, 1.0);
	cuadrado(22.0, 21.0, 1.0);
	cuadrado(27.0, 21.0, 4.0);
	cuadrado(35.0, 21.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(9.0, 21.0, 5.0);
	cuadrado(23.0, 21.0, 4.0);
	cuadrado(31.0, 21.0, 4.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 21.0, 1.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(16.0, 21.0, 3.0);
	cuadrado(20.0, 21.0, 2.0);

	glColor3f(0.82, 0.42, 0.94);			// COLOR LILA
	cuadrado(19.0, 21.0, 1.0);

	glColor3f(0.0, 1.0, 0.0);				// COLOR VERDE
	cuadrado(4.0, 21.0, 3.0);

	glColor3f(1.0, 0.83, 0.0);				// COLOR AMARILLO
	cuadrado(1.0, 21.0, 3.0);
	//LINEA 22---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(7.0, 22.0, 1.0);
	cuadrado(11.0, 22.0, 4.0);
	cuadrado(22.0, 22.0, 1.0);
	cuadrado(26.0, 22.0, 1.0);
	cuadrado(31.0, 22.0, 1.0);
	cuadrado(35.0, 22.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(8.0, 22.0, 3.0);
	cuadrado(23.0, 22.0, 3.0);
	cuadrado(32.0, 22.0, 3.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 22.0, 1.0);
	cuadrado(30.0, 22.0, 1.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(16.0, 22.0, 6.0);
	cuadrado(27.0, 22.0, 3.0);

	glColor3f(1.0, 0.83, 0.0);				// COLOR AMARILLO
	cuadrado(1.0, 22.0, 6.0);
	//LINEA 23---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(8.0, 23.0, 4.0);
	cuadrado(14.0, 23.0, 1.0);
	cuadrado(22.0, 23.0, 1.0);
	cuadrado(25.0, 23.0, 1.0);
	cuadrado(31.0, 23.0, 2.0);
	cuadrado(35.0, 23.0, 1.0);

	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	cuadrado(23.0, 23.0, 2.0);
	cuadrado(33.0, 23.0, 2.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 23.0, 1.0);
	cuadrado(30.0, 23.0, 1.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(16.0, 23.0, 6.0);
	cuadrado(26.0, 23.0, 2.0);
	cuadrado(29.0, 23.0, 1.0);

	glColor3f(0.82, 0.42, 0.94);			// COLOR LILA
	cuadrado(28.0, 23.0, 1.0);

	glColor3f(1.0, 0.83, 0.0);				// COLOR AMARILLO
	cuadrado(4.0, 23.0, 4.0);

	glColor3f(1.0, 0.55, 0.0);				// COLOR NARANJA
	cuadrado(1.0, 23.0, 3.0);
	cuadrado(12.0, 23.0, 2.0);
	//LINEA 24---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(14.0, 24.0, 1.0);
	cuadrado(23.0, 24.0, 2.0);
	cuadrado(31.0, 24.0, 1.0);
	cuadrado(33.0, 24.0, 2.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 24.0, 1.0);
	cuadrado(30.0, 24.0, 1.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(16.0, 24.0, 2.0);
	cuadrado(19.0, 24.0, 4.0);
	cuadrado(25.0, 24.0, 5.0);

	glColor3f(0.82, 0.42, 0.94);			// COLOR LILA
	cuadrado(18.0, 24.0, 1.0);

	glColor3f(1.0, 0.55, 0.0);				// COLOR NARANJA
	cuadrado(1.0, 24.0, 13.0);
	//LINEA 25---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(14.0, 25.0, 1.0);
	cuadrado(31.0, 25.0, 1.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(15.0, 25.0, 2.0);
	cuadrado(28.0, 25.0, 3.0);

	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	cuadrado(17.0, 25.0, 4.0);
	cuadrado(22.0, 25.0, 2.0);
	cuadrado(25.0, 25.0, 3.0);

	glColor3f(0.82, 0.42, 0.94);			// COLOR LILA
	cuadrado(21.0, 25.0, 1.0);
	cuadrado(24.0, 25.0, 1.0);

	glColor3f(1.0, 0.55, 0.0);				// COLOR NARANJA
	cuadrado(4.0, 25.0, 5.0);

	glColor3f(1.0, 0.0, 0.0);				// COLOR ROJO
	cuadrado(1.0, 25.0, 3.0);
	cuadrado(9.0, 25.0, 5.0);
	//LINEA 26---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(15.0, 26.0, 1.0);
	cuadrado(30.0, 26.0, 1.0);

	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	cuadrado(16.0, 26.0, 14.0);

	glColor3f(1.0, 0.0, 0.0);				// COLOR ROJO
	cuadrado(1.0, 26.0, 14.0);
	//LINEA 27---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(16.0, 27.0, 14.0);

	glColor3f(1.0, 0.0, 0.0);				// COLOR ROJO
	cuadrado(3.0, 27.0, 6.0);
	//DETALLES-------------------------------------------------------------------
	glColor3f(1.0, 1.0, 1.0);				// COLOR BLANCO
	cuadrado(6.0, 38.0, 1.0);
	cuadrado(4.0, 37.0, 1.0);
	cuadrado(8.0, 37.0, 1.0);
	cuadrado(2.0, 35.0, 1.0);
	cuadrado(10.0, 35.0, 1.0);
	cuadrado(4.0, 33.0, 1.0);
	cuadrado(8.0, 33.0, 1.0);
	cuadrado(6.0, 32.0, 1.0);
	cuadrado(24.0, 39.0, 1.0);
	cuadrado(26.0, 37.0, 1.0);
	cuadrado(28.0, 36.0, 1.0);
	cuadrado(30.0, 37.0, 1.0);
	cuadrado(32.0, 39.0, 1.0);
	cuadrado(11.0, 7.0, 1.0);
	cuadrado(9.0, 6.0, 1.0);
	cuadrado(13.0, 6.0, 1.0);
	cuadrado(7.0, 4.0, 1.0);
	cuadrado(15.0, 4.0, 1.0);
	cuadrado(9.0, 2.0, 1.0);
	cuadrado(13.0, 2.0, 1.0);
	cuadrado(11.0, 1.0, 1.0);
	cuadrado(30.0, 8.0, 1.0);
	cuadrado(26.0, 5.0, 1.0);
	cuadrado(30.0, 2.0, 1.0);
	cuadrado(34.0, 5.0, 1.0);



	/*
	//LINEA 6---------------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);				// COLOR NEGRO
	cuadrado(.0, .0, .0);
	glColor3f(0.34, 0.31, 0.31);			// COLOR GRIS
	glColor3f(0.92, 0.92, 0.53);			// COLOR AMARILLO PASTEL
	glColor3f(0.99, 0.58, 0.83);			// COLOR ROSA PASTEL
	glColor3f(0.5, 0.18, 0.7);				// COLOR MORADO
	glColor3f(0.82, 0.42, 0.94);			// COLOR LILA
	glColor3f(0.0, 0.57, 1.0);				// COLOR AZUL
	glColor3f(0.0, 1.0, 0.0);				// COLOR VERDE
	glColor3f(1.0, 0.83, 0.0);				// COLOR AMARILLO
	glColor3f(1.0, 0.55, 0.0);				// COLOR NARANJA
	glColor3f(1.0, 0.0, 0.0);				// COLOR ROJO
	*/
//-------------------------------------------------------------------------------------------------	


	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(0,40,0,40,0.1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (700, 700);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Tarea 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

