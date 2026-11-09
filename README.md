# Projeto de Infraestrutura | LeiteTech Soluções

## Resumo

Planejamento de infraestrutura de TI para a LeiteTech Soluções, empresa fictícia de desenvolvimento de software e suporte técnico, instalada em um prédio único de 4 andares com 50 funcionários. A solução integra quatro áreas sobre a mesma empresa: Arquitetura de Computadores, Sistemas Operacionais, Redes de Computadores e Internet das Coisas.

## A empresa

| Andar | Departamentos | Funcionários |
|---|---|---|
| 1º | Recepção e Operações/Suporte | 10 |
| 2º | Financeiro, RH e Comercial | 15 |
| 3º | Desenvolvimento, Gerência de Projetos, QA e Design | 15 |
| 4º | TI/Infraestrutura (sala de servidores) e Diretoria | 10 |
| | **Total** | **50** |

**Horário de funcionamento:** segunda a sexta, 08h às 18h.

Os números detalhados (departamentos, desktops, notebooks e periféricos) estão em `empresa/Tabela Mestra.xlsx`.

## Organização do repositório

| Pasta | Conteúdo |
|---|---|
| `empresa/` | Empresa, estrutura e `Tabela Mestra.xlsx` |
| `arquitetura/` | Perfis de computadores, compatibilidade, servidor, RAID, energia e orçamento |
| `sistemas-operacionais/` | Sistemas, serviços, permissões, segurança, backup e licenças |
| `redes/` | Plantas, topologias, VLANs, IPv4, Wi-Fi, equipamentos e orçamento |
| `iot/` | Código, circuito, testes e descrição do protótipo de temperatura |
| `evidencias/` | Capturas e comprovações |
| `referencias/` | Fontes consultadas |

Arquivos de `arquitetura/`:

| Arquivo | Conteúdo |
|---|---|
| `Perfis e Compatibilidade.xlsx` | Perfis de computadores, configurações e compatibilidade |
| `Servidores Raid Energia.xlsx` | Serviços, servidor, RAID, backup (NAS) e nobreak |
| `Inventario e Orcamento.xlsx` | Orçamento, conferência de quantidades, comparação e fontes |

Arquivos de `sistemas-operacionais/`:

| Arquivo | Conteúdo |
|---|---|
| `matriz-de-sistemas.xlsx` | Sistemas por perfil e verificação de compatibilidade |
| `catalogo-de-servicos.xlsx` | Catálogo de serviços e recursos das máquinas virtuais |
| `servicos.drawio` | Representação do servidor físico e das máquinas virtuais |
| `usuarios-grupos-permissoes.xlsx` | Grupos do Active Directory e permissões |
| `operacao-e-seguranca.pdf` e `.docx` | Plano de operação e segurança |
| `backup-recuperacao-licencas.xlsx` | Backup, recuperação e licenças com custo |

## Links técnicos

| Item | Link |
|---|---|
| Tinkercad (IoT) | [https://www.tinkercad.com/things/cH5nLgESfBo-monitor-de-temperatura-da-leitetech](https://www.tinkercad.com/things/cH5nLgESfBo-monitor-de-temperatura-da-leitetech) |
| Descrição do protótipo IoT | [`iot/descricao-do-projeto.md`](iot/descricao-do-projeto.md) |

## Ferramentas

Excel, Word, Draw.io, Packet Tracer, Tinkercad e GitHub

## Andamento

| Área | Situação |
|---|---|
| Empresa e tabela-mestra | Concluído - 01/10/2026 |
| Arquitetura | Concluído - 16/10/2026 |
| Sistemas Operacionais | Concluído - 09/11/2026 |
| Redes | Concluído - 08/11/2026 |
| IoT | Concluído - 04/11/2026 |
