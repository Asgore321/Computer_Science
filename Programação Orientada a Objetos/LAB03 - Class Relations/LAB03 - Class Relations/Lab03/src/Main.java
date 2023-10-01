public class Main {
    public static void main(String[] args) {
        Carro c1 = new Carro("McLaren Senna");
        Marca m1 = new Marca("McLaren");
        Motor motor1 = new Motor("V8 biturbo 4.0",880, m1.returnM());
        c1.addM(m1.returnM());
        m1.addCarros(c1.returnC());
        c1.setMotorC(motor1);
        m1.addMotores(motor1);
        System.out.println(c1.returnM()+" "+m1.returnC());
        System.out.println(c1.returnMotor()+" "+m1.returnMotores());
        //Relação de Associação entre c1 e m1
        //Relação de Composição entre c1 e motor1
        //Relação de Agregação entre m1 e motor1

    }
}