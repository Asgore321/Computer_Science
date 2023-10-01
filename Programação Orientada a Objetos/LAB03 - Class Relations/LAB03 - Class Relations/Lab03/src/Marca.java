public class Marca {
    private Carro carros;
    private String nomeM;

    private Motor motores;

    Marca(String nomeM){
        this.nomeM = nomeM;
    }

    public void addCarros(String carros){
        this.carros = new Carro(carros);
    }
    public void addMotores(Motor motores){
        this.motores = motores;
    }

    public String returnC(){
        return this.carros.returnC();
    }

    public String returnM(){
        return this.nomeM;
    }

    public String returnMotores(){
        return this.motores.returnM();
    }
}
