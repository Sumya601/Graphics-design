#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{

    glBegin(GL_POLYGON);
    float r = 0.5;
    for(float theta = 0; theta < 360; theta = theta+0.0001)
    {
        float x = r*cos(theta);
        float y = r*sin(theta);
        glVertex2f(x,y);
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
