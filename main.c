//�ndril Castilho 78226 e Fernando Kudrna
#include <stdio.h>
#include <stdlib.h>

int main()
{   int n, x, exit=0;
    char opt;
    printf("CADASTRO DE VEICULOS \n");
    printf("Quantos veiculos deseja cadastrar? (max 50) \n");
    scanf("%d",&n);
    if (n<0||n>50)
    {   while (n<0||n>50)
        {   printf("Quantidade incompat�vel, por favor, digite um numero menor ou igual a 50:");
            scanf("%d",&n);
        }
    }
    printf("ESCOLHA UM COMANDO: (digite em letra minuscula)\n");
    while (x<=n||exit==0)
    {   printf("A) Inserir um veiculo \n");
        printf("B) Excluir um veiculo \n");
        printf("C) Pesquisar um veiculo \n");
        printf("D) Sair \n");
        scanf("%c",&opt);
            switch(opt)
            {   case 'A':
                case 'a':
                Inserir(n);
                x++;
                break;
                case 'B':
                case 'b':
                Excluir(n);
                x--;
                break;
                case 'C':
                case 'c':
                Pesquisar(n);
                break;
                case 'D':
                case 'd':
                exit=Sair();
                break;
            }
    }
    return 0;
}
//Fernando
//N�o use o x da main pra fazer a posi��o das fun��es, ele s� serve pra contar quantos carros est�o cadastrados
//N�o mexe no codigo de cima sem me avisar, no m�ximo dentro dos cases de inserir e excluir ou para criar variaveis.
Inserir(int n)
{

}

Excluir(int n)
{

}
//Aqui pra baixo tu n�o mexe tbm sem me avisar
Pesquisar(int n)
{

}

int Sair()
{   int exit=1;
    return (exit)
}
