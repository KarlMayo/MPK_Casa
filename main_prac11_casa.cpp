<<<<<<< HEAD
//Semestre 2018 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s):Mayo Palma Karla *********************************//
//*************											******//
//*************				Visual Studio 2015			******//
//************************************************************//
#include "Main.h"

float transZ = -5.0f;
float transX = 0.0f;
float angleX = 0.0f;
float angleY = 0.0f;
int screenW = 0.0;
int screenH = 0.0;
float angHombro = 0.0;
float angCodo = 0.0;
float angMuneca = 0.0;
float angArt1 = 0.0;
float angArt2 = 0.0;
float angArt3 = 0.0;

GLfloat Position[]= { 0.0f, 3.0f, 0.0f, 1.0f };			// Light Position
GLfloat Position2[]= { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position

void InitGL ( void )     // Inicializamos parametros
{

	glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing

	//Configuracion luz
	glLightfv(GL_LIGHT0, GL_POSITION, Position);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, Position2);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);


	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(transX, 0.0f, transZ);
	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	
		//Poner Código Aquí.
	//hombro
	glRotated(angHombro,0,0,1.0);
	glPushMatrix();
		glScaled(1,2,2);
		glColor3f(1, 1, 1);
		prisma();
	glPopMatrix();
	//brazo
	glTranslatef(2,0,0);
	glPushMatrix();
		glScaled(3, 2, 2);
		glColor3f(1, 0, 1);
		prisma();
	glPopMatrix();
	//codo
	glRotated(angCodo,0.0, 0.0, 1.0);
	glTranslatef(1.75, 0, 0);
	glPushMatrix();
		glScaled(0.5, 2, 2);
		glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//antebrazo
	glTranslatef(2.25, 0, 0);
	glPushMatrix();
		glScaled(4, 2, 2);
		glColor3f(1, 0, 2);
		prisma();
	glPopMatrix();
	//muñeca
	glRotated(angMuneca, 1.0, 0.0, 0.0);
	glTranslatef(2.25, 0, 0);
	glPushMatrix();
		glScaled(0.5, 2, 2);
		glColor3f(3, 2, 4);
		prisma();
	glPopMatrix();
	//mano
	glTranslatef(1.25, -0.12, 0);
	glPushMatrix();
	glScaled(2, 3, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
//Dedo Meñique
	//Falange
	glRotated(angArt1, 0.0, 1.0, 0.0);
	glTranslatef(1.25, -1, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glRotated(angArt2, 0.0, 1.0, 0.0);
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
		glScaled(0.5, 0.2, 2);
		glColor3f(1, 0, 1);
		prisma();
	glPopMatrix();
	//Falangeta
	glRotated(angArt3, 0.0, 1.0, 0.0);
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
		glScaled(0.5, 0.1, 2);
		glColor3f(1, 1, 1);
		prisma();
	glPopMatrix();
//Anular
	//Falange
	glTranslatef(-1,0.5, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
//Dedo Medio
	//Falange
	glTranslatef(-1, 0.5, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
//Dedo Indice
	//Falange
	glTranslatef(-1, 0.5, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
	//Dedo Pulgar
	//Falange
	glTranslatef(-1, 0.5, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
	//Dedo pulgar
	//Falange
	glTranslatef(-1.40, 0.75, 0);
	glPushMatrix();
	glScaled(0.3, 0.5, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0, 0.5, 0);
	glPushMatrix();
	glScaled(0.2, 0.5, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0, 0.5, 0);
	glPushMatrix();
	glScaled(0.1, 0.5, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
		
  											
	glutSwapBuffers ( );
  // Swap The Buffers
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
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	//glLoadIdentity();									
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.2f;
			break;
		case 's':
		case 'S':
			transZ -=0.2f;
			break;
		case 'a':
		case 'A':
			transX +=0.2f;
			break;
		case 'j':
			if (angHombro <= 90)
			angHombro += 0.5;
			printf("%f\n", angHombro);
			break;
		case 'J':
			if (angHombro >= -90)
			angHombro -= 0.5;
			printf("%f\n", angHombro);
			break;
		case 'o':
			if (angCodo <= 90)
				angCodo += 0.5;
			printf("%f\n", angCodo);
			break;
		case 'O':
			if (angCodo >= -0)
				angCodo -= 0.5;
			printf("%f\n", angCodo);
			break;
		case 'm':
			if (angArt1 <= 0)
				angArt1 += 0.5;
			printf("%f\n", angArt1);
			break;
		case 'M':
			if (angArt1 >= -90)
				angArt1 -= 0.5;
			printf("%f\n", angArt1);
			break; 
		case 'p':
			if (angMuneca <= 360)
				angMuneca += 0.5;
			printf("%f\n", angMuneca);
			break;
		case 'P':
			if (angMuneca >= -360)
				angMuneca -= 0.5;
			printf("%f\n", angCodo);
			break;
		case 'n':
			if (angArt2 <= 0)
				angArt2 += 0.5;
			printf("%f\n", angArt2);
			break;
		case 'N':
			if (angArt2 >= -90)
				angArt2 -= 0.5;
			printf("%f\n", angArt2);
			break;
		case 'b':
			if (angArt3 <= 0)
				angArt3 += 0.5;
			printf("%f\n", angArt3);
			break;
		case 'B':
			if (angArt3 >= -90)
				angArt3 -= 0.5;
			printf("%f\n", angArt3);
			break;
		case 'd':
		case 'D':
			transX -=0.2f;
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
    case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		if(angleX <= 90)
		angleX +=2.0f;
		printf("%f\n", angleX);
		break;
    case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		if(angleX >= -90)
		angleX -=2.0f;
		printf("%f\n", angleX);
		break;
	case GLUT_KEY_LEFT:
		if (angleY <= 90)
		angleY +=2.0f;
		break;
	case GLUT_KEY_RIGHT:
		if (angleY >= -90)
		angleY -=2.0f;
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
  screenW = glutGet(GLUT_SCREEN_WIDTH);
  screenH = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 5"); // Nombre de la Ventana
  printf("Resolution H: %i \n", screenW);
  printf("Resolution V: %i \n", screenH);
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
=======
//Semestre 2018 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s):Mayo Palma Karla *********************************//
//*************											******//
//*************				Visual Studio 2015			******//
//************************************************************//
#include "Main.h"

float transZ = -5.0f;
float transX = 0.0f;
float angleX = 0.0f;
float angleY = 0.0f;
int screenW = 0.0;
int screenH = 0.0;
float angHombro = 0.0;
float angCodo = 0.0;
float angMuneca = 0.0;
float angArt1 = 0.0;
float angArt2 = 0.0;
float angArt3 = 0.0;

GLfloat Position[]= { 0.0f, 3.0f, 0.0f, 1.0f };			// Light Position
GLfloat Position2[]= { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position

void InitGL ( void )     // Inicializamos parametros
{

	glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing

	//Configuracion luz
	glLightfv(GL_LIGHT0, GL_POSITION, Position);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, Position2);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);


	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(transX, 0.0f, transZ);
	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	
		//Poner Código Aquí.
	//hombro
	glRotated(angHombro,0,0,1.0);
	glPushMatrix();
		glScaled(1,2,2);
		glColor3f(1, 1, 1);
		prisma();
	glPopMatrix();
	//brazo
	glTranslatef(2,0,0);
	glPushMatrix();
		glScaled(3, 2, 2);
		glColor3f(1, 0, 1);
		prisma();
	glPopMatrix();
	//codo
	glRotated(angCodo,0.0, 0.0, 1.0);
	glTranslatef(1.75, 0, 0);
	glPushMatrix();
		glScaled(0.5, 2, 2);
		glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//antebrazo
	glTranslatef(2.25, 0, 0);
	glPushMatrix();
		glScaled(4, 2, 2);
		glColor3f(1, 0, 2);
		prisma();
	glPopMatrix();
	//muñeca
	glRotated(angMuneca, 1.0, 0.0, 0.0);
	glTranslatef(2.25, 0, 0);
	glPushMatrix();
		glScaled(0.5, 2, 2);
		glColor3f(3, 2, 4);
		prisma();
	glPopMatrix();
	//mano
	glTranslatef(1.25, -0.12, 0);
	glPushMatrix();
	glScaled(2, 3, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
//Dedo Meñique
	//Falange
	glRotated(angArt1, 0.0, 1.0, 0.0);
	glTranslatef(1.25, -1, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glRotated(angArt2, 0.0, 1.0, 0.0);
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
		glScaled(0.5, 0.2, 2);
		glColor3f(1, 0, 1);
		prisma();
	glPopMatrix();
	//Falangeta
	glRotated(angArt3, 0.0, 1.0, 0.0);
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
		glScaled(0.5, 0.1, 2);
		glColor3f(1, 1, 1);
		prisma();
	glPopMatrix();
//Anular
	//Falange
	glTranslatef(-1,0.5, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
//Dedo Medio
	//Falange
	glTranslatef(-1, 0.5, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
//Dedo Indice
	//Falange
	glTranslatef(-1, 0.5, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
	//Dedo Pulgar
	//Falange
	glTranslatef(-1, 0.5, 0);
	glPushMatrix();
	glScaled(0.5, 0.3, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.2, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0.5, 0, 0);
	glPushMatrix();
	glScaled(0.5, 0.1, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
	//Dedo pulgar
	//Falange
	glTranslatef(-1.40, 0.75, 0);
	glPushMatrix();
	glScaled(0.3, 0.5, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//Falangina
	glTranslatef(0, 0.5, 0);
	glPushMatrix();
	glScaled(0.2, 0.5, 2);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	//Falangeta
	glTranslatef(0, 0.5, 0);
	glPushMatrix();
	glScaled(0.1, 0.5, 2);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
		
  											
	glutSwapBuffers ( );
  // Swap The Buffers
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
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	//glLoadIdentity();									
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.2f;
			break;
		case 's':
		case 'S':
			transZ -=0.2f;
			break;
		case 'a':
		case 'A':
			transX +=0.2f;
			break;
		case 'j':
			if (angHombro <= 90)
			angHombro += 0.5;
			printf("%f\n", angHombro);
			break;
		case 'J':
			if (angHombro >= -90)
			angHombro -= 0.5;
			printf("%f\n", angHombro);
			break;
		case 'o':
			if (angCodo <= 90)
				angCodo += 0.5;
			printf("%f\n", angCodo);
			break;
		case 'O':
			if (angCodo >= -0)
				angCodo -= 0.5;
			printf("%f\n", angCodo);
			break;
		case 'm':
			if (angArt1 <= 0)
				angArt1 += 0.5;
			printf("%f\n", angArt1);
			break;
		case 'M':
			if (angArt1 >= -90)
				angArt1 -= 0.5;
			printf("%f\n", angArt1);
			break; 
		case 'p':
			if (angMuneca <= 360)
				angMuneca += 0.5;
			printf("%f\n", angMuneca);
			break;
		case 'P':
			if (angMuneca >= -360)
				angMuneca -= 0.5;
			printf("%f\n", angCodo);
			break;
		case 'n':
			if (angArt2 <= 0)
				angArt2 += 0.5;
			printf("%f\n", angArt2);
			break;
		case 'N':
			if (angArt2 >= -90)
				angArt2 -= 0.5;
			printf("%f\n", angArt2);
			break;
		case 'b':
			if (angArt3 <= 0)
				angArt3 += 0.5;
			printf("%f\n", angArt3);
			break;
		case 'B':
			if (angArt3 >= -90)
				angArt3 -= 0.5;
			printf("%f\n", angArt3);
			break;
		case 'd':
		case 'D':
			transX -=0.2f;
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
    case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		if(angleX <= 90)
		angleX +=2.0f;
		printf("%f\n", angleX);
		break;
    case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		if(angleX >= -90)
		angleX -=2.0f;
		printf("%f\n", angleX);
		break;
	case GLUT_KEY_LEFT:
		if (angleY <= 90)
		angleY +=2.0f;
		break;
	case GLUT_KEY_RIGHT:
		if (angleY >= -90)
		angleY -=2.0f;
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
  screenW = glutGet(GLUT_SCREEN_WIDTH);
  screenH = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 5"); // Nombre de la Ventana
  printf("Resolution H: %i \n", screenW);
  printf("Resolution V: %i \n", screenH);
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
>>>>>>> 44f42aaff2ebc8fc9bac7a460c855f08e4b44c27
}