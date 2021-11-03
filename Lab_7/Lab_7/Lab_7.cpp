#include <iostream> 
#include "windows.h" 
 
 
int main() { 
    setlocale(LC_ALL, "Russian");
 
 
    short n; 
    double x, y; 
    short h; //позиция точки на экране 
    float temp = 0; 
    for (n = 0; n < 5; n++) { 
        printf("|   x   |      y     |\n"); 
        printf("|-------|------------|\n"); 
        //цикл для одного периода 
        for (x = 0; x < 4; x += 0.25) { 
            if (x < 1) 
                y = sqrt(1 - (x - 1) * (x - 1)); 
            else 
                y = (4 - x) / 3; //else: x < 4 
            printf("| %5.2lf | %10.7lf |", x + n * 4, y); 
 
            h = y * 10; 
            if(x <= 2.25)
            {
                if (y * 10 - h >= 0.5) 
                    h++; 
                if (y >= 0.8) 
                    h++; 
            } 
            for ( ; h > 0; h--) printf(" "); 
            printf("*\n"); 
        } 
 
        printf("Нажмите клавишу Enter..."); 
        getchar(); 
    } 
    return 0; 
}