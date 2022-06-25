#include <windows.h>
#include <GL/glut.h>

void display(void)
{

    glBegin(GL_POINTS);

    for(float i=-1; i<=1; i=i+0.002)
    {
        glVertex2f(i, i); //this line will execute 1000 times.
    }
    glEnd();
    glFlush();


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 B2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
