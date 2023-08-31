import java.util.Scanner;

class Produto {
    private int qtdEstoque;
    private String nome;
    private float preco;

    public void criaP(){
        Scanner nw = new Scanner(System.in);
        System.out.printf("\nInforme o nome, o preco e a qtd. em estoque do produto");
        String nomeP = nw.nextLine();
        float preco = nw.nextFloat();
        int qtd = nw.nextInt();

        this.qtdEstoque = qtd;
        this.nome = nomeP;
        this.preco = preco;
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

public class ex02 {
    public static void main(String[] args) {
        Produto[] produtos = new Produto[4];

        for(int i = 0;i < 4; i++){
            produtos[i].criaP();
        }

        System.out.printf("\nAumentando o preco em 10%% do produto 1 e 3\n");
        if((produtos[1].alteraPreco(10) != -1) && (produtos[3].alteraPreco(10) != -1)){
            System.out.printf("\nPreco alterado com sucesso!!\n");
        }else{
            System.out.printf("\nFalha ao alterar preco do produto.\n");
        }

        System.out.printf("\nReduzindo o preco em 5%% do produto 2\n");
        if(produtos[2].alteraPreco(-5) != -1){
            System.out.printf("\nPreco alterado com sucesso!!\n");
        }else{
            System.out.printf("\nFalha ao alterar preco do produto.\n");
        }

        System.out.printf("\nAlterando invalidamente o preco do prod. 3");
        if(produtos[3].alteraPreco(-110) != -1){
            System.out.printf("\nPreco alterado com sucesso!!\n");
        }else{
            System.out.printf("\nFalha ao alterar preco do produto.\n");
        }

        System.out.printf("\nprodutos Cadastrados:\n");
        for(int k = 0;k < 4; k++){
            produtos[k].printP();
        }
    }
}