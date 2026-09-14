🖥️ Oracle VirtualBox — Guia de Máquina Virtual
📚 Tutorial básico: como baixar, instalar, configurar e inicializar uma máquina virtual utilizando o Oracle VM VirtualBox.

📑 Sumário
📌 Sobre
💻 Requisitos
⬇️ Baixando o VirtualBox
⚙️ Instalando o VirtualBox
💿 Baixando uma ISO
🖥️ Criando a máquina virtual
🔧 Configurando a máquina virtual
▶️ Inicializando a máquina virtual
📦 Instalando o sistema operacional
📸 Snapshots
⚠️ Problemas comuns
🏁 Conclusão
📌 Sobre
Uma máquina virtual (VM) é um computador criado através de software dentro de outro computador.

Ela permite executar um sistema operacional de forma virtualizada, utilizando os recursos do computador físico, como:

🧠 Processador;
💾 Memória RAM;
💿 Armazenamento;
🌐 Conexão de rede;
🖥️ Placa gráfica.
Uma das ferramentas mais utilizadas para criar máquinas virtuais é o Oracle VM VirtualBox.

💡 Exemplo: é possível utilizar o Windows como sistema principal e criar uma máquina virtual com Linux para estudar programação ou testar softwares.

💻 Requisitos
Antes de criar uma máquina virtual, verifique se o computador possui recursos suficientes.

Recurso	Recomendação
🧠 Processador	64 bits com suporte à virtualização
💾 Memória RAM	8 GB ou mais
💿 Armazenamento	30 GB livres ou mais
🌐 Internet	Recomendada
🖥️ Sistema operacional	Windows, Linux ou macOS

⚠️ Atenção: os requisitos podem variar de acordo com o sistema operacional que será instalado.

⬇️ Baixando o VirtualBox
Primeiramente, acesse o site oficial do Oracle VirtualBox e procure pela seção de downloads.

Escolha a versão correspondente ao seu sistema operacional:

Sistema	Opção
🪟 Windows	Windows hosts
🍎 macOS	macOS hosts
🐧 Linux	Linux distributions

Depois, faça o download do instalador.

⚙️ Instalando o VirtualBox
Após o download, execute o instalador.

1. Inicie o instalador
Abra o arquivo baixado e siga as instruções apresentadas.

2. Escolha os componentes
O instalador apresentará alguns componentes do VirtualBox.

Na maioria dos casos, as opções padrão são suficientes.

3. Finalize a instalação
Clique em Install e aguarde o processo terminar.

Ao finalizar, abra o:

Oracle VM VirtualBox

💿 Baixando uma ISO
Para instalar um sistema operacional na máquina virtual, precisamos de uma imagem ISO.

Uma ISO é um arquivo que contém os arquivos necessários para realizar a instalação de um sistema operacional.

Alguns exemplos:

Ubuntu.iso
Debian.iso
Fedora.iso
LinuxMint.iso

Também é possível utilizar outros sistemas operacionais, desde que você tenha uma imagem de instalação válida e, quando necessário, uma licença.

🔒 Recomendação: sempre baixe a ISO diretamente do site oficial do sistema operacional.

🖥️ Criando a máquina virtual
Com o VirtualBox aberto, clique em:

New / Novo

Será aberta a tela de criação da máquina virtual.

🏷️ Nome
Escolha um nome para identificar a máquina.

Exemplo:

Ubuntu Linux

O VirtualBox poderá identificar automaticamente o tipo e a versão do sistema operacional.

🧠 Configurando a memória RAM
Escolha a quantidade de memória RAM que será disponibilizada para a máquina virtual.

Por exemplo:

4096 MB

Isso representa aproximadamente:

4 GB de RAM

⚠️ Cuidado com a quantidade de RAM
Não é recomendado disponibilizar toda a memória do computador para a máquina virtual.

Por exemplo, se o computador possui:

8 GB de RAM

evite configurar:

8 GB → Máquina Virtual

Isso deixaria pouca ou nenhuma memória para o sistema operacional principal.

