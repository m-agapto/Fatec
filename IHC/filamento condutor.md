| **Filamento condutor**                                                                                                             | **O que é e como funciona**                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| ---------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| <img width="600" alt="Filamento condutor" src="https://github.com/user-attachments/assets/573e9387-4213-440c-8991-f95582686ded" /> | A ideia é bastante interessante: em vez de imprimir apenas a parte mecânica de um objeto, você pode imprimir **trilhas elétricas** e, em alguns casos, **componentes eletrônicos** diretamente na peça.<br><br>🔌 **Como ele funciona?**<br><br>O filamento comum, como PLA, é isolante. No filamento condutor, o plástico é misturado com um material que conduz eletricidade, por exemplo:<br><br>• Carbono / carbon black<br>• Grafite<br>• Grafeno<br>• Partículas de cobre<br>• Outros materiais condutores |

# Filamento Condutor para Impressão 3D

Quando o filamento é extrudado pela impressora, essas partículas formam caminhos pelos quais a corrente elétrica consegue passar.

Por exemplo:

```text
       FILAMENTO CONDUTOR
              ↓
     ┌─────────────────┐
     │      LED        │
     └───────┬─────────┘
             │
     ════════╪════════
             │
           🔋 5 V
```

Assim, a própria peça impressa pode funcionar como uma **trilha elétrica**, eliminando parte dos fios convencionais.

## 🧪 Mas ele não é igual a um fio de cobre

Essa é uma diferença importante.

A maioria dos filamentos condutores possui **resistência elétrica muito maior que o cobre**. Por isso, eles são mais adequados para:

* Sensores;
* Botões capacitivos;
* LEDs;
* Pequenas trilhas;
* Contatos elétricos;
* Circuitos de baixa corrente;
* Aquecedores;
* Objetos eletrônicos interativos.

Não é simplesmente substituir um fio de cobre por filamento condutor para alimentar um motor potente.

Um estudo comparou filamentos com carbono, grafeno e cobre e encontrou resistividades de aproximadamente **12, 0,78 e 0,014 Ω·cm**, respectivamente. O filamento à base de cobre apresentou desempenho muito melhor que os de carbono/grafeno.

## 🖨️ Como é possível imprimir um circuito?

Uma impressora 3D pode usar **dois materiais diferentes**:

```text
Extrusor 1 → PLA normal
             ↓
        estrutura isolante

Extrusor 2 → PLA condutor
             ↓
        trilhas elétricas
```

Isso permite fazer algo parecido com:

```text
       ┌───────────┐
       │   SENSOR  │
       └─────┬─────┘
             │
       ━━━━━━┿━━━━━━    ← filamento condutor
             │
       ┌─────┴─────┐
       │   LED     │
       └───────────┘
```

Pesquisadores já utilizaram impressão de dois materiais para fabricar **resistores, capacitores, indutores e até filtros eletrônicos completos**.

---

## 🏭 Quem fabrica?

Existem vários fabricantes e materiais experimentais. Um exemplo conhecido é o **Electrifi**, um filamento baseado em cobre que foi utilizado em pesquisas de eletrônica impressa.

Também existem filamentos comerciais baseados em **carbon black e grafeno**, como os utilizados em trabalhos acadêmicos.

Um exemplo de aplicação comercial/educacional é o **Conductive PLA**, utilizado em projetos para criar caminhos elétricos diretamente durante a impressão.

---

## 🚀 Projetos realmente demonstrados

E aqui fica a parte mais interessante: **isso já foi demonstrado funcionando, não é apenas uma ideia teórica.**

### 1. 🔋 Testador de bateria impresso

A Adafruit possui um projeto de **testador de bateria de moeda feito com impressão 3D e filamento condutor**. O circuito é impresso combinando PLA convencional com material condutor.

### 2. 📡 Circuitos e transferência de energia sem fio

Pesquisadores demonstraram uma bobina impressa com filamento condutor para **transferência de energia sem fio**, além de filtros, capacitores, indutores e resistores impressos.

### 3. 💡 Circuito de LED totalmente impresso

Um trabalho utilizando um filamento à base de cobre e uma impressora modificada conseguiu produzir uma estrutura 3D com circuito condutor e demonstrou um **circuito de LED piscando**, utilizando inclusive um chip temporizador.

### 4. 🧠 Portas lógicas impressas

Mais recentemente, pesquisadores demonstraram **portas lógicas e fusíveis rearmáveis fabricados por impressão 3D**, sem utilizar semicondutores convencionais.

O trabalho foi publicado em **2024** e estudou vários filamentos condutores comerciais.

### 5. 🔬 Pesquisa recente com filamento de cobre

Em **2026**, foi publicado um trabalho sobre um filamento contendo **óxido de cobre + grafite + PLA**, desenvolvido para fabricar sensores eletroquímicos utilizando impressão 3D.

---

## 🤯 E dá para imprimir um circuito 3D de verdade?

**Sim.** E esse é justamente um dos campos mais interessantes atualmente.

Imagine imprimir algo assim:

```text
        OBJETO 3D
    ╔══════════════╗
    ║              ║
    ║  ┌───────┐   ║
    ║  │  LED  │   ║
    ║  └───┬───┘   ║
    ║      │       ║
    ║  ════╪════   ║ ← trilha condutora
    ║      │       ║
    ║  ┌───┴───┐   ║
    ║  │ CHIP  │   ║
    ║  └───┬───┘   ║
    ║      │       ║
    ║  ════╪════   ║
    ╚══════╧═══════╝
```

Em vez de fazer uma **PCB plana**, você poderia ter as conexões elétricas passando **pelas três dimensões do objeto**.

Isso já está sendo pesquisado inclusive para fabricar objetos interativos com **PCBs incorporadas dentro das peças impressas**. Um trabalho chamado *Printegrated Circuits*, apresentado em 2025, demonstrou essa abordagem em vários protótipos.

## 📌 Em resumo

O filamento condutor não transforma qualquer impressora 3D em uma **"fábrica de chips"**, mas já permite fazer **trilhas elétricas e circuitos funcionais diretamente dentro de peças 3D**.

A tecnologia está avançando justamente na direção de objetos que são simultaneamente:

**estrutura mecânica + circuito eletrônico.**

