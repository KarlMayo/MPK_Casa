//Semestre 2018 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Mayo Palma Karla			******//
//*************	 Visual Studio 2015						******//
//************************************************************//
#include "Main.h"


// Variables used to calculate frames per second: (Windows)
DWORD dwFrames = 0;
DWORD dwCurrentTime = 0;
DWORD dwLastUpdateTime = 0;
DWORD dwElapsedTime = 0;


//Variables used to create movement
int proton=0;
int electron1=0;
int electron2=0;
int electron3=0;
int electron4=0;
int electron5 = 0;
int electron6 = 0;
int electron7 = 0;


float camaraZ = 0.0;
float camaraX = 0.0;

GLfloat SunDiffuse[]= { 1.0f, 1.0f, 1.0f, 1.0f };			// Diffuse Light Values
GLfloat SunSpecular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat SunPosition[]= { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position



void InitGL ( GLvoid )     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo

	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(camaraX,0.0,-5.0+camaraZ);			//camara
		
//atomo
	glPushMatrix();
	glColor3f( 1.0,0.0,1.0 );	//proton purpura
	glutSolidSphere(1.0,20,20);  //proton esfera
	
	//lineas de energia
	glPushMatrix();
	glPushMatrix();
	glRotatef(-60,1,0,0);
	glPopMatrix();

	glPushMatrix();
	glRotatef(-30,1,0,0);
	glPopMatrix();
	
	
	glPopMatrix();
	

	//electron1
	glPushMatrix();
		glRotatef(electron1,0,1,0);
		glTranslatef(5, 0, 0);
		glColor3f(0.12, 0.56, 1.0);
		glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	//electron2
	glPushMatrix();
		glRotatef(electron2,1, 0, 0);
		glTranslatef(0, 5, 0);
		glColor3f(0.86, 0.08, 0.24);
		glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	//electron3
	glPushMatrix();
		glRotatef(45,0,0,1);
		glRotatef(electron3,0,1,0);
		glTranslatef(5,0, 0);
		glColor3f(0.18, 0.55, 0.34);
		glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	//electron4
	glPushMatrix();
		glRotatef(60,1,0,0);
		glRotatef(electron4,0,1,0);
		glTranslatef(-5,0, 0);
		glColor3f(0.42, 0.35, 0.8);
		glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	//electron5
	glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glRotatef(electron5, 0, 1, 0);
		glTranslatef(-5, 0, 0);
		glColor3f(0.42, 0.18, 0.54);
		glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	//electron6
	glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glRotatef(electron5, 0, 1, 0);
		glTranslatef(-5, 0, 0);
		glColor3f(0.0, 0.5, 0.0);
		glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	//electron7
	glPushMatrix();
		glRotatef(45, 0, 0, 1);
		glRotatef(electron7, 0, 1, 0);
		glTranslatef(5, 0, 0);
		glColor3f(1.0, 1.0, 0.0);
		glutSolidSphere(0.3, 20, 20);
	glPopMatrix();

	glPopMatrix();
	glutSwapBuffers ( );

}

void animacion()
{
	// Calculate the number of frames per one second:
	//dwFrames++;
	dwCurrentTime = GetTickCount(); // Even better to use timeGetTime()
	dwElapsedTime = dwCurrentTime - dwLastUpdateTime;

	if(dwElapsedTime >= 30)
	{
		proton = (proton - 1) % 360;
		electron1 =(electron1 +1)%360;
		electron2 =(electron2 +4)%360;
		electron3 =(electron3 +3)%360;
		electron4 =(electron4 -4)%360;
		electron5 = (electron5 - 1) % 360;
		electron6 = (electron6 - 2) % 360;
		electron7 = (electron7 - 2) % 360;
		dwLastUpdateTime = dwCurrentTime;
	}

	glutPostRedisplay();
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

	// Tipo de Vista
	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	//glLoadIdentity();
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':   //Movimientos de camara
		case 'W':
			camaraZ +=0.5f;
			break;
		case 's':
		case 'S':
			camaraZ -=0.5f;
			break;
		case 'a':
		case 'A':
			camaraX -= 0.5f;
			break;
		case 'd':
		case 'D':
			camaraX += 0.5f;
			break;

		case 'i':		//Movimientos de Luz
		case 'I':
			
			break;
		case 'k':
		case 'K':
			
			break;

		case 'l':   //Activamos/desactivamos luz
		case 'L':
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
			break;        
		default:        // Cualquier otra
			break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		
		break;
    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		
		break;
	case GLUT_KEY_LEFT:
		
		break;
	case GLUT_KEY_RIGHT:
		
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (800, 800);	// Tamaño de la Ventana
  glutInitWindowPosition (30, 60);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 6"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutIdleFunc		  ( animacion );
  glutMainLoop        ( );          // 

  return 0;
}