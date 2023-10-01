public class FigurinhaExtra extends Figurinha{
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

    public void alteraCat(String newCat){
        this.categoria = newCat;
    }

    public void alteraCor(String newCor){
        this.categoria = newCor;
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
