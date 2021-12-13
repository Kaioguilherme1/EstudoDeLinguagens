package alivro;

public class MainLivro {
    

    public static void main(String[] args){

        Livro objlivro = new Livro();

        objlivro.Autor = "machado de Assis";
        objlivro.editora = "NovaTec";
        objlivro.titulo = "Memórias Postulas de Brácubas";
        objlivro.setPaginas(150);


        System.out.println("\n# Livro");
        System.out.println("Título: "+ objlivro.obterTitulo());
        System.out.println("Autor: " + objlivro.Autor);
        System.out.println("Editora: " + objlivro.editora);
        System.out.println("Isbn: " + objlivro.getIsbn());
        System.out.println("Paginas: " + objlivro.getpaginas());
        System.out.println("Emprestado: " + objlivro.estaEmprestado);
        
        

        
   }
}
