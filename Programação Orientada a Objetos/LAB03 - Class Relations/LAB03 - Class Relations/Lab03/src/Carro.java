public class Carro {
    private String marca;
    private String nome;

    private Motor motorC;

    Carro(String nome){
        this.nome = nome;
    }

    public void setMotorC(Motor motorC){
        this.motorC = motorC;
    }

    public void addM(String marca){
        this.marca = marca;
        return;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public String returnC(){
        return this.nome;
    }

    public String returnM(){
        return this.marca;
    }

    public String returnMotor(){
        return this.motorC.returnM();
    }
}
