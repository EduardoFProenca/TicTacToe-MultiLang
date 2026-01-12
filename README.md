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
├── C-Console/              # Versão em C (Terminal)
│   ├── main.c
│   ├── jogo.c
│   ├── jogo.h
│   └── README.md
│
├── CSharp-Console/         # Versão em C# (Console)
│   ├── Program.cs
│   ├── JogoDaVelha.cs
│   ├── JogoDaVelha.csproj
│   └── README.md
│
├── CSharp-MAUI/            # Versão com interface gráfica
│   ├── MainPage.xaml
│   ├── MainPage.xaml.cs
│   ├── GameLogic.cs
│   └── README.md
│
├── Java-Console/           # Versão em Java (Terminal)
│   ├── Main.java
│   ├── JogoDaVelha.java
│   └── README.md
│
└── README.md               # Este arquivo
```

---

## 🚀 Versões Disponíveis

### 1️⃣ **C - Console** (Procedural)

**📌 Características:**
- Implementação procedural pura
- Interface via terminal (ASCII)
- Matriz de caracteres para o tabuleiro
- Funções modulares
- Validação de jogadas
- Detecção de vitória em linhas, colunas e diagonais

**🛠️ Conceitos C aplicados:**
- Arrays bidimensionais (`char tabuleiro[3][3]`)
- Funções com passagem de parâmetros
- Ponteiros (se aplicável)
- Estruturas de repetição (`for`, `while`)
- `scanf()` / `printf()`

**▶️ Como executar:**
```bash
cd C-Console
gcc main.c jogo.c -o jogo_da_velha
./jogo_da_velha
```

**📸 Exemplo visual:**
```
     |     |     
  1  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  5  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
     |     |     

Jogador X, escolha uma posição (1-9): 5

     |     |     
  1  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  X  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
     |     |     
