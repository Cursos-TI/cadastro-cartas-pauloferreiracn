# Copilot Instructions for AI Agents

## Visão Geral do Projeto
Este repositório implementa o desafio "Super Trunfo - Países", focado no cadastro e manipulação de cartas representando cidades de diferentes estados de um país fictício. O código principal está em `CartasSuperTrunfo.c`.

## Estrutura e Componentes
- **CartasSuperTrunfo.c**: Contém toda a lógica do cadastro, exibição e (nos níveis avançados) comparação das cartas.
- Não há separação em múltiplos arquivos fonte; todo o fluxo está centralizado neste arquivo.

## Fluxo de Dados
- O usuário cadastra cartas via terminal, informando propriedades como população, área, PIB e pontos turísticos.
- As cartas são identificadas por um código composto por uma letra (estado) e número (cidade), ex: `A01`, `B03`.
- Os dados são exibidos de forma organizada após o cadastro.

## Níveis de Complexidade
- **Novato**: Cadastro e exibição simples das cartas.
- **Aventureiro**: Adiciona propriedades calculadas para análise detalhada.
- **Mestre**: Implementa comparações entre cartas usando operadores relacionais.

## Convenções e Padrões
- Use `scanf` para entrada e `printf` para saída.
- Estruturas (`struct`) são usadas para representar cartas.
- Siga o padrão de código sequencial, sem modularização avançada.
- Nomes de variáveis e funções em português, descritivos e sem abreviações excessivas.

## Workflows de Desenvolvimento
- **Compilação**: Use o comando abaixo para compilar o arquivo principal:
  ```bash
  gcc CartasSuperTrunfo.c -o CartasSuperTrunfo
  ```
- **Execução**:
  ```bash
  ./CartasSuperTrunfo
  ```
- Não há testes automatizados ou scripts auxiliares.
- Debugging pode ser feito via VS Code ou GDB, mas não há configuração específica fornecida.

## Exemplos de Padrão
```c
struct Carta {
    char codigo[4];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
};
```

## Observações
- Não utilize bibliotecas externas.
- Mantenha o código simples e didático, priorizando clareza.
- Consulte o `README.md` para detalhes sobre regras e objetivos dos níveis.

---
Seções pouco claras ou incompletas? Peça feedback para aprimorar as instruções.