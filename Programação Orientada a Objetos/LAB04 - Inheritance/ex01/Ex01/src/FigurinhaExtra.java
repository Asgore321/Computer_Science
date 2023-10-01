public class FigurinhaExtra {
    private String dataNascimento;
    private String nome;
    private String pais;
    private String pos;
    private Double altura,peso;

    private String categoria;

    private String cor;

    public FigurinhaExtra(String nomePais){
        this.pais = nomePais;
        this.nome = "Neymar";
        this.peso = 86.8;
        this.pos = "ATA";
        this.altura = 1.89;
        this.dataNascimento = "28/09/1996";
        this.cor = "Bronze";
        this.categoria = "Rookies";
    }
    public void alteraNome(String newNome){
        nome = newNome;
    }

    public void alteraCat(String newCat){
        this.categoria = newCat;
    }

    public void alteraCor(String newCor){
        this.categoria = newCor;
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

    public void MostraFigurinha(){
        System.out.println(nome);
        System.out.println(dataNascimento);
        System.out.println(pais);
        System.out.println(pos);
        System.out.println(altura);
        System.out.println(peso);
        System.out.println(categoria);
        System.out.println(cor);
    }
}
