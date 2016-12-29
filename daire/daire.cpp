#include <GL/gl.h>
#include <GL/glaux.h>
#include <math.h>
int i,EDGES;
int main(int argc, char** argv)
{
   auxInitDisplayMode (AUX_SINGLE | AUX_RGBA);
   auxInitPosition (0, 0, 500, 500);
   auxInitWindow (argv[0]);
   glClearColor (1.0, 1.0, 1.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.0, 1.0, 1.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    float PI=3.1415926535897;
	EDGES=50;//�izilen dairenin ne kadar line dan olu�aca��na karar veriyoruz
	glLineWidth(5.0);//�izginin kal�nl���
	for(i=1;i<EDGES;i++){//for i�erisinde yay�n kar���� olan kenara line �iziyoruz
        glBegin(GL_LINE_STRIP);
		glVertex2f(cos((2*PI*i)/EDGES),sin((2*PI*i)/EDGES));
		glVertex2f(cos((2*PI*(i+1))/EDGES),sin((2*PI*(i+1))/EDGES));
		}
   glEnd();
   glFlush();

   Sleep(3000);
   return 0;
}

