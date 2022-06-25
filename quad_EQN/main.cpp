#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float xa=0.2,ya=0.2, xb=-0.2,yb=0.2, xc=-0.2,yc=-0.2, xd=0.2,yd=-0.2;

void display(void)
{
    //glTranslatef(-0.4, -0.4, 0);
    //glRotatef(-45, 0, 0, 1);
    //glScalef(0.5, 0.5, 1);

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(xa, ya);
    glColor3f(0, 1, 0);
    glVertex2f(xb, yb);
    glColor3f(0, 0, 1);
    glVertex2f(xc, yc);
    glColor3f(0.8, 0.4, 0.1);
    glVertex2f(xd, yd);
    glEnd();
    glFlush();
}

void keyboard(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_UP:
        //glTranslatef(0, 0.01, 0);
        ya=ya+0.01;
        yb=yb+0.01;
        yc=yc+0.01;
        yd=yd+0.01;
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        //glTranslatef(0, -0.01, 0);
        ya=ya-0.01;
        yb=yb-0.01;
        yc=yc-0.01;
        yd=yd-0.01;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        //glTranslatef(0.01, 0, 0);
        xa=xa+0.01;
        xb=xb+0.01;
        xc=xc+0.01;
        xd=xd+0.01;
        glutPostRedisplay();
        break;
    case GLUT_KEY_LEFT:
        //glTranslatef(-0.01, 0, 0);
        xa=xa-0.01;
        xb=xb-0.01;
        xc=xc-0.01;
        xd=xd-0.01;
        glutPostRedisplay();
        break;
    }
}

void keypress(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'r':
        glRotatef(1, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'c':
        glRotatef(-1, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'm':
        glScalef(1.1, 1.1, 1);
        glutPostRedisplay();
        break;
    case 'n':
        glScalef(0.9, 0.9, 1);
        glutPostRedisplay();
        break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 A1");
    glutDisplayFunc(display);
    glutSpecialFunc(keyboard);
    glutKeyboardFunc(keypress);
    glutMainLoop();
    return 0;
}
