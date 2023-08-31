import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Figurinha[] jogadores = new Figurinha[3];
        Scanner sc = new Scanner(System.in);

        for (int i = 0;i < 3;i++){
            jogadores[i] = new Figurinha();
            System.out.printf("Escrava o nome do Jogador %d:", i+1);
            jogadores[i].alteraNome(sc.nextLine());
            System.out.printf("Escrava a POS do Jogador %d:", i+1);
            jogadores[i].alteraPos(sc.nextLine());
            System.out.printf("Escrava a data de Nascimento do Jogador %d:", i+1);
            jogadores[i].alteraData(sc.nextLine());
            System.out.printf("Escrava o PAIS do Jogador %d:", i+1);
            jogadores[i].alteraPais(sc.nextLine());
            System.out.printf("Escrava a Altura do Jogador %d:", i+1);
            jogadores[i].alteraH(sc.nextDouble());
            System.out.printf("Escrava o Peso do Jogador %d:", i+1);
            jogadores[i].alteraPeso(sc.nextDouble());
            sc.nextLine();
        }

        for (int p = 0; p < 3; p++){
            System.out.printf("\nA Altura do Jogador %d: ",p+1);
            jogadores[p].mostraH();
            System.out.printf("O Peso do Jogador %d: ",p+1);
            jogadores[p].mostraPeso();
            System.out.printf("\nO nome do Jogador %d: ",p+1);
            jogadores[p].mostraNome();
            System.out.printf("\nO pais do Jogador %d: ",p+1);
            jogadores[p].mostraPais();
            System.out.printf("\nA Pos do Jogador %d: ",p+1);
            jogadores[p].mostraPos();
            System.out.printf("\nA data de nascimento do Jogador %d: ",p+1);
            jogadores[p].mostraData();
        }
    }
}