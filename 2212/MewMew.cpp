#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <mmSystem.h>
#pragma comment(lib, "winmm.lib")
#include <tchar.h>
#include <Digitalv.h>
using namespace std;

void sad() {
    int num = rand() % 11;

    string str[20];
    str[0] = "�����ϴ� ����� �ൿ�� �ϰ�, ���� �ҿ��� ��� ��������� �ᱹ���� ���𰡸� �̷��� �Ѵ�.";
    str[1] = "�ð��� �������� �ʴ� ������ ����. - ������콺 ��Ǯ��Ű�콺,Ű�ɷ�";
    str[2] = "������ �� ��ü�� ���̴�. - W.����";
    str[3] = "������ ������ ġ����� �ൿ�̴�. - G.H.���̽�";
    str[4] = "���� �����̿�, ħ���ϰ� ź���� ���߶�.���� �ڿ� ������ �޺��� ������ �ִ�. - ����ο�";
    str[5] = "������ ã�ƿ��� �ʴ� ���� ����. �γ��� ����� ������.";
    str[6] = "�츮�� ������ �ε��ϴ� ���� �츮�� ������ �ε� �� ���Դϴ�. �츮�� ������ ���� �������� �ʽ��ϴ�. - �� ����";
    str[7] = "�� ���� ���� ����� �ϴ��� ���� ��ȯ�մϴ�. - Charles R. Swindoll";
    str[8] = "������ ������ ������ ���Ѵ� ���� �ƴ϶�, ������ ��ݸ� ���Ѿư��ϴ�. - ���� �� ��ī �� ����";
    str[9] = "���� �Ǽ��� �η����ϵ� ���ο� �Ǽ��� �η������� ����. �Ǽ��� �� �����̴� - ���� '� �Ϸ�'";
    str[10] = "�츮�� ���� ������ �ϴ��İ� �츮�� � ����� �Ǵ����� �����Ѵ�. - ������ ������";

    cout << str[num];
    cout << endl;
}

void angry() {
    int num = rand() % 11;

    string str[20];
    str[0] = "�г�� ���������� ������ ��ȸ�� ������ - ��Ÿ���";
    str[1] = "ȭ�� �� ���� 10���� �����. ȭ�� �ʹ� ���� �� ���� 100���� ����� - ��ӽ� ���۽�";
    str[2] = "�г븦 �����Ϸ��� �ٸ� ����� �г��� �� �װ��� �ڼ��� �����غ��� - ����ī";
    str[3] = "�г��Ͽ� ���ϴ� �ϰ��� �ᱹ �츮 �ڽ��� ������ - ������ ��";
    str[4] = "�Ѷ��� ������ ������ �鳯�� �ٽ��� ���Ѵ� - ��ɺ���";
    str[5] = "ȭ���� ���� �ƹ��͵� ���� ����. �ϴ� �ϸ��� �߸��� ���̴� - �׶�þ� ";
    str[6] = "�ΰ��� �� ��ü�� ���� �� ������ �Ұ��ϴ�. �λ��� ����� - �÷�Ÿ���ڽ�  ";
    str[7] = "ȭ�� �� �ִ� 1�и��� �״�� 60�ʰ��� �ູ�� �Ҵ´� - ���� �е� ���ӽ�";
    str[8] = "�г��� ���� õõ��. �ð��� ����ϴϱ�. -���� �е� ���ӽ� ";
    str[9] = "�ϴ��� �˾������� ���� �Ͼ�� �մϴ�. �˾������⸸ �ص� � ������ ������ �ذ�Ǳ⵵ �մϴ�. - ��������";
    str[10] = "�г븦 ���ַ��� �ƹ��͵� ���� ���ƾ� �Ѵ�. ���� �����̰ų�,���� �����̴� ���� �г�� �� Ŀ�� ���̱� �����̴�. \n ȭ�� ���� ������ ������� ���� ��ó�� �Դ´�. �׷��� �׺��� �� ū ��ó�� �Դ� �����  \n �ٷ� ȭ�� �� ����� �̴�. - �罺����";

    cout << str[num];
    cout << endl;

}


