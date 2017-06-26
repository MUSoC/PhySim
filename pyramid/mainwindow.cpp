// code taken from:
// http://sorj.de/?p=192
#include "myglwidget.h"

/*
 * Sets up the OpenGL rendering context, defines display lists, etc.
 * Gets called once before the first time resizeGL() or paintGL() is called.
 */
void MyGLWidget::initializeGL(){
    //activate the depth buffer
    glEnable(GL_DEPTH_TEST);
}
GLfloat anglePyramid = 0.0f;  // Rotational angle for pyramid [NEW]
GLfloat angleCube = 0.0f;     // Rotational angle for cube [NEW]
int refreshMills = 15;        // refresh interval in milliseconds [NEW]

/*
 *  Sets up the OpenGL viewport, projection, etc. Gets called whenever the widget has been resized
 *  (and also when it is shown for the first time because all newly created widgets get a resize event automatically).
 */
void MyGLWidget::resizeGL (int width, int height){
    glViewport( 0, 0, (GLint)width, (GLint)height );

    /* create viewing cone with near and far clipping planes */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum( -1.0, 1.0, -1.0, 1.0, 5.0, 30.0);

    glMatrixMode( GL_MODELVIEW );
}

/*
 * Renders the OpenGL scene. Gets called whenever the widget needs to be updated.
 */
void MyGLWidget::paintGL(){

    //delete color and depth buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glTranslatef(0.0f,0.0f,-20.0f); //move along z-axis
        glRotatef(45.0,0.0,1.0,0.0); //rotate 30 degress around y-axis
        glRotatef(45.0,1.0,0.0,0.0); //rotate 15 degress around x-axis
        glRotatef(angleCube, 1.0f, 1.0f, 1.0f);  // Rotate about (1,1,1)-axis [NEW]
        glRotatef(anglePyramid, 1.0f, 1.0f, 0.0f);  // Rotate about the (1,1,0)-axis [NEW]


        glBegin(GL_TRIANGLES);                                   // Start drawing the Pyramid

                        glColor3f(1.0f,0.0f,0.0f);                           // Red
                        glVertex3f( 0.0f, 1.0f, 0.0f);                       // Top Of Triangle (Front)
                        glColor3f(0.0f,1.0f,0.0f);                           // Green
                        glVertex3f(-1.0f,-1.0f, 1.0f);                       // Left Of Triangle (Front)
                        glColor3f(0.0f,0.0f,1.0f);                           // Blue
                        glVertex3f( 1.0f,-1.0f, 1.0f);                       // Right Of Triangle (Front)

                        glColor3f(1.0f,0.0f,0.0f);                           // Red
                        glVertex3f( 0.0f, 1.0f, 0.0f);                       // Top Of Triangle (Right)
                        glColor3f(0.0f,0.0f,1.0f);                           // Blue
                        glVertex3f( 1.0f,-1.0f, 1.0f);                       // Left Of Triangle (Right)
                        glColor3f(0.0f,1.0f,0.0f);                           // Green
                        glVertex3f( 1.0f,-1.0f, -1.0f);                      // Right Of Triangle (Right)

                        glColor3f(1.0f,0.0f,0.0f);                           // Red
                        glVertex3f( 0.0f, 1.0f, 0.0f);                       // Top Of Triangle (Back)
                        glColor3f(0.0f,1.0f,0.0f);                           // Green
                        glVertex3f( 1.0f,-1.0f, -1.0f);                      // Left Of Triangle (Back)
                        glColor3f(0.0f,0.0f,1.0f);                           // Blue
                        glVertex3f(-1.0f,-1.0f, -1.0f);                      // Right Of Triangle (Back)

                        glColor3f(1.0f,0.0f,0.0f);                           // Red
                        glVertex3f( 0.0f, 1.0f, 0.0f);                       // Top Of Triangle (Left)
                        glColor3f(0.0f,0.0f,1.0f);                           // Blue
                        glVertex3f(-1.0f,-1.0f,-1.0f);                       // Left Of Triangle (Left)
                        glColor3f(0.0f,1.0f,0.0f);                           // Green
                        glVertex3f(-1.0f,-1.0f, 1.0f);                       // Right Of Triangle (Left)

                    glEnd();                                                    // Finished Drawing sides

                    glBegin(GL_QUADS);                                    // Draw the base

                        glColor3f(0.0f,1.0f,0.0f);                           // Green
                        glVertex3f(-1.0f,-1.0f, 1.0f);                       // Left Of Triangle (Front)
                        glColor3f(0.0f,0.0f,1.0f);                           // Blue
                        glVertex3f( 1.0f,-1.0f, 1.0f);                       // Left Of Triangle (Right)
                        glColor3f(0.0f,1.0f,0.0f);                           // Green
                        glVertex3f( 1.0f,-1.0f, -1.0f);                      // Left Of Triangle (Back)
                        glColor3f(0.0f,0.0f,1.0f);                           // Blue
                        glVertex3f(-1.0f,-1.0f,-1.0f);                       // Left Of Triangle (Left)

        glEnd(); // Finished Drawing The Pyramid
        anglePyramid += 0.2f;
        angleCube -= 0.15f;

        }
