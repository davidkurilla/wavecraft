#include <Windows.h>
#include <gl/GL.h>

void drawRect(float x, float y, float width, float height)
{
    // Start Rendering
    glBegin(GL_QUADS);

    // Object Data
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(x, y);
    glVertex2f(x + width, y);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(x + width, y + height);
    glVertex2f(x, y + height);

    // Stop Rendering
    glEnd();
}

void initGraphics()
{
    glViewport(0, 0, 500, 500);
}

void renderFrame()
{
    // Set Clear Color
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);

    // Clear
    glClear(GL_COLOR_BUFFER_BIT);

    drawRect(0.0f, 0.0f, 0.5f, 0.5f);
}