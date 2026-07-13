#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void display() {
    glClearColor(0.100f, 0.120f, 0.160f, 0.6f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glLineWidth(1.0);
    glPointSize(5.0);

    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0, -1.0);
    glVertex2f(0.0,  1.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(-1.0, 0.0);
    glEnd();

    //Scotland
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.2f, 0.7f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.8f, 0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 1.0f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.3f, 0.7f);
    glVertex2f(-0.5f, 0.55f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 1.0f);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.5f, 0.45f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 1.0f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.4f, 0.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 1.0f);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.8f, 0.4f);
    glVertex2f(-0.6f, 0.5f);
    glEnd();

    //Somalia
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.7f, 1.0f);
    glVertex2f(0.8f, 0.7f);
    glVertex2f(0.2f, 0.7f);
    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.525f, 0.525f);
    glVertex2f(0.6f, 0.525f);
    glVertex2f(0.55f, 0.475f);
    glVertex2f(0.575f, 0.4f);
    glVertex2f(0.5f, 0.45f);
    glVertex2f(0.425f, 0.4f);
    glVertex2f(0.45f, 0.475f);
    glVertex2f(0.4f, 0.525f);
    glVertex2f(0.475f, 0.525f);
    glVertex2f(0.5f, 0.6f);
    glEnd();

    //Qatar
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.1f, 0.2f);
    glVertex2f(0.8f, -0.7f);
    glVertex2f(0.2f, -0.7f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.8f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.4f, -0.7f);
    glVertex2f(0.2f, -0.7f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.5f, -0.35f);
    glVertex2f(0.4f, -0.4f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.4f, -0.4f);
    glVertex2f(0.5f, -0.45f);
    glVertex2f(0.4f, -0.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.4f, -0.5f);
    glVertex2f(0.5f, -0.55f);
    glVertex2f(0.4f, -0.6f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.4f, -0.6f);
    glVertex2f(0.5f, -0.65f);
    glVertex2f(0.4f, -0.7f);
    glEnd();

    //Isreal
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.2f, -0.7f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.8f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.2f, 0.5f);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.2f, -0.7f);
    glVertex2f(-0.2f, -0.625f);
    glVertex2f(-0.8f, -0.625f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.2f, 0.5f);
    glVertex2f(-0.8f, -0.3f);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.2f, -0.375f);
    glVertex2f(-0.8f, -0.375f);
    glEnd();

    glLineWidth(7.0);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.2f, 0.5f);
    glVertex2f(-0.5, -0.4);
    glVertex2f(-0.4,  -0.55);
    glVertex2f(-0.6, -0.55);
    glVertex2f(-0.5, -0.4);
    glEnd();

    glLineWidth(7.0);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.2f, 0.5f);
    glVertex2f(-0.4, -0.45);
    glVertex2f(-0.5,  -0.6);
    glVertex2f(-0.6, -0.45);
    glVertex2f(-0.4, -0.45);
    glEnd();

    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(720, 480); // Set the window's initial width & height
    glutInitWindowPosition(180, 120);  // Set the window's initial position according to the monitor
    glutCreateWindow("Star"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
