#include <GL/glut.h>
#include <stdio.h>

void display(){
glClearColor(1.0, 1.0 , 1.0, 1.0); //Cor de limpeza
glClear(GL_COLOR_BUFFER_BIT);//Limpa o conteúdo da janela
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-150, 150, -150, 150);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();

glBegin(GL_QUADS); 
 glColor3f(0.0,0,3);
glVertex2d(-150, 150);
glVertex2d(-150, 70);
glVertex2d(150, 70);
glVertex2d(150, 150);
glEnd();


glBegin(GL_QUADS); 
glColor3d(1.0,1.0,0.0);
glVertex2d(75, 140);
glVertex2d(25, 90);
glVertex2d(75, 40);
glVertex2d(125, 90);
glEnd();


glBegin(GL_QUADS); 
glColor3d(0.0,1.0,0.0);
glVertex2d(-150, 70);
glVertex2d(-150, -150);
glVertex2d(150, -150);
glVertex2d(150, 70);
glEnd();



glBegin(GL_TRIANGLES);

    glColor3f(0,0,0);
  
    glVertex2f(0,70);
    glVertex2f(-150,-150);
    glVertex2f(150,-150);

glEnd();


glBegin(GL_TRIANGLE_STRIP);

    glColor3f(1,1,1);
    glVertex2f(-5,-100);
    glVertex2f(5,-100);
    glVertex2f(-8,-150);
    glVertex2f(8,-150);

glEnd();

glBegin(GL_TRIANGLE_STRIP);

    glColor3f(1,1,1);
    glVertex2f(-2,-20);
    glVertex2f(2,-20);
    glVertex2f(-4,-70);
    glVertex2f(4,-70);

glEnd();

glBegin(GL_TRIANGLE_STRIP);

    glColor3f(1,1,1);
    glVertex2f(-1,30);
    glVertex2f(1,30);
    glVertex2f(-2,0);
    glVertex2f(2,0);

glEnd();

glBegin(GL_TRIANGLE_STRIP);

    glColor3f(1,1,1);
    glVertex2f(-0.5,60);
    glVertex2f(0.5,60);
    glVertex2f(-1,40);
    glVertex2f(1,40);

glEnd();

glBegin(GL_TRIANGLE_STRIP);

    glColor3f(1,1,1);
    glVertex2f(-0.3,70);
    glVertex2f(0.3,70);
    glVertex2f(-0.5,65);
    glVertex2f(0.5,65);

glEnd();

int j;
for (j = 0; j < 1000000; j ++){
glBegin(GL_POINTS);
glColor3d(0,0,0);
//algoritmoBasicEquReta(0, 80, 0, 80);
//lineDDA(0, 80, 0, 80);
//Bresenham(0, 80, 0, 80);
glEnd();
}

glFlush();
}
int main(int argc, char **argv){
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(50, 50);
glutInitWindowSize(700, 700);
glutCreateWindow("RUN");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