Uma configuração de 2 GB a 4 GB pode ser suficiente para muitos sistemas Linux básicos.

💾 Criando o disco virtual
A máquina virtual também precisa de um disco rígido virtual.

Selecione:

Create a Virtual Hard Disk Now

Depois, escolha o tamanho.

Exemplo:

40 GB

O disco virtual será armazenado como um arquivo no computador físico.

💿 Tipo de disco
O VirtualBox oferece diferentes formatos de disco virtual.

Para utilização normal dentro do VirtualBox, podemos escolher:

VDI
VirtualBox Disk Image

📈 Alocação dinâmica
Também podemos escolher como o espaço será utilizado.

Uma opção recomendada para uso comum é:

Dynamically Allocated

Nesse modo, o arquivo do disco virtual cresce conforme a máquina virtual utiliza espaço.

Por exemplo, podemos criar um disco de:

40 GB

sem necessariamente ocupar os 40 GB imediatamente no armazenamento físico.

🔧 Configurando a máquina virtual
Depois de criar a máquina, selecione-a e clique em:

Settings / Configurações

Agora podemos configurar diferentes componentes.

🧠 Processador
Em:

Settings → System → Processor

podemos definir quantos núcleos serão disponibilizados.

Um exemplo:

CPUs: 2

💡 Para tarefas mais pesadas, pode ser necessário utilizar mais CPUs, desde que o computador físico tenha recursos suficientes.

🖥️ Memória de vídeo
Também podemos configurar a memória de vídeo da máquina virtual.

Uma quantidade maior pode ajudar em determinadas interfaces gráficas, mas a configuração ideal depende do sistema operacional utilizado.

🌐 Rede
Na configuração de rede, uma opção bastante comum é:

NAT

Com o modo NAT, a máquina virtual normalmente consegue acessar a Internet utilizando a conexão do computador físico.

💿 Selecionando a ISO
Agora precisamos informar ao VirtualBox qual ISO será utilizada para instalar o sistema operacional.

Acesse:

Settings
   ↓
Storage
   ↓
Optical Drive

Selecione o arquivo .iso que foi baixado.

Exemplo:

ubuntu-24.04-desktop-amd64.iso

A ISO funcionará de maneira semelhante a um DVD de instalação inserido em um computador físico.

▶️ Inicializando a máquina virtual
Depois de terminar as configurações:

Selecione a máquina virtual;
Clique em Start / Iniciar;
Aguarde a inicialização.
A máquina virtual será aberta em uma nova janela.

Como configuramos uma ISO, o sistema deverá iniciar o instalador do sistema operacional.

📦 Instalando o sistema operacional
O processo de instalação será parecido com o realizado em um computador físico.

Durante a instalação, podem ser solicitadas informações como:

🌎 Idioma;
⌨️ Layout do teclado;
🕐 Fuso horário;
👤 Nome do usuário;
🔑 Senha;
💾 Particionamento;
🖥️ Nome do computador.
Siga as instruções apresentadas pelo instalador.

⚠️ IMPORTANTE: tenha cuidado durante o particionamento. Certifique-se de que a instalação está sendo realizada no disco virtual, e não em um disco físico que contenha seus arquivos pessoais.

🔄 Primeiro início
Depois que a instalação terminar, o sistema poderá solicitar uma reinicialização.

Após reiniciar, o sistema operacional deverá iniciar a partir do disco virtual.

Caso o instalador seja iniciado novamente, pode ser necessário remover a ISO da unidade óptica virtual.

🖥️ Utilizando a máquina virtual
Após a instalação, a máquina virtual pode ser utilizada normalmente.

Você pode:

💻 Programar;
🌐 Navegar na Internet;
📦 Instalar programas;
🧪 Realizar testes;
🐧 Estudar Linux;
🌐 Estudar redes;
🛠️ Criar ambientes de desenvolvimento;
📚 Utilizar para estudos.
⏻ Desligando a máquina virtual
Existem algumas maneiras de desligar uma máquina virtual.

