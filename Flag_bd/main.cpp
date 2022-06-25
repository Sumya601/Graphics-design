#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>


void display(){

    //National Flag

    glBegin(GL_POLYGON); //Using polygon fills the circle. //GL_POINTS
    glColor3f(0,.40,.28);
    glVertex2f(1,0.6);//W:H=5:3=1:0.6
    glVertex2f(1,-0.6);
    glVertex2f(-1,-0.6);
    glVertex2f(-1,0.6);
    glEnd();


    glBegin(GL_POLYGON); //Using polygon fills the circle. //GL_POINTS
    float r = 0.4;
    for (float theta=0; theta<360; theta+=0.001){
        //float x = r * cos((theta*2*pi)/360);
        float x = r * cos(theta);
        //float y = r * sin((theta*2*pi)/360);
        float y = r * sin(theta);
        glColor3f(0.85,0.16,0.11);
        glVertex2f(x,y);
    }
    glEnd();


    glFlush();


 }

int main(int argc, char **argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(500,500);
    glutCreateWindow("BD National Flag");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

 }
