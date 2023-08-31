import java.util.Scanner;

public class Selecao {
    Figurinha[] jogadores = new Figurinha[11];
    Figurinha tecnico = new Figurinha();

    String nomeS = new String();

    public Selecao(){

    }
    public Selecao(String nomeSelecao, String nomeTecnico){
        this.nomeS = nomeSelecao;
        this.tecnico.alteraNome(nomeTecnico);
        for (int i = 0;i < 11; i++){
            jogadores[i] = new Figurinha(nomeSelecao);
        }
    }

    public void criaS(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Escrava o nome da Seleção :");
        nomeS = sc.nextLine();
        for (int i = 0;i < 11;i++){
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
        System.out.println("Escrava o nome do Tecnico :");
        tecnico.alteraNome(sc.nextLine());
        tecnico.alteraPos("Tecnico");
        System.out.println("Escrava a data de Nascimento do Tecnico :");
        tecnico.alteraData(sc.nextLine());
        System.out.println("Escrava o PAIS do Tecnico :");
        tecnico.alteraPais(sc.nextLine());
        System.out.println("Escrava a Altura do Tecnico :");
        tecnico.alteraH(sc.nextDouble());
        System.out.println("Escrava o Peso do Tecnico :");
        tecnico.alteraPeso(sc.nextDouble());
        sc.nextLine();
    }

    public void mostraS(){
        System.out.println("O nome da Seleção : "+nomeS);
        for (int s = 0; s < 11; s++){
            System.out.printf("Nome do %d jogador: ",s+1);
            jogadores[s].mostraNome();
            System.out.print("\n");
        }
        System.out.print("Nome do Tecnico: ");
        tecnico.mostraNome();
    }
}