✅ Desligamento normal
A opção mais recomendada é desligar o sistema operacional normalmente.

Menu → Desligar

💾 Salvar estado
O VirtualBox permite salvar o estado atual da máquina virtual.

Isso possibilita continuar posteriormente de onde você parou.

⚠️ Desligamento forçado
Também existe a possibilidade de desligar a máquina imediatamente.

Essa opção deve ser utilizada com cuidado, pois é semelhante a desligar um computador físico diretamente pelo botão de energia.

📸 Snapshots
Uma das funcionalidades mais úteis do VirtualBox é o Snapshot.

Um snapshot salva o estado da máquina virtual em determinado momento.

Exemplo
┌─────────────────────────┐
│ Sistema recém-instalado │
└────────────┬────────────┘
             │
             ▼
      📸 Criar Snapshot
             │
             ▼
   Instalar programas
             │
             ▼
      Realizar testes
             │
             ▼
      ❌ Algo deu errado
             │
             ▼
     🔄 Restaurar Snapshot

Isso é especialmente útil para ambientes de estudo e testes.

⚠️ Importante: snapshots não devem ser utilizados como substitutos de backups.

📊 Exemplo de configuração
Uma configuração básica para uma máquina virtual Linux pode ser:

Configuração	Valor
🏷️ Nome	Ubuntu
🧠 RAM	4096 MB
⚙️ CPUs	2
💾 Disco	40 GB
📀 Formato	VDI
📈 Alocação	Dinâmica
🌐 Rede	NAT
💿 ISO	Ubuntu .iso

💡 Esses valores são apenas exemplos. A configuração ideal depende dos recursos disponíveis no computador físico e dos requisitos do sistema operacional.

⚠️ Problemas comuns
🚫 Virtualização desativada
Caso o VirtualBox apresente problemas relacionados à virtualização, pode ser necessário habilitar a virtualização de hardware.

Em processadores Intel:

Intel VT-x

Em processadores AMD:

AMD-V

Essa configuração normalmente pode ser encontrada na BIOS/UEFI do computador.

🐌 Máquina virtual lenta
Se a máquina virtual estiver apresentando baixo desempenho, verifique:

 Quantidade de RAM disponível;
 Quantidade de CPUs configuradas;
 Espaço disponível no armazenamento;
 Virtualização de hardware ativada;
 Programas consumindo muitos recursos no sistema principal.
💡 Aumentar os recursos da máquina virtual nem sempre melhora o desempenho. O computador físico também precisa de recursos para funcionar.

🗂️ Fluxo completo
O processo completo pode ser resumido da seguinte maneira:

             📥 Baixar VirtualBox
                     │
                     ▼
             ⚙️ Instalar VirtualBox
                     │
                     ▼
                💿 Baixar ISO
                     │
                     ▼
          🖥️ Criar Máquina Virtual
                     │
                     ▼
           🔧 Configurar recursos
                     │
                     ▼
              💿 Selecionar ISO
                     │
                     ▼
               ▶️ Iniciar VM
                     │
                     ▼
          📦 Instalar Sistema
                     │
                     ▼
            🖥️ Utilizar a VM

🏁 Conclusão
O Oracle VM VirtualBox é uma ferramenta que permite criar e executar máquinas virtuais de maneira prática.

O processo básico consiste em:

⬇️ Baixar o VirtualBox;
⚙️ Instalar o programa;
💿 Baixar uma imagem ISO;
🖥️ Criar uma máquina virtual;
🧠 Configurar RAM e CPU;
💾 Criar um disco virtual;
💿 Selecionar a ISO;
▶️ Inicializar a máquina;
📦 Instalar o sistema operacional;
🧪 Utilizar a máquina para estudos, desenvolvimento ou testes.
📚 Referências
Oracle VM VirtualBox
VirtualBox Documentation
<div align="center">
🖥️ Oracle VirtualBox
Guia básico para criação e inicialização de máquinas virtuais

⭐ Se este material foi útil, considere dar uma estrela no repositório!

</div>
