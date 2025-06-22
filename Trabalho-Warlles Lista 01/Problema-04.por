programa {
  funcao inicio() {
    //Declaração de Variáveis
      real Valor_1, Valor_2, Valor_3, Media_Aritmetica
    
    //Entrada de Dados
      escreva("Informe o valor gasto com combustível em, Janeiro:\n")
      leia(Valor_1)
      escreva("Informe o valor gasto com combustível em, Fevereiro:\n")
      leia(Valor_2)
      escreva("Informe o valor gasto com combustível em, Março:\n")
      leia(Valor_3)
    
    //Processamento
      Media_Aritmetica = (Valor_1 + Valor_2 + Valor_3)/3
    
    //Saída de Dados
      escreva("A média de gastos, com combustível, nos 3 primeiros meses \n")
      escreva("do ano foi de: ", Media_Aritmetica)
  }
}
