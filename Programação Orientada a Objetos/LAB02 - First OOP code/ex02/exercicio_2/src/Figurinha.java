public class Figurinha {
    private String dataNascimento;
    private String nome;
    private String pais;
    private String pos;
    private Double altura,peso;
    public void alteraNome(String newNome){
        nome = newNome;
    }
    public void alteraData(String newData){
        dataNascimento = newData;
    }
    public void alteraPais(String newPais){
        pais = newPais;
    }
    public void alteraPos(String newPos){
        pos = newPos;
    }
    public void alteraH(Double newH){
        altura = newH;
    }
    public void alteraPeso(Double newPeso){
        peso = newPeso;
    }

    public void mostraNome(){
        System.out.printf("%s",nome);
    }
    public void mostraData(){
        System.out.printf("%s",dataNascimento);
    }
    public void mostraPais(){
        System.out.printf("%s",pais);
    }
    public void mostraPos(){
        System.out.printf("%s",pos);
    }
    public void mostraH(){
        System.out.printf("%.2f",altura);
    }
    public void mostraPeso(){
        System.out.printf("%.2f",peso);
    }
}
