programa {
  funcao inicio() {
    //Declaração de Variaveis
      real Altura, Peso_Ideal

    //Declaração de Constantes
      const real k = 72.7
      const inteiro b = 58

    //Entrada de Dados
      escreva("Infome a sua Altura: ")
      leia(Altura)

    //Porcessamento
      Peso_Ideal = (k * Altura) - b

    //Saída de Dados
      escreva("O seu Peso Ideal é de: ", Peso_Ideal)      
  }
}
