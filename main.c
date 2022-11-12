int main(void)
{
    int en,boy,i;

    printf("Kisa kenarý giriniz( en ): ");
    scanf("%d",&en);

    printf("Uzun kenari giriniz( boy ): ");
    scanf("%d",&boy);

    for(i = 0; i < en; i++)
    {
        printf("*");
        printf(" ");

    }

    printf("\n");



    for (int i = 1; i <= boy; i++)
    {
    for(int j = 0; j < i; j++) {
        printf(" ");
     }
   if(i!= boy)
   {
    printf("*");
     for(int m = 0; m <= (en); m++) {
     printf(" ");
     if((m) == en)
     printf("*");

     }
     printf("\n");
     }

     if(i == boy){
        for(int t = 0; t < en; t++) {
        printf("*");
        printf(" ");
     }


     }
     }






}
