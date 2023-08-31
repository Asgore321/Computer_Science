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

        System.out.printf("\nA Altura do Jogador 1: %.2f\n",jogador_1.altura);
        System.out.printf("O Peso do Jogador 1: %.2f\n",jogador_1.peso);
        System.out.printf("O nome do Jogador 1: %s\n",jogador_1.nome);
        System.out.printf("O pais do Jogador 1: %s\n",jogador_1.pais);
        System.out.printf("A Pos do Jogador 1: %s\n",jogador_1.pos);
        System.out.printf("A data de nascimento do Jogador 1: %s\n",jogador_1.dataNascimento);

        System.out.printf("\nA Altura do Jogador 2: %.2f\n",jogador_2.altura);
        System.out.printf("O Peso do Jogador 2: %.2f\n",jogador_2.peso);
        System.out.printf("O nome do Jogador 2: %s\n",jogador_2.nome);
        System.out.printf("O pais do Jogador 2: %s\n",jogador_2.pais);
        System.out.printf("A Pos do Jogador 2: %s\n",jogador_2.pos);
        System.out.printf("A data de nascimento do Jogador 2: %s\n",jogador_2.dataNascimento);

        System.out.printf("\nA Altura do Jogador 3: %.2f\n",jogador_3.altura);
        System.out.printf("O Peso do Jogador 3: %.2f\n",jogador_3.peso);
        System.out.printf("O nome do Jogador 3: %s\n",jogador_3.nome);
        System.out.printf("O pais do Jogador 3: %s\n",jogador_3.pais);
        System.out.printf("A Pos do Jogador 3: %s\n",jogador_3.pos);
        System.out.printf("A data de nascimento do Jogador 3: %s\n",jogador_3.dataNascimento);

    }
}