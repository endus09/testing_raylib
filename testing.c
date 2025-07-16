#include <stdio.h>
#include <stdint.h>
#include "raylib.h"

int main(void){
    printf("Hello World");

    InitWindow(800,450,"raylib -basic window");

    while(!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Hello World", 190, 200, 20, RED);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}