int main() {
    srand((unsigned)time(NULL));
    char name[30];
    int Staynum;
    int ginum;
    cout << "                                                                            " << endl;
    cout << "  ####             ####                                                     " << endl;
    cout << "  ##  ##          ## ##                                                     " << endl;
    cout << "  ##   ##       ##   ##                                                  " << endl;
    cout << "  ##    ##     ##    ##                                                        " << endl;
    cout << "  ##      ##  ##     ##       #############      ##                  ##     " << endl;
    cout << "  ##       ##        ##      ##           ##     ##      ####        ##     " << endl;
    cout << "  ##                 ##     ##            ##     ##      ##  ##      ##    " << endl;
    cout << "  ##                 ##    #################      ##     ##  ##      ##     " << endl;
    cout << "  ##                 ##    ##                      ##    ##  ##     ##      " << endl;
    cout << "  ##                 ##     ##                      ##   ##   ##    ##      " << endl;
    cout << "  ##                 ##      ##            ##        ##  ##   ##   ##       " << endl;
    cout << "  ##                 ##       ##############          #####    ####         " << endl;
    cout << "                                                                            " << endl;
    cout << "                                                                            " << endl;
    cout << "            ####             ####                                                          ***        " << endl;
    cout << "            ##  ##          ## ##                                                        *******      " << endl;
    cout << "            ##   ##       ##   ##                                                       **********       " << endl;
    cout << "            ##    ##     ##    ##                                                        ********         " << endl;
    cout << "            ##      ##  ##     ##       #############      ##                 ##          ******         " << endl;
    cout << "            ##       ##        ##      ##           ##     ##      ####       ##           ****           " << endl;
    cout << "            ##                 ##     ##            ##     ##      ##  ##      ##           **         " << endl;
    cout << "            ##                 ##    #################      ##     ##  ##      ##            *          " << endl;
    cout << "            ##                 ##    ##                      ##    ##  ##     ##                        " << endl;
    cout << "            ##                 ##     ##                      ##   ##   ##    ##             *          " << endl;
    cout << "            ##                 ##      ##            ##        ##  ##   ##   ##             ***         " << endl;
    cout << "            ##                 ##       ##############          #####    ####                *             " << endl;
    cout << "                                                                                                            " << endl;
    cout << "                                                                                                         " << endl;
    cout << "                                                                                       by. ������        " << endl;





    cout << "================================================================================================================" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                     �ȳ��ϼ��� �¹¿���! ����ڴ��� ������ �Է����ּ���  (���� ����!)                ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "                                  >> �̸� �Է� :";  cin >> name;
    cout << "                  �ݰ����� " << name << "��!! �¹°� " << name << " �� ��п� �� �´� �뷡 ��õ �ص帱�Կ�!!        " << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                            " << name << "��! ������ ����� ��Ű���?                                         ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "==  1. �ʹ� �ູ�ؿ�!! '�ູ'  2. ���ۿ�Ф� ���ΰ� �ʿ��ؿ� '����'  3. �� �μŹ����� �ʹ�!! ȭ������ '�г�'  ==" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                * �� �ܿ� �¹��� ��õ ���� ��� �����ø� �ƹ� Ű�� �����ּ���! *                     ====" << endl;
    cout << "====                      " << name << "���� ����� �˷��ּ���! >> "; cin >> ginum;

    switch (ginum) {
    case 1: cout << "================================================================================================================" << endl;
        cout << "\n";
        cout << "                    " << name << "  ��! �¹°� �� ����� �� ���� �����帱�Կ�!! > <  �¹��� ��õ �÷��� ����Ʈ�� " << endl; 
        cout << "����ο�������Դ� - Magic" << endl;
        PlaySound("magic.wav", 0, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
        _getch();

        break;
    case 2: cout << "================================================================================================================" << endl;
        cout << "\n";
        sad();
        cout << "\n";
        cout << "                    " << name << "  ���� ���� �¹��� �÷��� ����Ʈ�� " << endl;
        cout << "The Kid LAROI, Justin Bieber - Stay" << endl;
        PlaySound("Stay.wav", 0, SND_FILENAME | SND_ASYNC);
        
        cout << "���� ����(1)" << endl;
        cout << "����(�ƹ�Ű��)" << endl;
        cout << "���� �뷡�� ���(2)" << endl;
        cin >> Staynum; 
        switch(Staynum){
        case 1: 
            cout << "I do the same thing I told you that I never would\n"
            "I told you I'd change, even\n" 
            "when I knew I never could\n"
            "I know that I can't find nobody else\n" 
            "as good as you\n" 
            "I need you to stay,\n"
            "need you to stay, hey(Oh)\n"
            "I get drunk, wake up, I'm wasted still\n"
            "I realize the time that I wasted here\n"
            "I feel like you can't feel the way I feel\n"
            "Oh, I'll be fucked up\n"
            "if you can't be right here\n"
            "Oh, ooh - woah(Oh, ooh - woah, ooh - woah)\n"
                "Oh, ooh - woah(Oh, ooh - woah, ooh - woah)\n"
                "Oh, ooh - woah(Oh, ooh - woah, ooh - woah)\n"
                "Oh, I'll be fucked up\n"
                "if you can't be right here\n"
                    "I do the same thing I told you\n"
                    "that I never would\n"
                    "I told you I'd change,\n"
                    "even when I knew I never could\n"
                    "I know that I can't find nobody else\n"
                    "as good as you\n"
                    "I need you to stay, need you to stay, hey\n"
                    "I do the same thing I told you\n"
                    "that I never would\n"
                    "I told you I'd change,\n"
                    "even when I knew I never could\n"
                    "I know that I can't find nobody else\n"
                    "as good as you\n"
                    "I need you to stay, need you to stay, hey\n"
                    "When I'm away from you,\n"
                    "I miss your touch(Ooh)\n"
                    "You're the reason I believe in love\n"
                    "It's been difficult for me to trust (Ooh)\n"
                    "And I'm afraid that I'ma fuck it up\n"
                    "Ain't no way that I can leave you stranded\n"
                    "Cause you ain't ever left me empty - handed\n"
                    "And you know that I know\n"
                    "that I can't live without you\n"
                    "So, baby, stay\n"
                    "Oh, ooh - woah(Oh, ooh - woah, ooh - woah)\n"
                    "Oh, ooh - woah(Oh, ooh - woah, ooh - woah)\n"
                    "Oh, ooh - woah(Oh, ooh - woah, ooh - woah)\n"
                    "I'll be fucked up if you can't be right here\n"
                    "I do the same thing I told you\n"
                    "that I never would\n"
                    "I told you I'd change,\n"
                    "even when I knew I never could\n"                    
                    "Iknow that I can't find nobody else\n"
                    "as good as you\n"
                    "I need you to stay, need you to stay, hey\n"
                    "I do the same thing I told you\n"
                    "that I never would\n"
                    "I told you I'd change,\n"
                    "even when I knew I never could\n"
                    "I know that I can't find nobody else\n"
                    "as good as you\n"
                    "I need you to stay, need you to stay, hey\n"
                    "Woah - oh\n"
                    "I need you to stay, need you to stay, hey\n";
        }
        _getch();

        break;
    case 3: cout << "================================================================================================================" << endl;
        cout << "\n";
        angry();
        cout << "\n";
        cout << "                    " << name << "  ���� ���� �¹��� �÷��� ����Ʈ�� " << endl;
        cout << "" << endl;
       






        break;


    default: cout << "================================================================================================================" << endl;
        cout << "\n";



        cout << name << "��! ������ �¹� ���� ��õ���� ����帱�Կ�!! > < " << endl;
    }

    return 0;

}