 #include <stdio.h>
#include <conio.h>

void tower of hanoi(int piringan, char dari, char bantu, char ke)
{
  if(piringan>0)
  {
      hanoi(piringan-1, dari, ke, bantu);
      printf("Pindahkan piringan %d dari %c ke %c\n",piringan, dari, ke);
      hanoi(piringan-1, bantu, dari, ke);
 
}
}

int main()
{
  int piringan;
  printf("Berapa banyak piringan ? ");scanf("%d", &piringan);
  printf("\n");
  hanoi(piringan, 'A', 'B', 'C');
  getch();
}
