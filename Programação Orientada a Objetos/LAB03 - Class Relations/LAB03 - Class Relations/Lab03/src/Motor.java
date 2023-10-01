public class Motor {
    private String nome;
    private int HP;

    private String marca;

    Motor(String nome, int HP, String marca){
        this.nome = nome;
        this.HP = HP;
        this.marca = marca;
    }

    public String returnM(){
        return this.nome;
    }
}
