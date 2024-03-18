#include <GL/glut.h>
#include <opencv/highgui.h>
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc,char * argv[])
{
    IplImage * img=cvLoadImage("c:/micky.jpg");
    cvShowImage("opencv",img);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("¦Û¤v¼gªº");
    glutDisplayFunc(display);
    glutMainLoop();
}
