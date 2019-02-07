#include <iostream>

#include <string.h>

#include <stdio.h>

using namespace std;

void ispalin(char str[]){
 
    int l = 0;
 
    int h = strlen(str) - 1;
 
    while (h > l)
 
    {
 
        if (str[l++] != str[h--])
 
        {
 
            printf("NO");
 
            return;
 
        }

    }

    printf("YES");
 
}
 
int main(){

	char str[256];

	cin >> str;

	ispalin(str);

	return 0;

}
