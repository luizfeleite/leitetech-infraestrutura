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
| `evidencias/` | Capturas e comprovações ([`README`](evidencias/README.md)) |
| `referencias/` | Fontes consultadas ([`fontes-consultadas.md`](referencias/fontes-consultadas.md)) |

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

Arquivos de `redes/`:

| Arquivo | Conteúdo |
|---|---|
| `plano-ipv4.xlsx` | Plano de endereçamento IPv4 e VLANs |
| `vlans-e-acessos.xlsx` | VLANs e regras de acesso do firewall |
| `inventario-e-dimensionamento.xlsx` | Equipamentos, portas, Wi-Fi, cabeamento e energia |
| `orcamento.xlsx` | Orçamento de rede |
| `planta-andar-1.png` a `planta-andar-4.png` e `plantas.drawio` | Plantas dos 4 andares |
| `topologia-fisica.png` e `topologia-logica.png` | Topologias da rede |
| `topologia.pkt` e `topologia-packet-tracer.png` | Simulação no Packet Tracer |
| `testes-e-validacao.pdf` e `T1` a `T10` (`.png`) | Testes de validação e capturas |

## Resultado em números

| Item | Valor |
|---|---|
| Funcionários | 50 (40 desktops e 10 notebooks) |
| Arquitetura (equipamentos) | R$ 545.778,84 |
| Redes (equipamentos) | R$ 49.873,59 |
| Licenças de software | R$ 55.974,04 |
| **Total estimado do projeto** | **R$ 651.626,47** |

## Como as áreas se integram

- **Arquitetura:** servidor Dell PowerEdge R360 com RAID 10, NAS de backup e nobreaks.
- **Sistemas Operacionais:** Windows 11 Pro nas estações e Windows Server 2022 com Hyper-V, rodando 6 servidores virtuais (AD, arquivos, Git, banco de dados, ERP e monitoramento).
- **Redes:** 4 switches, 8 pontos de acesso e firewall, em 10 VLANs com endereços 10.50.x.x.
- **IoT:** o sensor de temperatura da sala de servidores (VLAN 50) está previsto para enviar dados ao Zabbix do servidor de monitoramento.

## Links técnicos

| Item | Link |
|---|---|
| Tinkercad (IoT) | https://www.tinkercad.com/things/cH5nLgESfBo-monitor-de-temperatura-da-leitetech |
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
