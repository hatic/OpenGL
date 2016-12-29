#include <GL/gl.h>
#include <GL/glaux.h>
GLuint listName = 1;

void myinit (void)
{
glNewList (listName, GL_COMPILE); glColor3f(1.0, 0.0, 0.0); glBegin (GL_TRIANGLES);
glVertex2f (0.0, 0.0);
glVertex2f (1.0, 0.0);
glVertex2f (0.0, 1.0); glEnd ();
glTranslatef (1.5, 0.0, 0.0); glEndList ();
glShadeModel (GL_FLAT);
}
void drawLine (void)
{
glBegin (GL_LINES); glVertex2f (0.0, 0.5);
glVertex2f (15.0, 0.5); glEnd ();
}

void display(void)
{
GLuint i;
glClear (GL_COLOR_BUFFER_BIT); glColor3f(0.0, 1.0, 0.0);
for (i = 0; i < 10; i++) glCallList (listName);
drawLine (); glFlush ();
}

void myReshape(GLsizei w, GLsizei h)
{
glViewport(0, 0, w, h); 
glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
if (w <= h)
gluOrtho2D (0.0, 2.0,-0.5 * (GLfloat) h/(GLfloat) w,
1.5 * (GLfloat) h/(GLfloat) w);
else
gluOrtho2D (0.0, 2.0 * (GLfloat) w/(GLfloat) h, -0.5,
1.5);
glMatrixMode(GL_MODELVIEW); glLoadIdentity();
}


int main(int argc, char** argv)
{
auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
auxInitPosition (0, 0, 400, 50); auxInitWindow (argv[0]);
myinit ();
glFlush();
//auxReshapeFunc (myReshape);
 //auxMainLoop(display);
}

