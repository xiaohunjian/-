#include<stdio.h>;
#include<graphics.h>;

#define WIDTH 1200
#define HEIGHT 900

IMAGE imgBg;//背景图片



void updateWindow() {
	putimage(0, 0, &imgBg);
}

void gameStart(){
	//加载游戏开始界面
	loadimage(&imgBg, "photos/start.jpg");
	//创建游戏窗口
	initgraph(WIDTH, HEIGHT);
}



int main(void) {
	gameStart();

	updateWindow();

	system("pause");
	return 0;
}
