# 🎮 TicTacToe-MultiLang

[![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://github.com/EduardoFProenca/TicTacToe-MultiLang)
[![C#](https://img.shields.io/badge/C%23-239120?style=for-the-badge&logo=c-sharp&logoColor=white)](https://github.com/EduardoFProenca/TicTacToe-MultiLang)
[![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)](https://github.com/EduardoFProenca/TicTacToe-MultiLang)
[![.NET MAUI](https://img.shields.io/badge/.NET_MAUI-512BD4?style=for-the-badge&logo=dotnet&logoColor=white)](https://github.com/EduardoFProenca/TicTacToe-MultiLang)

> Implementação do clássico **Jogo da Velha (Tic-Tac-Toe)** em múltiplas linguagens de programação, demonstrando versatilidade em lógica de programação e domínio de diferentes tecnologias.

---

## 📖 Sobre o Projeto

Este repositório contém diferentes implementações do **Jogo da Velha** desenvolvidas durante meus estudos na **Fatec**. O objetivo é demonstrar que a **lógica de programação é universal**, independente da linguagem ou tecnologia utilizada.

Cada versão explora características específicas da linguagem, desde implementações básicas em terminal até versões com interface gráfica e recursos avançados.

### 🎯 Objetivos Educacionais

- ✅ Comparar sintaxes e paradigmas entre linguagens
- ✅ Aplicar conceitos de estrutura de dados (matriz 3x3)
- ✅ Implementar lógica de validação e detecção de vitória
- ✅ Evoluir de versões simples para complexas
- ✅ Demonstrar versatilidade técnica

---

## 🗂️ Estrutura do Repositório

```
TicTacToe-MultiLang/
│
├── C-Console/              # Versão em C (Terminal + IA)
│   ├── main.c              # Código principal completo
│   └── README.md
│
├── CSharp-MAUI/            # Versão com interface gráfica
│   ├── MainPage.xaml       # Interface XAML
│   ├── MainPage.xaml.cs    # Lógica do jogo
│   ├── App.xaml
│   ├── AppShell.xaml
│   └── JogodaVelha.csproj
│
├── .gitignore
└── README.md               # Este arquivo
```

---

## 🚀 Versões Disponíveis

### 1️⃣ **C - Console** (Procedural com IA)

**📌 Características:**
- **Dois modos de jogo:** 1v1 (Jogador vs Jogador) ou vs IA (Jogador vs Máquina)
- Interface via terminal com cores ANSI
- Menu interativo para escolher modo
- IA com jogadas aleatórias
- Placar acumulativo (vitórias X vs O)
- Sistema de validação robusto
- Detecção de vitória e empate
- Opção de jogar múltiplas partidas

**🛠️ Conceitos C aplicados:**
- Arrays bidimensionais (`char tabuleiro[9]`)
- Funções modulares (5 funções separadas)
- Manipulação de cores no terminal (ANSI codes)
- Gerador de números aleatórios (`rand()`)
- Validação de entrada com `scanf()`
- Algoritmo de detecção de vitória otimizado
- Estruturas de controle (`do-while`, `switch`)

**🎮 Modos de jogo:**
```
[1] - 🤖 Jogador vs Máquina (IA aleatória)
[2] - 🧑🤝🧑 Jogador vs Jogador (1v1)
```

**🌐 Testar online:**  
[![Run on OnlineGDB](https://img.shields.io/badge/Run%20on-OnlineGDB-blue?style=for-the-badge&logo=c)](https://onlinegdb.com/xqKgpF1b6)

**▶️ Como executar:**
```bash
cd C-Console
gcc main.c -o jogo_da_velha
./jogo_da_velha
```

**📸 Exemplo visual:**
```
==================================
  🎮  Bem-vindo ao Jogo da Velha!
==================================
Escolha um modo de jogo:
[1] - 🤖  Jogador vs Máquina (IA aleatória)
[[2] - 🧑🤝🧑 Jogador vs Jogador (1v1)
Digite sua escolha: 1

  1 | 2 | 3
 ---|---|---
  4 | 5 | 6
 ---|---|---
  7 | 8 | 9

Jogador [X], escolha uma posição: 5

  1 | 2 | 3
 ---|---|---
  4 | X | 6
 ---|---|---
  7 | 8 | 9

🤖 Máquina jogou na posição 3

  1 | 2 | O
 ---|---|---
  4 | X | 6
 ---|---|---
  7 | 8 | 9

🎉 Parabéns! O jogador [X] venceu!

      |X| = 1         |O| = 0

🔄 Continuar jogando? (S/N):
```

**🤖 Como funciona a IA:**
- Gera posições aleatórias de 1 a 9
- Valida se a posição está livre
- Joga automaticamente após o jogador
- Detecta quando não há mais jogadas possíveis

---

### 2️⃣ **C# - MAUI** (Interface Gráfica)

**📌 Características:**
- Interface gráfica moderna e responsiva
- Grid 3x3 com 9 botões clicáveis
- Design elegante com gradiente preto/cinza
- Feedback visual instantâneo ao clicar
- Placar acumulativo (X vs O)
- Alertas de vitória e empate
- Reinício automático após cada partida
- Compatível com Windows, Android, iOS, macOS

**🛠️ Conceitos MAUI aplicados:**
- XAML para design de interface
- Event Handlers (`Button_Clicked`)
- Grid Layout (5 linhas × 3 colunas)
- Estilização via XAML (cores, bordas, fontes)
- Lógica de jogo em C# (code-behind)
- DisplayAlert para mensagens
- Estado do jogo em variáveis de classe

**▶️ Como executar:**
```bash
cd CSharp-MAUI
dotnet build
dotnet run
```

**Ou no Visual Studio:**
1. Abra a solução `JogodaVelha.sln`
2. Selecione plataforma (Windows/Android)
3. Pressione `F5`

**🎨 Design:**
- Fundo: Gradiente preto (#232323 → #000000)
- Botões: Transparentes com borda dourada (#efb810)
- Texto: Dourado (#efb810), fonte 80px
- Labels: "Jogo da Velha" centralizado no topo
- Placar: Exibe X e O nas laterais inferiores

**📸 Interface visual:**
```
┌─────────────────────────┐
│    Jogo da Velha        │
├─────────────────────────┤
│  ┌───┬───┬───┐          │
│  │ X │   │ O │          │
│  ├───┼───┼───┤          │
│  │   │ X │   │          │
│  ├───┼───┼───┤          │
│  │ O │   │ X │          │
│  └───┴───┴───┘          │
│                         │
│  X              O       │
│  2              1       │
└─────────────────────────┘

[Alerta] Parabéns! O X ganhou!
```

---

## 🎮 Funcionalidades Comuns

Todas as versões implementam:

| Funcionalidade | Descrição |
|----------------|-----------|
| ✅ **Tabuleiro 3x3** | Matriz 1D (C) ou grid (MAUI) |
| ✅ **Alternância X/O** | Troca automática de jogadores |
| ✅ **Validação** | Impede jogar em posição ocupada |
| ✅ **Detecção de Vitória** | Verifica 8 condições (3 linhas + 3 colunas + 2 diagonais) |
| ✅ **Detecção de Empate** | Identifica quando não há mais jogadas |
| ✅ **Placar** | Acumula vitórias de X e O |
| ✅ **Reiniciar Jogo** | Continuar jogando múltiplas partidas |
| 🤖 **IA** (C) | Modo vs Máquina (jogadas aleatórias) |
| 🎨 **GUI** (MAUI) | Interface gráfica moderna |

---

## 📊 Comparação entre Versões

| Aspecto | C Console | C# MAUI |
|---------|-----------|---------|
| **Paradigma** | Procedural | POO |
| **Interface** | Terminal (texto) | Gráfica (botões) |
| **Plataformas** | Linux/Mac/Windows | Windows/Android/iOS/Mac |
| **Modos de Jogo** | 1v1 + vs IA | 1v1 apenas |
| **IA** | ✅ Sim (aleatória) | ❌ Não |
| **Placar** | ✅ Acumulativo | ✅ Acumulativo |
| **Cores** | ✅ ANSI colors | ✅ Gradiente + dourado |
| **Validação** | ✅ Robusta (trata input inválido) | ✅ Automática (botões) |
| **Linhas de Código** | ~180 | ~120 (XAML + C#) |
| **Dificuldade** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **Funcionalidades** | Menu + IA + validação avançada | Interface intuitiva |

---

## 🧠 Conceitos Aplicados

### **Lógica de Jogo:**
- **Representação do tabuleiro:** Array unidimensional de 9 posições (C) ou Grid de botões (MAUI)
- **Verificação de vitória:** Algoritmo que verifica 8 condições usando soma de pontuações
  - Linhas: `[0+1+2]`, `[3+4+5]`, `[6+7+8]`
  - Colunas: `[0+3+6]`, `[1+4+7]`, `[2+5+8]`
  - Diagonais: `[0+4+8]`, `[2+4+6]`
  - Vitória X: soma = 3, Vitória O: soma = 300
- **Verificação de empate:** Contador de rodadas (9 jogadas sem vencedor)
- **Alternância de jogadores:** Operador ternário `(jogador == 'X') ? 'O' : 'X'`

### **Estruturas de Dados:**
- Arrays unidimensionais (`char tabuleiro[9]`, `int pontuacao[9]`)
- Variáveis de controle (placar, rodadas, modo de jogo)

### **Algoritmos:**
- **IA Aleatória (C):** Gera número random até encontrar posição livre
- **Validação de entrada:** Verifica se posição é válida (1-9) e está desocupada
- **Sistema de pontuação:** X=1, O=100 para facilitar detecção de vitória

### **Interface:**
- **C:** Menu textual + cores ANSI (vermelho para erros, azul para IA)
- **MAUI:** XAML com Grid Layout + event handlers em C#

### **Boas Práticas:**
- Código modular: 5 funções separadas (C) / métodos (MAUI)
- Nomenclatura clara: `jogo_imprimirTabuleiro()`, `jogo_alternarJogador()`
- Comentários explicativos
- Separação de responsabilidades (lógica vs apresentação)

---

## 🎓 Aprendizados

Durante o desenvolvimento deste projeto, aprendi:

1. **Portabilidade de Lógica** - A mesma lógica funciona em qualquer linguagem, mudando apenas a sintaxe
2. **Paradigmas de Programação** - Procedural (C) vs POO (C#)
3. **Interfaces** - Console (texto + cores) vs GUI (botões clicáveis)
4. **IA Básica** - Implementar jogadas automáticas com aleatoriedade
5. **Otimização de Algoritmos** - Usar soma de arrays em vez de múltiplos `if-else`
6. **UX/UI** - Como feedback visual melhora a experiência (cores, alertas, placar)

### **Desafios superados:**

**Na versão C:**
- Validação robusta de entrada (aceita números, trata erros, permite jogar aleatório)
- Sistema de cores no terminal (ANSI escape codes)
- IA que não repete posições já ocupadas
- Placar persistente entre múltiplas partidas

**Na versão MAUI:**
- Aprender XAML para design de interface
- Sincronizar estado da interface com lógica do jogo
- Desabilitar botões após jogada
- Detectar vitória verificando o texto dos botões

### **Comparação de Sintaxe:**

**Declaração do tabuleiro:**
```c
// C - Array unidimensional
char tabuleiro[9] = {'1','2','3','4','5','6','7','8','9'};
```
```csharp
// C# MAUI - Botões no XAML
<Button x:Name="btn10" Grid.Row="1" Grid.Column="0" Clicked="Button_Clicked"/>
```

**Verificação de vitória:**
```c
// C - Soma de pontuações
for(int i = 0; i < 8; i++) {
    if(somasLinhas[i] == 3 || somasLinhas[i] == 300)
        return false; // Alguém venceu
}
```
```csharp
// C# MAUI - Comparação de texto dos botões
if (btn10.Text == vez && btn11.Text == vez && btn12.Text == vez)
    resultado = 10; // Linha 1 completa
```

**Alternância de jogador:**
```c
// C - Operador ternário
char jogo_alternarJogador(char jogador) {
    return (jogador == 'X') ? 'O' : 'X';
}
```
```csharp
// C# MAUI - If-else simples
if (vez == "X") {
    vez = "O";
} else {
    vez = "X";
}
```

---

## 🔧 Tecnologias Utilizadas

<div align="center">

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![C#](https://img.shields.io/badge/C%23-239120?style=for-the-badge&logo=c-sharp&logoColor=white)
![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)
![.NET MAUI](https://img.shields.io/badge/.NET_MAUI-512BD4?style=for-the-badge&logo=dotnet&logoColor=white)

**Compiladores/IDEs:**

![GCC](https://img.shields.io/badge/GCC-00599C?style=for-the-badge&logo=gnu&logoColor=white)
![Visual Studio](https://img.shields.io/badge/Visual_Studio-5C2D91?style=for-the-badge&logo=visual-studio&logoColor=white)
![VS Code](https://img.shields.io/badge/VS_Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white)
![Eclipse](https://img.shields.io/badge/Eclipse-2C2255?style=for-the-badge&logo=eclipse&logoColor=white)

</div>

---

## 📈 Roadmap Futuro

### **Versão C:**
- [ ] Implementar **IA inteligente** (algoritmo Minimax)
- [ ] Adicionar **níveis de dificuldade** (Fácil/Médio/Difícil)
- [ ] Salvar **histórico de partidas** em arquivo
- [ ] Melhorar **interface visual** (bordas, animações ASCII)

### **Versão MAUI:**
- [ ] Adicionar **modo vs IA**
- [ ] Implementar **animações** de vitória
- [ ] Adicionar **sons** (clique, vitória, empate)
- [ ] **Temas personalizáveis** (cores diferentes)
- [ ] **Histórico de partidas** persistente
- [ ] **Multiplayer online** (opcional)

### **Novas versões:**
- [ ] Versão em **Python** (terminal)
- [ ] Versão **Web** (HTML/CSS/JavaScript)
- [ ] Versão em **Java** (console ou GUI)

---

## 🤝 Contribuindo

Este é um repositório educacional, mas sugestões são bem-vindas!

Se tiver ideias de melhorias ou novas linguagens:
1. Abra uma [Issue](https://github.com/EduardoFProenca/TicTacToe-MultiLang/issues)
2. Ou entre em contato

---

## 📚 Recursos Úteis

### **Algoritmo de Detecção de Vitória (C):**
```c
bool jogo_verificarVencedor(int pontuacao[], int rodadas) {
    int somasLinhas[8], idx = 0;
    
    // Linhas horizontais: [0+1+2], [3+4+5], [6+7+8]
    for(int i = 0; i < 7; i += 3)
        somasLinhas[idx++] = pontuacao[i] + pontuacao[i+1] + pontuacao[i+2];
    
    // Colunas verticais: [0+3+6], [1+4+7], [2+5+8]
    for(int i = 0; i < 3; i++)
        somasLinhas[idx++] = pontuacao[i] + pontuacao[i+3] + pontuacao[i+6];
    
    // Diagonais: [0+4+8], [2+4+6]
    for(int i = 0; i < 7; i += 6)
        somasLinhas[idx++] = pontuacao[i] + pontuacao[4] + pontuacao[8-i];
    
    // Verificar se alguém venceu (X=3, O=300)
    for(int i = 0; i < 8; i++) {
        if(somasLinhas[i] == 3 || somasLinhas[i] == 300)
            return false; // Alguém venceu!
    }
    return true; // Jogo continua
}
```

### **Menu Interativo (C):**
```c
void exibirMenu() {
    printf("\n==================================\n");
    printf("  🎮  Bem-vindo ao Jogo da Velha!\n");
    printf("==================================\n");
    printf("[1] - 🤖 Jogador vs Máquina\n");
    printf("[2] - 🧑🤝🧑 Jogador vs Jogador\n");
    printf("Digite sua escolha: ");
}
```

### **Aprender mais:**
- [Minimax Algorithm](https://en.wikipedia.org/wiki/Minimax) - Para IA
- [Game Theory](https://brilliant.org/wiki/tic-tac-toe/) - Teoria dos Jogos
- [MAUI Documentation](https://docs.microsoft.com/dotnet/maui/) - GUI

---

## 👨‍💻 Autor

**Eduardo Ferreira Proença**

🎓 Estudante de Análise e Desenvolvimento de Sistemas - Fatec  
💼 Foco em Desenvolvimento Back-end  


[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/eduardo-ferreira-39106b26a)
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/EduardoFProenca)
[![Gmail](https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:eduardo.ferreira.proenca.brasil@gmail.com)

---

## 📄 Licença

Este projeto foi desenvolvido para fins **educacionais** durante o curso de ADS na Fatec.

---

## ⭐ Gostou do Projeto?

Se este repositório te ajudou ou você achou interessante, deixe uma ⭐!

---

<div align="center">

**Desenvolvido com 💙 durante os estudos na Fatec**

*"A lógica é a mesma, só muda a sintaxe."*

</div>