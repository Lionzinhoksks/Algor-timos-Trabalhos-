programa {
  funcao inicio() {
    //Declaração de Variáveis
      real X, Y, Troca
    
    //Entrada de Dados
      escreva("Informe um valor para X: ", "\n")
      leia(X)
      escreva("Informe um valor para Y: ", "\n")
      leia(Y)
    
    //Processamento
      escreva("Valores de X e Y antes da troca:\n")
      escreva(X, "\n")
      escreva(Y, "\n")

      Troca = X
      X = Y
      Y = Troca
    
    //Saída de Dados
      escreva("Valores de X e Y após a troca:\n")
      escreva(X, "\n")
      escreva(Y)
  }
}
