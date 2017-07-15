#include<GL/gl.h>
#include<GL/glut.h>
static GLfloat rot;	//rotation angle


void display_func(void)
{
/*Matrix for the vertices of Cubes*/
	static GLfloat vert[][4]={
		{ 1.0,  1.0,  1.0},
		{-1.0,  1.0,  1.0},
		{-1.0, -1.0,  1.0},
		{ 1.0, -1.0,  1.0},
		{ 1.0,  1.0, -1.0},
		{-1.0,  1.0, -1.0},
		{-1.0, -1.0, -1.0},
		{ 1.0, -1.0, -1.0},
	};
	/*Matrix for the color of sides of Cubes*/
	static GLfloat color[][4]={
		{1.0, 0.0, 0.0, 0.0},
		{0.0, 1.0, 0.0, 0.0},
		{0.0, 0.0, 1.0, 0.0},
		{0.0, 1.0, 1.0, 0.0},
		{1.0, 0.0, 1.0, 0.0},
		{1.0, 1.0, 0.0, 0.0},
	};



	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();//push on stack
    glTranslatef(0.0, 0.0, -15.0); //move
	glRotatef(rot, 0.0, 1.0, 0.0); //rotation


	glTranslatef(0.0, 0.0, -5.0); //move
	glRotatef(rot*2, 1.0, 0.0, 0.0); //rotation

	glBegin(GL_QUADS);
		glColor3fv(color[0]);
		glVertex3fv(vert[0]);
		glVertex3fv(vert[1]);
		glVertex3fv(vert[2]);
		glVertex3fv(vert[3]);

		glColor3fv(color[1]);
		glVertex3fv(vert[4]);		
		glVertex3fv(vert[5]);		
		glVertex3fv(vert[6]);		
		glVertex3fv(vert[7]);		

		glColor3fv(color[2]);
		glVertex3fv(vert[0]);		
		glVertex3fv(vert[1]);		
		glVertex3fv(vert[5]);		
		glVertex3fv(vert[4]);

		glColor3fv(color[3]);
		glVertex3fv(vert[2]);		
		glVertex3fv(vert[3]);		
		glVertex3fv(vert[7]);		
		glVertex3fv(vert[6]);

		glColor3fv(color[4]);
		glVertex3fv(vert[3]);		
		glVertex3fv(vert[0]);		
		glVertex3fv(vert[4]);		
		glVertex3fv(vert[7]);

		glColor3fv(color[5]);
		glVertex3fv(vert[1]);		
		glVertex3fv(vert[2]);		
		glVertex3fv(vert[6]);		
		glVertex3fv(vert[5]);		

	glEnd();
	glPopMatrix();	//pop out stack

	glutSwapBuffers();
}


void reshape_func(int width, int height)
{

	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 3.0, 10000.0);

	glMatrixMode(GL_MODELVIEW);
}

void idle_func(void)
{
	rot=0.1*(GLfloat)glutGet(GLUT_ELAPSED_TIME); //Returns the amount of time (in milliseconds) from the time you call the () glutInit.
	glutPostRedisplay(); //re-draw the screen glut	
}

int main(int argc, char *argv[])
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(300,300);
	glutCreateWindow("CubeDance");
	glutDisplayFunc(display_func);
	glutReshapeFunc(reshape_func);
	glutIdleFunc(idle_func);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
	return 0;
}