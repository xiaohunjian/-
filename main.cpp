#include<stdio.h>;
#include<graphics.h>;

#define WIDTH 1200
#define HEIGHT 900

IMAGE imgBg;//����ͼƬ



void updateWindow() {
	putimage(0, 0, &imgBg);
}

void gameStart(){
	//������Ϸ��ʼ����
	loadimage(&imgBg, "photos/start.jpg");
	//������Ϸ����
	initgraph(WIDTH, HEIGHT);
}



int main(void) {
	gameStart();

	updateWindow();

	system("pause");
	return 0;
}
