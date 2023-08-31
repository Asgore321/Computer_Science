import java.util.Scanner;

class Produto {
    private int qtdEstoque;
    private String nome;
    private float preco;

    public Produto(int i){
        Scanner sc = new Scanner(System.in);
        System.out.printf("\nInforme o nome, o preco e a qtd. em estoque do produto %d:\n",i);
        String nome = sc.nextLine();
        float preco = sc.nextFloat();
        int qtEstoque = sc.nextInt();

        this.nome = nome;
        this.preco = preco>0 ? preco:0;
        this.qtdEstoque = Math.max(qtEstoque, 0);
    }

    public void printP(){
        System.out.printf("\nO produto %s tem preco %f e %d disponiveis no estoque.\n", nome,preco,qtdEstoque);
    }

    int alteraPreco(float porcen){
        float multiplicador;
        if(porcen < -100){
            return -1;
        }else{
            multiplicador = 1 + (porcen/100);
            preco = preco * multiplicador;
            return 1;
        }
    }

}

public class Main {
    public static void main(String[] args) {
        Produto[] products = new Produto[4];

        for(int i = 0;i < 4; i++){
            products[i] = new Produto(i);
        }

        System.out.print("\nAumentando o preco em 10% do produto 1 e 3\n");
        if((products[1].alteraPreco(10) != -1) && (products[3].alteraPreco(10) != -1)){
            System.out.print("\nPreco alterado com sucesso!!\n");
        }else{
            System.out.print("\nFalha ao alterar preco do produto.\n");
        }

        System.out.print("\nReduzindo o preco em 5% do produto 2\n");
        if(products[2].alteraPreco(-5) != -1){
            System.out.print("\nPreco alterado com sucesso!!\n");
        }else{
            System.out.print("\nFalha ao alterar preco do produto.\n");
        }

        System.out.print("\nAlterando invalidamente o preco do prod. 3");
        if(products[3].alteraPreco(-110) != -1){
            System.out.print("\nPreco alterado com sucesso!!\n");
        }else{
            System.out.print("\nFalha ao alterar preco do produto.\n");
        }

        System.out.print("\nprodutos Cadastrados:\n");
        for(int k = 0;k < 4; k++){
            products[k].printP();
        }
    }
}