package alivro;

public class Livro {
    
    //atributos
    String titulo;
    private String isbn = "nb323213e";
    String editora;
    String Autor;
    private int paginas;
    boolean estaEmprestado = false;

    //Métodos
    void emprestar(){
        this.estaEmprestado = true;

    }

    public String getIsbn() {
        return isbn;
    }

    public void setIsbn(String isbn) {
        this.isbn = isbn;
    }

    void devolver(){
        this.estaEmprestado = false;
    }

    void reservar(){
        //implementado na imaginação
    }

    String obterAutor(){
        return this.Autor;
    }

    String obterTitulo(){
        return this.titulo;
    }

    public void setPaginas(int paginas) {
        this.paginas = paginas;
    }

    public int getpaginas() {
        return this.paginas;
    }
}
