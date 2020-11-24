#include "wordbook.h"
#include "ui_wordbook.h"


using namespace std;

Word w[100];
int length;

extern string username;

int saveflag = 0;

wordbook::wordbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wordbook)
{
    ui->setupUi(this);
    length = getwordbook(username,w);       //获取wordbook.txt写入w数组中
    for(int i=0;i<length;i++){
        string temp1 = w[i].getEnglish() +"\t" + w[i].getnature() + "\t" + w[i].getChinese();
        QString temp2 = QString::fromStdString(temp1);      //将string转化为QString
        QListWidgetItem *item = new QListWidgetItem(temp2);
        ui->listWidget->addItem(item);                      //将temp2写入列表ListWeight中
    }

    ui->pushButton_delete->setEnabled(false);           //delete按钮初始不可按下
    connect(ui->listWidget,SIGNAL(itemSelectionChanged()),SLOT(setPushButtonEnable())); //当有内容被选中时 delete按钮可按下
    saveflag = 0;
}


void wordbook::setPushButtonEnable()
{
    ui->pushButton_delete->setEnabled(true);
}


wordbook::~wordbook()
{
    delete ui;
}

void wordbook::on_pushButton_add_clicked()      //当添加按钮被点击 发生以下事件
{
    bool ok1;
    QString addedword = QInputDialog::getText(this, tr("单词添加"),tr("请输入您要添加的单词"), QLineEdit::Normal,0,&ok1);     //跳出弹窗读取用户输入 按下ok键ok1为真
    if(addedword.isEmpty()&&ok1){       //如果输入为空且按下ok键
        QMessageBox::warning(this,"警告","不可为空！");        //警告不可为空
        ok1 = false;        //ok1为假 不进行下去
    }
    if(ok1){        //若ok为真
        bool ok2;
        QString addednature = QInputDialog::getText(this, tr("单词添加"),tr("请输入该单词的词性"), QLineEdit::Normal,0,&ok2);
        if(addednature.isEmpty()&&ok2){
            QMessageBox::warning(this,"警告","不可为空！");
            ok2 = false;
        }
        if(ok2){
            bool ok3;
            QString addedchinese = QInputDialog::getText(this, tr("单词添加"),tr("请输入该单词的中文释义"), QLineEdit::Normal,0,&ok3);
            if(addedchinese.isEmpty()&&ok3){
                QMessageBox::warning(this,"警告","不可为空！");
                ok3 = false;
            }
            if(ok3){        //如果用户输入不出现空/取消的问题
            QListWidgetItem *item = new QListWidgetItem(addedword+"\t"+addednature+"\t"+addedchinese);
            ui->listWidget->addItem(item);      //在列表中添加单词
            string temp1 = addedword.toStdString();
            string temp2 = addednature.toStdString();
            string temp3 = addedchinese.toStdString();
            addword(w,temp1,temp2,temp3,&length);   //在数组中添加元素
            }
        }
    }
}


void wordbook::on_pushButton_delete_clicked()       //如果删除按钮被点击
{
    int row = ui->listWidget->currentRow();         //获取选中的行号
    if(row == 0){
        QMessageBox::warning(this,"警告","不可删除此行");   //如果选中了第0行
    }else{
        delete_word(w,row, &length);        //在数组中删除单词
        QList<QListWidgetItem*> selectedItems = ui->listWidget->selectedItems();
        if (selectedItems.count() > 0){
            foreach (QListWidgetItem* var, selectedItems) {
                ui->listWidget->removeItemWidget(var);
                selectedItems.removeOne(var);
                delete var;                 //在列表中删除单词
             }
        }
    }
}



void wordbook::on_pushButton_edit_clicked()
{
    int row = ui->listWidget->currentRow();     //获取被选中的行数
    if(row == 0){
        QMessageBox::warning(this,"警告","不可编辑此行");       //不可编辑第0行
    }else{
        bool ok1;
        QString temp1 = QString::fromStdString(w[row].getEnglish());
        QString editedword = QInputDialog::getText(this, tr("单词编辑"),tr("修改英文"), QLineEdit::Normal,temp1,&ok1);
        if(editedword.isEmpty()&&ok1){
            QMessageBox::warning(this,"警告","不可为空！");
            ok1 = false;
        }
        if(ok1){
            bool ok2;
            QString temp2 = QString::fromStdString(w[row].getnature());
            QString editednature = QInputDialog::getText(this, tr("单词编辑"),tr("修改词性"), QLineEdit::Normal,temp2,&ok2);
            if(editednature.isEmpty()&&ok2){
                QMessageBox::warning(this,"警告","不可为空！");
                ok2 = false;
            }
            if(ok2){
                bool ok3;
                QString temp3 = QString::fromStdString(w[row].getChinese());
                QString editedchinese = QInputDialog::getText(this, tr("单词编辑"),tr("修改中文释义"), QLineEdit::Normal,temp3,&ok3);
                if(editedchinese.isEmpty()&&ok3){
                    QMessageBox::warning(this,"警告","不可为空！");
                    ok3 = false;
                }
                if(ok3){
                    string temp1 = editedword.toStdString();
                    string temp2 = editednature.toStdString();
                    string temp3 = editedchinese.toStdString();
                    editword(w,row , temp1 , temp2 , temp3);
                    ui->listWidget->item(row)->setText(editedword+"\t"+editednature+"\t"+editedchinese);
                }
            }
        }
    }
}

void wordbook::on_pushButton_save_clicked()         //保存
{
    savewordbook(username,w,length);
    QMessageBox::information(this,"保存","您已成功保存");
    saveflag = 1;
}

void wordbook::on_pushButton_exit_clicked()         //退出
{
    if(saveflag == 0){                              //如果没有保存
        QMessageBox:: StandardButton result = QMessageBox::information(this,"注意","您尚未保存,是否保存？",QMessageBox::Yes|QMessageBox::No);   //询问是否保存
        switch (result) {
            case QMessageBox::Yes:
                ui->pushButton_save->click();       //如果按是 则保存
                close();
                break;
            case QMessageBox::No:                   //如果按否 则不保存直接退出
                close();
                break;
            default:
                break;
        }
    }
    if(saveflag == 1)                       //如果已保存 直接退出
        close();
}
