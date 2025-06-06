programa {
  funcao inicio() {
    //Declaração de Variáveis
      real Valor1, Valor2, Valor3, Media_Aritmetica

    //Entrada de Dados
      escreva("Informe o valor gasto no mês de Janeiro: ")
      leia(Valor1)
      escreva("Informe o valor gasto no mês de Fevereiro: ")
      leia(Valor2)
      escreva("Informe o valor gasto no mês de Março: ")
      leia(Valor3)

    //Processamento
      Media_Aritmetica = (Valor1 + Valor2 + Valor3)/3

    //Saída de Dados
      escreva("O valor gasto com combustível nos 3 primeiros meses do \n")
      escreva("ano foi de: ", Media_Aritmetica)      
  }
}
