#include "windows.h"
#include "ui_autenticacao.h"
#include "ui_mainwindow.h"
#include "ui_telausuario.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_autenticar_clicked()
{
    ui->status->setText("Autenticando...");
    emit clicou_autenticar();
}

void MainWindow::on_conta_clicked()
{
    ui->status->setText("Ver conta");
    emit clicou_conta();
}

void MainWindow::on_eventos_clicked()
{
    ui->status->setText("Ver eventos");
    emit clicou_eventos();
}

void MainWindow::on_status_alterado(bool logado)
{
    if (logado) {
        ui->status->setText("Status: Logado!");
    } else {
        ui->status->setText("Status: Não Logado!");
    }
}

//-------------

Autenticacao::Autenticacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autenticacao)
{
    ui->setupUi(this);
}

Autenticacao::~Autenticacao()
{
    delete ui;
}

void Autenticacao::on_logar_clicked()
{
    //ui->status->append("logando...");
    emit clicou_logar(ui->campoCPF->text(), ui->campoSenha->text());
}

void Autenticacao::on_notificar_situacao(int situacao){
    if (situacao == 0) ui->status->append("CPF ou Senha incorretos!");
    else if (situacao == 1) ui->status->setText("Conectando ao banco de dados...");
    else if (situacao == 2) ui->status->append("Conta Inexistente!");
    else if (situacao == 3) {
        ui->status->append("Logado com sucesso!");
        close();
    }
}

//------------------------------


TelaUsuario::TelaUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaUsuario)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

TelaUsuario::~TelaUsuario()
{
    delete ui;
}

void TelaUsuario::on_Cadastrar_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void TelaUsuario::on_voltar_cadastrar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void TelaUsuario::on_ir_cadastrar_clicked()
{
    EstruturaUsuario Usuario;
    EstruturaCartaoCredito Cartao;
    Usuario.cpf = ui->campoCPF_cadastrar->text().toStdString();
    Usuario.senha = ui->campoSenha_cadastrar->text().toStdString();
    Cartao.numero = ui->campoCartao_cadastrar->text().toStdString();
    Cartao.codigo = ui->campoCodigo_cadastrar->text().toStdString();
    Cartao.data = ui->campoData_cadastrar->text().toStdString();
    emit clicou_ir_cadastrar(Usuario, Cartao);
}

void TelaUsuario::on_notificar_situacao(int situacao){
    if (situacao == 0) ui->infobox->append("Dados inválidos!");
    else if (situacao == 1) ui->infobox->setText("Conectando ao banco de dados...");
    else if (situacao == 2) ui->infobox->append("Este CPF já está em uso!");
    else if (situacao == 3) {
        ui->infobox->append("Conta criada com sucesso!");
        QMessageBox::information(this, "","Conta criada com sucesso, favor se autenticar!");
        close();
    }
    else if (situacao == 4) {
        ui->infobox_usuario->append("Você precisa estar autenticado para executar esta ação!");
    }
}

void TelaUsuario::on_Excluir_clicked()
{
    emit clicou_excluir_usuario(4);
}

void TelaUsuario::on_Dados_clicked()
{
    emit clicou_dados_conta(4);
}

void TelaUsuario::on_Compras_clicked()
{
    emit clicou_minhas_compras(4);
}

void TelaUsuario::on_Eventos_clicked()
{
    emit clicou_meus_eventos(4);
}
