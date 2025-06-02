#include <stdio.h>
typedef
struct
{
    float preco;
    float desconto;
}
Produto;
float valor( Produto p , int quantidade)
{
    return ((p.preco - p.desconto) *
     quantidade);
}
int main()
{
    Produto desodorante;
    desodorante.preco = 20.00;
    desodorante.desconto = 1.50;
    int N = 10;
    printf("Compra de %d desodorantes: R$%.2f\n",
    N, valor(desodorante, N));
    return 0;
}