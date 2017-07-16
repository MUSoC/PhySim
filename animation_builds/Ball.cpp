
#include<GL/glut.h>
#include<stdio.h>

void myinit()
{
GLfloat mat_ambient[]={0.3,0.3,0.3,1.0};
GLfloat mat_diffuse[]={0.6,0.6,0.6,1.0};
GLfloat mat_specular[]={0.9,0.9,0.9,1.0};
GLfloat mat_shininess[]={100.0};

glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,mat_ambient);
glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,mat_diffuse);
glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,mat_specular);
glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,mat_shininess);

GLfloat light0_ambient[]={0.5,0.5,0.5,1.0};
GLfloat light0_diffuse[]={1.0,1.0,1.0,1.0};
GLfloat light0_specular[]={1.0,1.0,1.0,1.0};
GLfloat light0_position[]={5.0,5.0,5.0,0.0};

glLightfv(GL_LIGHT0,GL_AMBIENT,light0_ambient);
glLightfv(GL_LIGHT0,GL_DIFFUSE,light0_diffuse);
glLightfv(GL_LIGHT0,GL_SPECULAR,light0_specular);
glLightfv(GL_LIGHT0,GL_POSITION,light0_position);
glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE,light0_ambient);

glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_DEPTH_TEST);
glShadeModel(GL_SMOOTH);
glEnable(GL_NORMALIZE);
}

void sphere()
{
glPushMatrix();
glutSolidSphere(1.0,100,100);
glPopMatrix();
}
static GLfloat theta[]={0.0,0.0,0.0};
static GLint axis=2.0;

void display()
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
glRotatef(theta[0],1.0,0.0,0.0);
glRotatef(theta[1],0.0,1.0,0.0);
glRotatef(theta[2],0.0,0.0,1.0);
sphere();
glFlush();
glutSwapBuffers();
}

void spinsphere()
{
theta[axis]+=10.0;
if(theta[axis]>360.0)
theta[axis]-=360.0;
glutPostRedisplay();
}

void myreshape(int w,int h)
{
glViewport(0,0,w,h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
if(w<=h)
glOrtho(-2.0,2.0,-2.0*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-10.0,10.0);
else
glOrtho(-2.0*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-2.0,2.0,-10.0,10.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}


int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(500,500);
glutInitWindowPosition(0,0);
glutCreateWindow("Ball");
glutReshapeFunc(myreshape);
glutDisplayFunc(display);
glutIdleFunc(spinsphere);
myinit();
glutMainLoop();
return 0;
} 