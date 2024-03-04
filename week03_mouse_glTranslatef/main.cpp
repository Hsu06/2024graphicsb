#include <GL/glut.h>
#include <stdio.h>
float teapotx=0,teapoty=0;
void display()
{
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glPushMatrix();
        glTranslatef(teapotx,teapoty,0);
        glutSolidTeapot(0.3);
   glPopMatrix();
   glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    teapotx=(x-150)/150.0;
    teapoty=-(y-150)/150.0;
}
int main(int argc,char * argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03 mouse glTranslaf");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
}
