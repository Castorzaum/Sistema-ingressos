/********************************************************************************
** Form generated from reading UI file 'telausuario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAUSUARIO_H
#define UI_TELAUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaUsuario
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *usuario;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Cadastrar;
    QPushButton *Excluir;
    QPushButton *Dados;
    QPushButton *Compras;
    QPushButton *Eventos;
    QSpacerItem *verticalSpacer_5;
    QTextBrowser *infobox_usuario;
    QSpacerItem *verticalSpacer;
    QPushButton *Voltar;
    QWidget *cadastrar;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *campoCPF_cadastrar;
    QLineEdit *campoSenha_cadastrar;
    QLineEdit *campoCartao_cadastrar;
    QLineEdit *campoCodigo_cadastrar;
    QLineEdit *campoData_cadastrar;
    QSpacerItem *verticalSpacer_7;
    QTextBrowser *infobox;
    QSpacerItem *verticalSpacer_6;
    QPushButton *ir_cadastrar;
    QPushButton *voltar_cadastrar;
    QWidget *exclusao;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_9;
    QFormLayout *formLayout_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *campoCPF_exclusao;
    QLabel *campoCartao_exclusao;
    QLabel *label_8;
    QPushButton *confirmar_exclusao;
    QPushButton *cancelar_exclusao;
    QWidget *dados;
    QLabel *label_12;
    QPushButton *voltar_conta;
    QTextBrowser *caixa_conta;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *alterar_cpf;
    QPushButton *alterar_senha;
    QPushButton *alterar_cartao;
    QPushButton *alterar_codigo;
    QPushButton *alterar_data;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *campo_cpf_conta;
    QLineEdit *campo_senha_conta;
    QLineEdit *campo_cartao_conta;
    QLineEdit *campo_codigo_conta;
    QLineEdit *campo_data_conta;
    QWidget *compras;
    QWidget *eventos;

    void setupUi(QDialog *TelaUsuario)
    {
        if (TelaUsuario->objectName().isEmpty())
            TelaUsuario->setObjectName(QString::fromUtf8("TelaUsuario"));
        TelaUsuario->resize(600, 450);
        verticalLayout = new QVBoxLayout(TelaUsuario);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(TelaUsuario);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        usuario = new QWidget();
        usuario->setObjectName(QString::fromUtf8("usuario"));
        verticalLayout_2 = new QVBoxLayout(usuario);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(usuario);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_2);

        Cadastrar = new QPushButton(usuario);
        Cadastrar->setObjectName(QString::fromUtf8("Cadastrar"));

        verticalLayout_2->addWidget(Cadastrar);

        Excluir = new QPushButton(usuario);
        Excluir->setObjectName(QString::fromUtf8("Excluir"));

        verticalLayout_2->addWidget(Excluir);

        Dados = new QPushButton(usuario);
        Dados->setObjectName(QString::fromUtf8("Dados"));

        verticalLayout_2->addWidget(Dados);

        Compras = new QPushButton(usuario);
        Compras->setObjectName(QString::fromUtf8("Compras"));

        verticalLayout_2->addWidget(Compras);

        Eventos = new QPushButton(usuario);
        Eventos->setObjectName(QString::fromUtf8("Eventos"));

        verticalLayout_2->addWidget(Eventos);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        infobox_usuario = new QTextBrowser(usuario);
        infobox_usuario->setObjectName(QString::fromUtf8("infobox_usuario"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(infobox_usuario->sizePolicy().hasHeightForWidth());
        infobox_usuario->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(infobox_usuario);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        Voltar = new QPushButton(usuario);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));

        verticalLayout_2->addWidget(Voltar);

        stackedWidget->addWidget(usuario);
        cadastrar = new QWidget();
        cadastrar->setObjectName(QString::fromUtf8("cadastrar"));
        verticalLayout_3 = new QVBoxLayout(cadastrar);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(cadastrar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(cadastrar);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(cadastrar);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(cadastrar);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(cadastrar);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(cadastrar);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_7);

        campoCPF_cadastrar = new QLineEdit(cadastrar);
        campoCPF_cadastrar->setObjectName(QString::fromUtf8("campoCPF_cadastrar"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, campoCPF_cadastrar);

        campoSenha_cadastrar = new QLineEdit(cadastrar);
        campoSenha_cadastrar->setObjectName(QString::fromUtf8("campoSenha_cadastrar"));
        campoSenha_cadastrar->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, campoSenha_cadastrar);

        campoCartao_cadastrar = new QLineEdit(cadastrar);
        campoCartao_cadastrar->setObjectName(QString::fromUtf8("campoCartao_cadastrar"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, campoCartao_cadastrar);

        campoCodigo_cadastrar = new QLineEdit(cadastrar);
        campoCodigo_cadastrar->setObjectName(QString::fromUtf8("campoCodigo_cadastrar"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, campoCodigo_cadastrar);

        campoData_cadastrar = new QLineEdit(cadastrar);
        campoData_cadastrar->setObjectName(QString::fromUtf8("campoData_cadastrar"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, campoData_cadastrar);


        verticalLayout_3->addLayout(formLayout_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_7);

        infobox = new QTextBrowser(cadastrar);
        infobox->setObjectName(QString::fromUtf8("infobox"));
        sizePolicy1.setHeightForWidth(infobox->sizePolicy().hasHeightForWidth());
        infobox->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(infobox);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_6);

        ir_cadastrar = new QPushButton(cadastrar);
        ir_cadastrar->setObjectName(QString::fromUtf8("ir_cadastrar"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ir_cadastrar->sizePolicy().hasHeightForWidth());
        ir_cadastrar->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(ir_cadastrar);

        voltar_cadastrar = new QPushButton(cadastrar);
        voltar_cadastrar->setObjectName(QString::fromUtf8("voltar_cadastrar"));
        sizePolicy2.setHeightForWidth(voltar_cadastrar->sizePolicy().hasHeightForWidth());
        voltar_cadastrar->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(voltar_cadastrar);

        stackedWidget->addWidget(cadastrar);
        exclusao = new QWidget();
        exclusao->setObjectName(QString::fromUtf8("exclusao"));
        verticalLayout_4 = new QVBoxLayout(exclusao);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_14 = new QLabel(exclusao);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(label_14);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_9 = new QLabel(exclusao);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(label_9);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_10 = new QLabel(exclusao);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(exclusao);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_11);

        campoCPF_exclusao = new QLabel(exclusao);
        campoCPF_exclusao->setObjectName(QString::fromUtf8("campoCPF_exclusao"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, campoCPF_exclusao);

        campoCartao_exclusao = new QLabel(exclusao);
        campoCartao_exclusao->setObjectName(QString::fromUtf8("campoCartao_exclusao"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, campoCartao_exclusao);


        verticalLayout_4->addLayout(formLayout_4);

        label_8 = new QLabel(exclusao);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(label_8);

        confirmar_exclusao = new QPushButton(exclusao);
        confirmar_exclusao->setObjectName(QString::fromUtf8("confirmar_exclusao"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(confirmar_exclusao->sizePolicy().hasHeightForWidth());
        confirmar_exclusao->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(confirmar_exclusao);

        cancelar_exclusao = new QPushButton(exclusao);
        cancelar_exclusao->setObjectName(QString::fromUtf8("cancelar_exclusao"));
        sizePolicy3.setHeightForWidth(cancelar_exclusao->sizePolicy().hasHeightForWidth());
        cancelar_exclusao->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(cancelar_exclusao);

        stackedWidget->addWidget(exclusao);
        dados = new QWidget();
        dados->setObjectName(QString::fromUtf8("dados"));
        label_12 = new QLabel(dados);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(9, 9, 108, 17));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        voltar_conta = new QPushButton(dados);
        voltar_conta->setObjectName(QString::fromUtf8("voltar_conta"));
        voltar_conta->setGeometry(QRect(9, 398, 89, 25));
        caixa_conta = new QTextBrowser(dados);
        caixa_conta->setObjectName(QString::fromUtf8("caixa_conta"));
        caixa_conta->setGeometry(QRect(10, 280, 551, 71));
        widget = new QWidget(dados);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(350, 70, 211, 151));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        alterar_cpf = new QPushButton(widget);
        alterar_cpf->setObjectName(QString::fromUtf8("alterar_cpf"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(alterar_cpf->sizePolicy().hasHeightForWidth());
        alterar_cpf->setSizePolicy(sizePolicy4);

        verticalLayout_5->addWidget(alterar_cpf);

        alterar_senha = new QPushButton(widget);
        alterar_senha->setObjectName(QString::fromUtf8("alterar_senha"));
        sizePolicy4.setHeightForWidth(alterar_senha->sizePolicy().hasHeightForWidth());
        alterar_senha->setSizePolicy(sizePolicy4);

        verticalLayout_5->addWidget(alterar_senha);

        alterar_cartao = new QPushButton(widget);
        alterar_cartao->setObjectName(QString::fromUtf8("alterar_cartao"));
        sizePolicy4.setHeightForWidth(alterar_cartao->sizePolicy().hasHeightForWidth());
        alterar_cartao->setSizePolicy(sizePolicy4);

        verticalLayout_5->addWidget(alterar_cartao);

        alterar_codigo = new QPushButton(widget);
        alterar_codigo->setObjectName(QString::fromUtf8("alterar_codigo"));
        sizePolicy4.setHeightForWidth(alterar_codigo->sizePolicy().hasHeightForWidth());
        alterar_codigo->setSizePolicy(sizePolicy4);

        verticalLayout_5->addWidget(alterar_codigo);

        alterar_data = new QPushButton(widget);
        alterar_data->setObjectName(QString::fromUtf8("alterar_data"));
        sizePolicy4.setHeightForWidth(alterar_data->sizePolicy().hasHeightForWidth());
        alterar_data->setSizePolicy(sizePolicy4);

        verticalLayout_5->addWidget(alterar_data);

        widget1 = new QWidget(dados);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(12, 70, 331, 151));
        verticalLayout_6 = new QVBoxLayout(widget1);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        campo_cpf_conta = new QLineEdit(widget1);
        campo_cpf_conta->setObjectName(QString::fromUtf8("campo_cpf_conta"));
        sizePolicy4.setHeightForWidth(campo_cpf_conta->sizePolicy().hasHeightForWidth());
        campo_cpf_conta->setSizePolicy(sizePolicy4);

        verticalLayout_6->addWidget(campo_cpf_conta);

        campo_senha_conta = new QLineEdit(widget1);
        campo_senha_conta->setObjectName(QString::fromUtf8("campo_senha_conta"));
        sizePolicy4.setHeightForWidth(campo_senha_conta->sizePolicy().hasHeightForWidth());
        campo_senha_conta->setSizePolicy(sizePolicy4);

        verticalLayout_6->addWidget(campo_senha_conta);

        campo_cartao_conta = new QLineEdit(widget1);
        campo_cartao_conta->setObjectName(QString::fromUtf8("campo_cartao_conta"));
        sizePolicy4.setHeightForWidth(campo_cartao_conta->sizePolicy().hasHeightForWidth());
        campo_cartao_conta->setSizePolicy(sizePolicy4);

        verticalLayout_6->addWidget(campo_cartao_conta);

        campo_codigo_conta = new QLineEdit(widget1);
        campo_codigo_conta->setObjectName(QString::fromUtf8("campo_codigo_conta"));
        sizePolicy4.setHeightForWidth(campo_codigo_conta->sizePolicy().hasHeightForWidth());
        campo_codigo_conta->setSizePolicy(sizePolicy4);

        verticalLayout_6->addWidget(campo_codigo_conta);

        campo_data_conta = new QLineEdit(widget1);
        campo_data_conta->setObjectName(QString::fromUtf8("campo_data_conta"));
        sizePolicy4.setHeightForWidth(campo_data_conta->sizePolicy().hasHeightForWidth());
        campo_data_conta->setSizePolicy(sizePolicy4);

        verticalLayout_6->addWidget(campo_data_conta);

        stackedWidget->addWidget(dados);
        compras = new QWidget();
        compras->setObjectName(QString::fromUtf8("compras"));
        stackedWidget->addWidget(compras);
        eventos = new QWidget();
        eventos->setObjectName(QString::fromUtf8("eventos"));
        stackedWidget->addWidget(eventos);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(TelaUsuario);
        QObject::connect(Voltar, SIGNAL(clicked()), TelaUsuario, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TelaUsuario);
    } // setupUi

    void retranslateUi(QDialog *TelaUsuario)
    {
        TelaUsuario->setWindowTitle(QApplication::translate("TelaUsuario", "Dialog", nullptr));
        label->setText(QApplication::translate("TelaUsuario", "Usu\303\241rio", nullptr));
        Cadastrar->setText(QApplication::translate("TelaUsuario", "Cadastrar", nullptr));
        Excluir->setText(QApplication::translate("TelaUsuario", "Excluir Conta", nullptr));
        Dados->setText(QApplication::translate("TelaUsuario", "Dados de Conta", nullptr));
        Compras->setText(QApplication::translate("TelaUsuario", "Minhas Compras", nullptr));
        Eventos->setText(QApplication::translate("TelaUsuario", "Meus Eventos", nullptr));
        Voltar->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        label_2->setText(QApplication::translate("TelaUsuario", "Cadastrar", nullptr));
        label_3->setText(QApplication::translate("TelaUsuario", "CPF:", nullptr));
        label_4->setText(QApplication::translate("TelaUsuario", "Senha:", nullptr));
        label_5->setText(QApplication::translate("TelaUsuario", "N\302\272 Cart\303\243o de Cr\303\251dito:", nullptr));
        label_6->setText(QApplication::translate("TelaUsuario", "C\303\263digo de Seguran\303\247a:", nullptr));
        label_7->setText(QApplication::translate("TelaUsuario", "Data de Validade:", nullptr));
        ir_cadastrar->setText(QApplication::translate("TelaUsuario", "Ir", nullptr));
        voltar_cadastrar->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        label_14->setText(QApplication::translate("TelaUsuario", "Exclus\303\243o de Conta", nullptr));
        label_9->setText(QApplication::translate("TelaUsuario", "Informa\303\247\303\265es da Conta", nullptr));
        label_10->setText(QApplication::translate("TelaUsuario", "CPF:", nullptr));
        label_11->setText(QApplication::translate("TelaUsuario", "Cart\303\243o de Cr\303\251dito:", nullptr));
        campoCPF_exclusao->setText(QApplication::translate("TelaUsuario", "Erro", nullptr));
        campoCartao_exclusao->setText(QApplication::translate("TelaUsuario", "Erro", nullptr));
        label_8->setText(QApplication::translate("TelaUsuario", "Dese mesmo excluir sua conta?", nullptr));
        confirmar_exclusao->setText(QApplication::translate("TelaUsuario", "Confirmar", nullptr));
        cancelar_exclusao->setText(QApplication::translate("TelaUsuario", "Cancelar", nullptr));
        label_12->setText(QApplication::translate("TelaUsuario", "Dados de Conta", nullptr));
        voltar_conta->setText(QApplication::translate("TelaUsuario", "Voltar", nullptr));
        alterar_cpf->setText(QApplication::translate("TelaUsuario", "Alterar CPF", nullptr));
        alterar_senha->setText(QApplication::translate("TelaUsuario", "Alterar Senha", nullptr));
        alterar_cartao->setText(QApplication::translate("TelaUsuario", "Alterar N\303\272mero Cart\303\243o", nullptr));
        alterar_codigo->setText(QApplication::translate("TelaUsuario", "Alterar C\303\263digo de Seguran\303\247a", nullptr));
        alterar_data->setText(QApplication::translate("TelaUsuario", "Alterar Data de Validade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaUsuario: public Ui_TelaUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAUSUARIO_H