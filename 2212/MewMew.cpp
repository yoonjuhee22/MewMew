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
    str[0] = "성공하는 사람은 행동을 하고, 행운과 불운을 모두 끌어안으며 결국에는 무언가를 이루어내곤 한다.";
    str[1] = "시간이 덜어주지 않는 슬픔은 없다. - 세르비우스 수풀리키우스,키케로";
    str[2] = "슬픔은 그 자체가 약이다. - W.쿠퍼";
    str[3] = "슬픔의 유일한 치료법은 행동이다. - G.H.류이스";
    str[4] = "슬픈 마음이여, 침착하고 탄식을 멈추라.구름 뒤엔 아직도 햇빛이 빛나고 있다. - 롱페로우";
    str[5] = "새벽이 찾아오지 않는 밤은 없다. 인내와 희망을 가져라.";
    str[6] = "우리를 눈물로 인도하는 것은 우리를 은혜로 인도 할 것입니다. 우리의 고통은 결코 낭비하지 않습니다. - 밥 고프";
    str[7] = "땅 위의 눈물 방울이 하늘의 왕을 소환합니다. - Charles R. Swindoll";
    str[8] = "걱정은 내일의 슬픔을 빼앗는 것이 아니라, 오늘의 기쁨만 빼앗아갑니다. - 레오 부 스카 글 리아";
    str[9] = "같은 실수를 두려워하되 새로운 실수를 두려워하지 마라. 실수는 곧 경험이다 - 도서 '어떤 하루'";
    str[10] = "우리가 무슨 생각을 하느냐가 우리가 어떤 사람이 되는지를 결정한다. - 오프라 윈프리";

    cout << str[num];
    cout << endl;
}

void angry() {
    int num = rand() % 11;

    string str[20];
    str[0] = "분노는 무모함으로 시작해 후회로 끝난다 - 피타고라스";
    str[1] = "화가 날 때는 10가지 세어라. 화가 너무 많이 날 때는 100가지 세어라 - 토머스 제퍼슨";
    str[2] = "분노를 억제하려면 다른 사람이 분노할 때 그것을 자세히 관찰해보라 - 세네카";
    str[3] = "분노하여 가하는 일격은 결국 우리 자신을 때린다 - 윌리엄 펜";
    str[4] = "한때의 분함을 참으면 백날의 근심을 면한다 - 명심보감";
    str[5] = "화났을 때는 아무것도 하지 말라. 하는 일마다 잘못될 것이다 - 그라시안 ";
    str[6] = "인간의 삶 전체는 단지 한 순간에 불과하다. 인생을 즐기자 - 플루타르코스  ";
    str[7] = "화가 나 있는 1분마다 그대는 60초간의 행복을 잃는다 - 랄프 왈도 에머슨";
    str[8] = "분노할 때는 천천히. 시간은 충분하니까. -랄프 왈도 에머슨 ";
    str[9] = "일단은 알아차림이 먼저 일어나야 합니다. 알아차리기만 해도 어떤 문제는 저절로 해결되기도 합니다. - 법륜스님";
    str[10] = "분노를 없애려면 아무것도 하지 말아야 한다. 몸을 움직이거나,혀를 움직이는 순간 분노는 더 커질 것이기 때문이다. \n 화를 내면 주위의 사람들은 많은 상처를 입는다. 그러나 그보다 더 큰 상처를 입는 사람은  \n 바로 화를 낸 당사자 이다. - 톨스토이";

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
    cout << "                                                                                       by. 윤주희        " << endl;





    cout << "================================================================================================================" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                     안녕하세요 뮤뮤에요! 사용자님의 성함을 입력해주세요  (별명도 가능!)                ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "                                  >> 이름 입력 :";  cin >> name;
    cout << "                  반가워요 " << name << "님!! 뮤뮤가 " << name << " 님 기분에 꼭 맞는 노래 추천 해드릴게요!!        " << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                            " << name << "님! 오늘의 기분은 어떠신가요?                                         ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "==  1. 너무 행복해요!! '행복'  2. 슬퍼요ㅠㅠ 위로가 필요해요 '슬픔'  3. 다 부셔버리고 싶다!! 화가나요 '분노'  ==" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                                                                                                        ====" << endl;
    cout << "====                * 그 외에 뮤뮤의 추천 곡을 듣고 싶으시면 아무 키나 눌러주세요! *                     ====" << endl;
    cout << "====                      " << name << "님의 기분을 알려주세요! >> "; cin >> ginum;

    switch (ginum) {
    case 1: cout << "================================================================================================================" << endl;
        cout << "\n";
        cout << "                    " << name << "  님! 뮤뮤가 더 기분을 더 좋게 만들어드릴게요!! > <  뮤뮤의 추천 플레이 리스트는 " << endl; 
        cout << "투모로우바이투게더 - Magic" << endl;
        PlaySound("magic.wav", 0, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
        _getch();

        break;
    case 2: cout << "================================================================================================================" << endl;
        cout << "\n";
        sad();
        cout << "\n";
        cout << "                    " << name << "  님을 위한 뮤뮤의 플레이 리스트는 " << endl;
        cout << "The Kid LAROI, Justin Bieber - Stay" << endl;
        PlaySound("Stay.wav", 0, SND_FILENAME | SND_ASYNC);
        
        cout << "가사 보기(1)" << endl;
        cout << "정지(아무키나)" << endl;
        cout << "다음 노래로 재생(2)" << endl;
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
        cout << "                    " << name << "  님을 위한 뮤뮤의 플레이 리스트는 " << endl;
        cout << "" << endl;
       






        break;


    default: cout << "================================================================================================================" << endl;
        cout << "\n";



        cout << name << "님! 오늘의 뮤뮤 취향 추천곡을 들려드릴게요!! > < " << endl;
    }

    return 0;

}