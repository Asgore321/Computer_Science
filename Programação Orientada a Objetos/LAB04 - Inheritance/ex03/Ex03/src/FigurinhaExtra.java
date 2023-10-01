public class FigurinhaExtra extends Figurinha{
    private String categoria;
    private String cor;

    public FigurinhaExtra(){
        super("Brasil");
        this.cor = "Bronze";
        this.categoria = "Rookies";
    }

    public FigurinhaExtra(Figurinha ant, String cor, String categoria){
        super(ant.getNomePais());
        this.cor = cor;
        this.categoria = categoria;
    }

    public void alteraCat(String newCat){
        this.categoria = newCat;
    }

    public void alteraCor(String newCor){
        this.categoria = newCor;
    }

    public void MostraFigurinha(){
        super.MostraFigurinha();
        System.out.println(categoria);
        System.out.println(cor);
    }
}
