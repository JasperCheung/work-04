#include <stdio.h>
#include <string.h>
int main(){

  char ding[] = "jasper";
  char dong[213];
  //Copy String 
  strcpy( dong, ding); //( char * dest, char * array );
  printf("ding points to: %p\n", ding);
  printf("ding says: %s\n", ding); //jasper
  printf("dong points to: %p\n", dong);
  printf("dong says: %s\n", dong); //jasper
  
  char ping[] = "012345";
  char pong[231];
  char p[12];
  //Copy String for a specific number of charcters
  strncpy( pong, ping, 6);// ( char* dest, char* array, number)
  strncpy( p, ping, 3 );
  printf("ping points to: %p\n", ping);
  printf("ping says: %s\n", ping); // 012345
  printf("pong points to: %p\n", pong); 
  printf("pong says: %s\n", pong); // 012345
  printf("p points to: %p\n", p);
  printf("p says: %s\n", p); // 012
  
}
