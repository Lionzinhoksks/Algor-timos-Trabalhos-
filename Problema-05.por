programa {
  funcao inicio() {
    //Declaração de Varáveis
      real Altura, Peso_Ideal
    
    //Declaração de Constantes
      const real K = 72.7
      const inteiro B = 58
    
    //Entrada de Dados
      escreva("Informe a sua Altura:\n")
      leia(Altura)
    
    //Processamento
      Peso_Ideal = (K * Altura) - B
    
    //Saída de Dados
      escreva("O seu Peso Ideal é de: ", Peso_Ideal)
  }
}
