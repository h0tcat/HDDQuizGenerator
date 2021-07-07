#include <iostream>
#include <string>
#include <random>
#include <format>

int main(int argc,char** argv){

    if(argc != 2){
        std::cerr << "Usage: onetrack quizAmount" << std::endl;
    }else{

        //乱数の生成に必要なものを用意する       
        std::mt19937 engine;
        std::uniform_int_distribution<> dist(0, 512);

        int amountQuiz = std::stoi(argv[1]);

        std::string text;

        for(int i = 0; i < amountQuiz; i++){
            text = std::format("1件: {}バイトのブロックか因数: 10 で10万件のデータを\n記録するのに必要なシリンダ数は？",dist(engine));
            std::cout << "問題: " << i+1 << "\n\n" << text << "\n\n";
        }
    }

    return 0;
}