```

---

### 2️⃣ **C# - Console** (Orientado a Objetos)

**📌 Características:**
- Programação Orientada a Objetos
- Classe `JogoDaVelha` com métodos
- Encapsulamento de lógica
- Propriedades e métodos bem definidos
- Menu interativo com opções

**🛠️ Conceitos C# aplicados:**
- Classes e objetos
- Métodos públicos e privados
- Arrays bidimensionais (`char[,]`)
- `Console.ReadLine()` / `Console.WriteLine()`
- Estruturas `switch` para menu

**▶️ Como executar:**
```bash
cd CSharp-Console
dotnet run
```

**Ou no Visual Studio:**
1. Abra `JogoDaVelha.sln`
2. Pressione `F5`

---

### 3️⃣ **C# - MAUI** (Interface Gráfica)

**📌 Características:**
- Interface gráfica moderna e responsiva
- 9 botões clicáveis (grid 3x3)
- Feedback visual instantâneo
- Animações de vitória
- Placar de pontos (X vs O)
- Botão "Reiniciar"
- Compatível com Windows, Android, iOS, macOS

**🛠️ Conceitos MAUI aplicados:**
- XAML para design de interface
- Data Binding
- Event Handlers (`Clicked`)
- Grid Layout
- Arquitetura MVVM (se aplicável)

**▶️ Como executar:**
```bash
cd CSharp-MAUI
dotnet build
dotnet run
```

**Ou no Visual Studio:**
1. Abra `JogoDaVelhaMAUI.sln`
2. Selecione plataforma (Windows/Android)
3. Pressione `F5`

**📸 Interface visual:**
```
┌─────────────────────────┐
│  Jogo da Velha - MAUI   │
├─────────────────────────┤
│  ┌───┬───┬───┐          │
│  │ X │   │ O │          │
│  ├───┼───┼───┤          │
│  │   │ X │   │  Placar: │
│  ├───┼───┼───┤  X: 2    │
│  │ O │   │   │  O: 1    │
│  └───┴───┴───┘          │
│                          │
│  [ Reiniciar Jogo ]     │
└─────────────────────────┘
```

---

### 4️⃣ **Java - Console** (POO)

**📌 Características:**
- Programação Orientada a Objetos
- Classe `JogoDaVelha` separada
- Interface `Scanner` para entrada
- Tratamento de exceções
- Código bem estruturado

**🛠️ Conceitos Java aplicados:**
- Classes e construtores
- Métodos públicos/privados
- Arrays bidimensionais (`char[][]`)
- `Scanner` para input
- `System.out.println()`

**▶️ Como executar:**
```bash
cd Java-Console
javac Main.java JogoDaVelha.java
java Main
```

**Ou em uma IDE:**
1. Abra no Eclipse/IntelliJ
2. Execute `Main.java`

---

## 🎮 Funcionalidades Comuns

Todas as versões implementam:

| Funcionalidade | Descrição |
|----------------|-----------|
| ✅ **Tabuleiro 3x3** | Matriz representando o jogo |
| ✅ **Alternância X/O** | Troca automática de jogadores |
| ✅ **Validação** | Impede jogar em posição ocupada |
| ✅ **Detecção de Vitória** | Verifica linhas, colunas, diagonais |
| ✅ **Detecção de Empate** | Identifica quando não há mais jogadas |
| ✅ **Reiniciar Jogo** | Permite jogar novamente |

---

## 📊 Comparação entre Versões

| Aspecto | C | C# Console | C# MAUI | Java |
|---------|---|------------|---------|------|
| **Paradigma** | Procedural | POO | POO + GUI | POO |
| **Interface** | Terminal | Terminal | Gráfica | Terminal |
| **Linhas de Código** | ~150 | ~200 | ~350 | ~180 |
| **Dificuldade** | ⭐⭐⭐ | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ | ⭐⭐⭐ |
| **Plataformas** | Windows/Linux/Mac | Windows/Linux/Mac | Multi-plataforma | Windows/Linux/Mac |

---

## 🧠 Conceitos Aplicados

### **Lógica de Jogo:**
- Matriz 3x3 para representar o tabuleiro
- Verificação de vitória (8 condições possíveis)
- Verificação de empate (tabuleiro cheio)
- Alternância de jogadores

### **Estruturas de Dados:**
- Arrays bidimensionais
- Vetores de controle

### **Algoritmos:**
- Busca em linhas, colunas e diagonais
- Validação de entrada
- Estado do jogo (em andamento/finalizado)

### **Boas Práticas:**
- Código modular e organizado
- Nomenclatura clara de variáveis
- Comentários explicativos
- Separação de responsabilidades

---

## 🎓 Aprendizados

Durante o desenvolvimento deste projeto multiplataforma, aprendi:

1. **Portabilidade de Lógica** - A mesma lógica funciona em qualquer linguagem
2. **Paradigmas de Programação** - Procedural (C) vs POO (C#, Java)
3. **Interfaces** - Console (texto) vs GUI (gráfico)
4. **Sintaxe Comparativa** - Diferenças e semelhanças entre linguagens
5. **Arquitetura** - Como estruturar código de forma escalável

### **Comparação de Sintaxe:**

**Declaração de matriz:**
```c
// C
char tabuleiro[3][3];
```
```csharp
// C#
char[,] tabuleiro = new char[3, 3];
```
```java
// Java
char[][] tabuleiro = new char[3][3];
```

**Loop duplo:**
```c
// C
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        // código
    }
}
```
```csharp
// C# (igual ao C)
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        // código
    }
}
```
```java
// Java (igual ao C)
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        // código
    }
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

- [ ] Adicionar versão em **Python**
- [ ] Implementar **IA com algoritmo Minimax**
- [ ] Criar versão **multiplayer online**
- [ ] Adicionar **níveis de dificuldade**
- [ ] Versão **web** (HTML/CSS/JavaScript)
- [ ] Adicionar **histórico de partidas**
- [ ] Implementar **sons e efeitos visuais** (MAUI)

---

## 🤝 Contribuindo

Este é um repositório educacional, mas sugestões são bem-vindas!

Se tiver ideias de melhorias ou novas linguagens:
1. Abra uma [Issue](https://github.com/EduardoFProenca/TicTacToe-MultiLang/issues)
2. Ou entre em contato

---

## 📚 Recursos Úteis

### **Algoritmo de Detecção de Vitória:**
```
Verificar 8 condições:
- 3 linhas horizontais
- 3 colunas verticais
- 2 diagonais

Exemplo (linha):
if (tab[0][0] == tab[0][1] && tab[0][1] == tab[0][2] && tab[0][0] != ' ')
    return true; // Vitória na linha 1
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
📍 Ibiúna, São Paulo, Brasil

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