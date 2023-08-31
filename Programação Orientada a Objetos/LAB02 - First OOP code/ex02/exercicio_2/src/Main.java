import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Figurinha jogador_1,jogador_2,jogador_3;
        Scanner sc = new Scanner(System.in);

        jogador_1 = new Figurinha();
        System.out.print("Escrava o nome do Jogador 1:");
        jogador_1.alteraNome(sc.nextLine());
        System.out.print("Escrava a POS do Jogador 1:");
        jogador_1.alteraPos(sc.nextLine());
        System.out.print("Escrava a data de Nascimento do Jogador 1:");
        jogador_1.alteraData(sc.nextLine());
        System.out.print("Escrava o PAIS do Jogador 1:");
        jogador_1.alteraPais(sc.nextLine());
        System.out.print("Escrava a Altura do Jogador 1:");
        jogador_1.alteraH(sc.nextDouble());
        System.out.print("Escrava o Peso do Jogador 1:");
        jogador_1.alteraPeso(sc.nextDouble());

        jogador_2 = new Figurinha();
        System.out.print("Escrava o nome do Jogador 2:");
        sc.nextLine();
        jogador_2.alteraNome(sc.nextLine());
        System.out.print("Escrava a POS do Jogador 2:");
        jogador_2.alteraPos(sc.nextLine());
        System.out.print("Escrava a data de Nascimento do Jogador 2:");
        jogador_2.alteraData(sc.nextLine());
        System.out.print("Escrava o PAIS do Jogador 2:");
        jogador_2.alteraPais(sc.nextLine());
        System.out.print("Escrava a Altura do Jogador 2:");
        jogador_2.alteraH(sc.nextDouble());
        System.out.print("Escrava o Peso do Jogador 2:");
        jogador_2.alteraPeso(sc.nextDouble());

        jogador_3 = new Figurinha();
        System.out.print("Escrava o nome do Jogador 3:");
        sc.nextLine();
        jogador_3.alteraNome(sc.nextLine());
        System.out.print("Escrava a POS do Jogador 3:");
        jogador_3.alteraPos(sc.nextLine());
        System.out.print("Escrava a data de Nascimento do Jogador 3:");
        jogador_3.alteraData(sc.nextLine());
        System.out.print("Escrava o PAIS do Jogador 3:");
        jogador_3.alteraPais(sc.nextLine());
        System.out.print("Escrava a Altura do Jogador 3:");
        jogador_3.alteraH(sc.nextDouble());
        System.out.print("Escrava o Peso do Jogador 3:");
        jogador_3.alteraPeso(sc.nextDouble());

        System.out.print("\nA Altura do Jogador 1: ");
        jogador_1.mostraH();
        System.out.print("O Peso do Jogador 1: ");
        jogador_1.mostraPeso();
        System.out.print("\nO nome do Jogador 1: ");
        jogador_1.mostraNome();
        System.out.print("\nO pais do Jogador 1: ");
        jogador_1.mostraPais();
        System.out.print("\nA Pos do Jogador 1: ");
        jogador_1.mostraPos();
        System.out.print("\nA data de nascimento do Jogador 1: ");
        jogador_1.mostraData();

        System.out.print("\nA Altura do Jogador 2: ");
        jogador_2.mostraH();
        System.out.print("O Peso do Jogador 2: ");
        jogador_2.mostraPeso();
        System.out.print("\nO nome do Jogador 2: ");
        jogador_2.mostraNome();
        System.out.print("\nO pais do Jogador 2: ");
        jogador_2.mostraPais();
        System.out.print("\nA Pos do Jogador 2: ");
        jogador_2.mostraPos();
        System.out.print("\nA data de nascimento do Jogador 2: ");
        jogador_2.mostraData();

        System.out.print("\nA Altura do Jogador 3: ");
        jogador_3.mostraH();
        System.out.print("O Peso do Jogador 3: ");
        jogador_3.mostraPeso();
        System.out.print("\nO nome do Jogador 3: ");
        jogador_3.mostraNome();
        System.out.print("\nO pais do Jogador 3: ");
        jogador_3.mostraPais();
        System.out.print("\nA Pos do Jogador 3: ");
        jogador_3.mostraPos();
        System.out.print("\nA data de nascimento do Jogador 3: ");
        jogador_3.mostraData();
    }
}