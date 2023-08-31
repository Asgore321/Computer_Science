import java.util.Scanner;

import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class Main {
    public static void ex01(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[6];
        System.out.print("<< Listando um vetor >>");
        System.out.print("\nEntre com o número 1:");
        vetor[0] = sc.nextInt();
        System.out.print("\nEntre com o número 2:");
        vetor[1] = sc.nextInt();
        System.out.print("\nEntre com o número 3:");
        vetor[2] = sc.nextInt();
        System.out.print("\nEntre com o número 4:");
        vetor[3] = sc.nextInt();
        System.out.print("\nEntre com o número 5:");
        vetor[4] = sc.nextInt();
        System.out.print("\nEntre com o número 6:");
        vetor[5] = sc.nextInt();
        System.out.printf("\nO vetor de inteiros: %d %d %d %d %d %d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5]);

    }

    public static void ex02(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[6];
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 6; i++) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
        }
        System.out.printf("\nO vetor de inteiros: %d %d %d %d %d %d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5]);

    }

    public static void ex03(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[6];
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 6; i++) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
        }
        System.out.print("<< Listando o vetor criado >>");
        for (int k = 5; k >= 0; k--){
            System.out.printf("\nVetor %d : %d",k,vetor[k]);
        }
    }

    public static void ex04(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[6];
        int i = 0;
        System.out.print("<< Listando um vetor >>");
        while (i != 6) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
            if ((vetor[i] % 2) != 0){
                System.out.print("ERRO: Numero Ímpar");
            }else {
                i++;
            }
        }
        System.out.printf("\nO vetor de inteiros: %d %d %d %d %d %d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5]);

    }

    public static void ex05(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[5];
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 5; i++) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
        }
        System.out.print("<< Listando o vetor criado >>");
        for (int k = 0;k < 5;k++){
            System.out.printf("\nVetor %d : %d",k,vetor[k]);
        }
        int maior = 0;
        int menor = 0;
        int media = 0;
        for (int i = 0; i < 5; i++) {
            if(i == 0){
                maior = vetor[i];
                menor = vetor[i];
            }else {
                if (maior < vetor[i]) {
                    maior = vetor[i];
                }
                if (menor > vetor[i]) {
                    menor = vetor[i];
                }
            }
            media += vetor[i];
        }
        media = media/5;
        System.out.printf("\n O maior numero eh: %d\nO menor numero eh: %d\nA media eh: %d\n",maior,menor,media);
    }

    public static void ex06(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[5];
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 5; i++) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
        }
        System.out.print("<< Listando o vetor criado >>");
        for (int k = 0;k < 5;k++){
            System.out.printf("\nVetor %d : %d",k,vetor[k]);
        }
        int maior = 0;
        int menor = 0;
        int media = 0;
        int posMaior = 0;
        int posMenor = 0;
        for (int i = 0; i < 5; i++) {
            if(i == 0){
                maior = vetor[i];
                menor = vetor[i];
            }else {
                if (maior < vetor[i]) {
                    maior = vetor[i];
                    posMaior = i;
                }
                if (menor > vetor[i]) {
                    menor = vetor[i];
                    posMenor = i;
                }
            }
            media += vetor[i];
        }
        media = media/5;
        System.out.printf("\n O maior numero eh: %d, de posicao %d\nO menor numero eh: %d, de posicao %d\nA media eh: %d\n",maior,posMaior,menor,posMenor,media);
    }

    public static void ex07(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[5];
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 5; i++) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
        }
        System.out.print("<< Listando o vetor criado >>");
        for (int k = 0;k < 5;k++){
            System.out.printf("\nVetor %d : %d",k,vetor[k]);
        }
        int maior = 0;
        int menor = 0;
        int posMaior = 0;
        int posMenor = 0;
        for (int i = 0; i < 5; i++) {
            if(i == 0){
                maior = vetor[i];
                menor = vetor[i];
            }else {
                if (maior < vetor[i]) {
                    maior = vetor[i];
                    posMaior = i;
                }
                if (menor > vetor[i]) {
                    menor = vetor[i];
                    posMenor = i;
                }
            }
        }
        int p = 100/maior;
        System.out.print("<< Notas Normalizadas >>");
        for (int v = 0;v < 5;v++){
            System.out.printf("A nota %d eh: %d",v,vetor[v]*p);
        }
    }

    public static void ex08(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[5];
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 5; i++) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
        }
        System.out.print("<< Listando o vetor criado >>");
        for (int k = 0;k < 5;k++){
            System.out.printf("\nVetor %d : %d",k,vetor[k]);
        }

        float media = 0;
        for (int i = 0; i < 5; i++) {
            media += vetor[i];
        }
        media = media/5;
        float dP = 0;
        float[] desvioP = new float[5];
        for (int i = 0; i < 5; i++) {
            desvioP[i] = (float) pow(sqrt(pow(vetor[i] - media,2)),2);
            dP = dP + desvioP[i];
        }
        dP = (float) sqrt(dP/5);
        System.out.printf("O valor da media eh %f, e o desvio padrao eh %f",media,dP);
    }

    public static void ex09(){
        Scanner sc = new Scanner(System.in);
        int n = 0;
        System.out.print("<< Listando um vetor >>");
        System.out.printf("\nEntre com o número de alunos:");
        n = sc.nextInt();
        if (n > 100){
            System.out.print("\n<< Valor invalido, o numero maximo de alunos eh 100 >>");
            return;
        }
        int[] vetor = new int[n];
        System.out.print("\n<< Insira a nota dos alunos >>");
        for (int k = 0;k < n;k++){
            System.out.printf("\nA nota do aluno %d :",k+1);
            vetor[k] = sc.nextInt();
        }
        float media = 0;
        for (int i = 0; i < n; i++) {
            System.out.printf("\nA nota do aluno %d eh %d",i+1,vetor[i]);
            media += vetor[i];
        }
        media = media/n;
        System.out.printf("\nO valor da media eh %f",media);
    }

    public static void ex10(){
        Scanner sc = new Scanner(System.in);
        int[] vetorA = new int[3];
        int[] vetorB = new int[3];
        int[] vetorR = new int[3];
        char a = 'A';
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 3; i++) {
            System.out.printf("\nEntre com o número %d de %c:", i + 1, a);
            vetorA[i] = sc.nextInt();
        }
        a = 'B';
        for (int i = 0; i < 3; i++) {
            System.out.printf("\nEntre com o número %d de %c:", i + 1, a);
            vetorB[i] = sc.nextInt();
        }
        for (int i = 0; i < 3; i++) {
            vetorR[i] = vetorA[i]-vetorB[i];
        }
        a = 'C';
        System.out.printf("\n O vetor %c definido como, C = A - B eh, (%d,%d,%d)",a,vetorR[0],vetorR[1],vetorR[2]);
    }
    public static void ex11(){
        Scanner sc = new Scanner(System.in);
        int[] vetorA = new int[5];
        int[] vetorI = new int[5];
        int[] vetorP = new int[5];
        int p = 0;
        int imp = 0;
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 5; i++) {
            System.out.printf("\nEntre com o número %d:", i + 1);
            vetorA[i] = sc.nextInt();
            if (vetorA[i] % 2 == 0) {
                vetorP[p] = vetorA[i];
                p += 1;
            } else {
                vetorI[imp] = vetorA[i];
                imp += 1;

            }
        }
        System.out.print("\nImpares:");
        for (int i = 0; i < imp; i++) {
            if (i > 0){
                System.out.print(",");
            }
            System.out.printf("%d",vetorI[i]);
        }
        System.out.print("\nPares:");
        for (int i = 0; i < p; i++) {
            if (i > 0){
                System.out.print(",");
            }
            System.out.printf("%d",vetorP[i]);
        }
    }

    public static void ex12(){
        Scanner sc = new Scanner(System.in);
        int verm = 0;
        int amar = 0;
        int azul = 0;
        int verd = 0;
        String[] cores = new String[4];
        cores[0] = "Vermelho";
        cores[1] = "Verdes";
        cores[2] = "Amarelas";
        cores[3] = "Azuis";
        System.out.print("\nVermelhas:");
        verm = sc.nextInt();
        System.out.print("\nAmarelas:");
        amar = sc.nextInt();
        System.out.print("\nVerdes:");
        verd = sc.nextInt();
        System.out.print("\nAzus:");
        azul = sc.nextInt();
        int t = verd + verm + azul + amar;
        float[] porcen = new float[4];
        porcen[0] = ((float) verm / t) * 100;
        porcen[1] = ((float) verd / t) * 100;
        porcen[2] = ((float) amar / t) * 100;
        porcen[3] = ((float) azul / t) * 100;
        int maior = 0;
        for (int x = 0; x < 4; x++){
            if (porcen[maior] < porcen[x])
                maior = x;
        }
        for (int h = 0; h < 4; h++){
            System.out.printf("%s:%.1f",cores[h],porcen[h]);
            if (h == maior) System.out.print("<<<< Maior probabilidade");
            System.out.print("\n1");
        }
    }

    public static void ex13(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[5];
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 5; i++) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
        }
        for (int i = 0; i < 5; i++) {
            if (vetor[i] < 0) vetor[i] = 0;
        }
        System.out.printf("\nZerando os negativos, obtem-se: %d %d %d %d %d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
    }

    public static void ex14(){
        Scanner sc = new Scanner(System.in);
        int n = 0;
        System.out.print("<< Universidade X >>");
        System.out.printf("\nEntre com o número de alunos:");
        n = sc.nextInt();
        if (n > 10000){
            System.out.print("\n<< Valor invalido, o numero maximo de alunos eh 10000 >>");
            return;
        }
        float[] cra = new float[n];
        int[] naluno = new int[n];
        char[] classe = new char[n];
        System.out.print("\n<< Insira os dados dos alunos >>");
        for (int k = 0;k < n;k++){
            System.out.printf("\nO numero do aluno %d :",k+1);
            naluno[k] = sc.nextInt();
            System.out.printf("\nO CRA do aluno %d :",k+1);
            cra[k] = sc.nextFloat();
            System.out.printf("\nA classe do aluno %d :",k+1);
            classe[k] = sc.next().charAt(0);
        }
        for (int i = 0; i < n; i++) {
            System.out.printf("\nO numero do aluno %d eh %d",i+1,naluno[i]);
            System.out.printf("\nO CRA do aluno %d eh %.2f",i+1,cra[i]);
            System.out.printf("\nA classe do aluno %d eh %c",i+1,classe[i]);
            System.out.print("\n\n\n");
        }
    }

    public static void ex16(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[8];
        int[][] repet = new int[8][2];
        int nr = 0;
        boolean check = true;
        boolean y = true;
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 8; i++) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
        }
        for (int z = 0; z < 8; z++) {
            for (int l = 0;l < nr; l++){
                if (vetor[z]==repet[l][0]) {
                    repet[l][1]++;
                    y = false;
                }
            }
            if (y){
                for (int c = 0; c < 8; c++){
                    if ((z != c) && (vetor[z] == vetor[c])){
                        for (int l = 0;l < nr; l++){
                            if (vetor[z]==repet[l][0]) {
                                check = false;
                            }
                        }
                        if (nr == 0){
                            check = true;
                        }
                        if (check){
                            repet[nr][0] = vetor[z];
                            repet[nr][1] = 1;
                            nr++;
                        }
                    }
                }
            }
            y = true;
            check = true;
        }
        System.out.print("\nNumeros repetidos:");
        for (int k = 0;k < nr;k++){
            System.out.printf("\nO numero %d repete %d vezes",repet[k][0],repet[k][1]);
        }
    }

    public static void ex15(){
        Scanner sc = new Scanner(System.in);
        int[] vetor = new int[8];
        int[] repet = new int[8];
        int nr = 0;
        int check = 1;
        System.out.print("<< Listando um vetor >>");
        for (int i = 0; i < 8; i++) {
            System.out.printf("\nEntre com o número %d:", i+1);
            vetor[i] = sc.nextInt();
        }
        for (int z = 0; z < 8; z++) {
            for (int c = 0; c < 8; c++){
                if ((z != c) && (vetor[z] == vetor[c])){
                    for (int l = 0;l < nr; l++){
                        if (vetor[z]==repet[l]) {
                            check = 0;
                        }
                    }
                    if (nr == 0){
                        check = 1;
                    }
                    if (check == 1){
                        repet[nr] = vetor[z];
                        nr++;
                    }
                }
            }
            check = 1;
        }
        System.out.print("\nNumeros repetidos:");
        for (int n = 0; n < nr; n++){
            System.out.printf(" %d ",repet[n]);
        }
    }

    public static void main(String[] args) {
        ex01();
        ex02();
        ex03();
        ex04();
        ex05();
        ex06();
        ex07();
        ex08();
        ex09();
        ex10();
        ex11();
        ex12();
        ex13();
        ex14();
        ex15();
        ex16();


    }

}