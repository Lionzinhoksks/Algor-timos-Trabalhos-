programa 
{ inclua biblioteca Matematica--> mat
  funcao inicio() {
    //Declaração de Variáveis
      real D_diametro, A_area, C_comprimento, R_raio
    
    //Declaração de Constantes
      const real PI = 3.141592653589793

    //Entrada de Dados
      escreva("Informe o Raio da circunferência: ")
      leia(R_raio)
    
    //Processamento
      escreva("Dado o valor de ", R_raio, " para o Raio da circunferência, temos:\n")
      D_diametro = R_raio * 2
      A_area = PI * mat.potencia(R_raio, 2)
      C_comprimento = 2 * PI * R_raio
    
    //Saída de Dados
      escreva("Diâmetro da circunferência = ", D_diametro, "\n")
      escreva("Área da circunferência = ", A_area, "\n")
      escreva("Comprimento da circunferência = ", C_comprimento, "\n")
  }
}
