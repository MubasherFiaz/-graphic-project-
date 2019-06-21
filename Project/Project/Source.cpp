#include<GL/glut.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
void keys(unsigned char key, int x, int y);
void mydisplay();
void mydisplay1();
void text();
void man();
void man1();
void mouse();
void mouse1();
void mouse_move(unsigned char key, int x, int y);
void net_key(unsigned char key, int x, int y);
void net_cut(unsigned char key, int x, int y);
void last_fly(unsigned char key, int x, int y);
void broke_net();
void conclusion();
void back_ground();
void back_ground2();
void back_ground3();
void back_ground4();
void back_ground5();
int display_order = 0, net_k = 0, display_order_last = 0;
int i;
float a = 0, c = 0, d = 0, b = 0, nx4, ny4, ma = 0, mf = 0, mox;// annimation variable
float j = 0;
char str[] = "Arid Agriculture University RWP";
char str1[] = "Graphic Project";
char str2[] = "";
char str3[] = "MINI PROFECT ON";
char str4[] = "UNITY IS STRENGTH";
char str5[] = "TEAM MEMBER :";
char str6[] = "Usama Bin Hafeez  16-ARID-1004";
char str7[] = "Mubashar Faiz 16-ARID-910";
char str9[] = "Sayyam Abbasi 16-ARID-986";
char str10[] = "Muhammad Abdullah";
char str11[] = "Ahad lodhi ";
char str8[] = "DEPT OF BSCS,SEC B";
char str12[] = "DEPT OF COMPUTER SCIENCE ";
char str13[] = "PRESS R TO CONTINUE";
char str14[] = "";
char str15[] = "PRESS t/T TO CONTINUE";
GLint angle;
void rotate()
{
	glTranslatef(50, 0, 0);
	glRotatef(angle, 0, 0, 1);
}
void myinit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0f);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1000, 0, 800);
	glMatrixMode(GL_MODELVIEW);
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	if (display_order == 0)
	{
		text();
		glutKeyboardFunc(keys);
	}
	if (display_order == 1)
	{
		back_ground();

		if (a>-100)
		{
			glutPostRedisplay();

		}
		else
			glutKeyboardFunc(keys);//else

	}
	if (display_order == 2)
	{
		back_ground2();
		man();
		if (a>-50)
		{
			glutPostRedisplay();
		}
		else
		{
			net_k = 1; a = -50;
			back_ground2();
			man();
			glutKeyboardFunc(net_key);
		}

	}
	if (display_order == 3)
	{
		back_ground3();
		man1();

		if (ma>-1250)
		{

			glutPostRedisplay();

		}
		else
			glutKeyboardFunc(mouse_move);

	}
	if (display_order == 4)
	{
		back_ground4();

		if (a>-100)
		{

			glutPostRedisplay();
		}
		else
			glutKeyboardFunc(mouse_move);


	}
	if (display_order == 5)
	{
		back_ground5();
		mouse();
		if (a>-50)
		{

			glutPostRedisplay();
		}
		else
		{
			glutKeyboardFunc(mouse_move);
		}

	}
	if (display_order == 6)
	{
		back_ground3();
		mouse1();
		if (mox>-33)
			glutPostRedisplay();
		else
			glutKeyboardFunc(net_cut);

		//mouse1();
	}
	if (display_order == 7)
	{
		back_ground3();
		mouse1();
		broke_net();
		glutKeyboardFunc(last_fly);
	}
	if (display_order == 8)
	{

		back_ground3();
		mouse1();
		broke_net();

		if (mox >= -40)
		{
			glutPostRedisplay();
		}
		else
			glutKeyboardFunc(last_fly);
	}
	if (display_order == 9)
	{

		conclusion();
		back_ground();
		glutKeyboardFunc(last_fly);
	}


	glFlush();
}

void last_fly(unsigned char key, int x, int y)
{
	if (key == 'f' | key == 'F')
	{
		display_order++;
		a = -50;
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1440, 900);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);

	}
	if (key == 't' | key == 'T')
	{
		display_order++;

		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1440, 900);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);

	}
	if (key == 'x' | key == 'X')
	{
		exit(0);
	}
}

void net_cut(unsigned char key, int x, int y)
{
	if (key == 'c' | key == 'C')
	{
		display_order++;

		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1440, 900);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);

	}

}

void conclusion()
{
	glClearColor(1.0, 1.0, 1.0, 0.0f);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 100, 0, 100);

	glMatrixMode(GL_MODELVIEW);
	glBegin(GL_POLYGON);
	glColor3f(0.333, 0.420, 0.184);
	glVertex2f(0, 0);
	glColor3f(1, 0, 0);
	glVertex2f(100, 0);
	glColor3f(0.333, 0.420, 0.184);
	glVertex2f(100, 100);
	glVertex2f(0, 100);
	glEnd();

	glColor3f(1, 0, 0);
	char str20[] = "MORAL :";
	glRasterPos2f(10, 50);
	for (i = 0; i<strlen(str20); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str20[i]);
	}
	char str21[] = "WHEN YOU WORK TOGETHER YOU ARE STONGER";
	char str22[] = "AND YOU ARE ABLE TO FACE ANY TYPE OF PROBLEM";
	char str23[] = "AND YOU WILL SOLVE THAT PROBLEM";
	glColor3f(1, 1, 0);
	glRasterPos2f(20, 50);

	for (i = 0; i<strlen(str21); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str21[i]);

	}
	glRasterPos2f(20, 45);
	for (i = 0; i<strlen(str22); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str22[i]);

	}
	glRasterPos2f(20, 40);
	for (i = 0; i<strlen(str23); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str23[i]);

	}
	glColor3f(1, 0, 0);
	char str[] = "PRESS x/X TO EXIT";
	glRasterPos2f(20, 5);
	for (i = 0; i<strlen(str); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
	}

}

void mouse_move(unsigned char key, int x, int y)
{
	if (key == 'm' | key == 'M')
	{
		display_order++;

		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1440, 900);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);

	}
	if (key == 'd' | key == 'D')
	{
		display_order++;
		a = 0; b = 0; c = 0; d = 0;
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1440, 900);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);

	}
	if (key == 'n' | key == 'N')
	{
        display_order++;
		a = 0; b = 0; c = 0; d = 0;
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1440, 900);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
	}
}
void net_key(unsigned char key, int x, int y)
{
	if (key == 'n' | key == 'N')
	{
		display_order++;

		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1440, 900);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
		a = -50;
	}
}
void keys(unsigned char key, int x, int y)
{

	if (key == 'r' || key == 'R')
	{
		display_order++;
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1440, 900);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
		
	}
	if (key == 'd' | key == 'D')
	{
		display_order++;
		a = 0;
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1440, 900);
		glutInitWindowPosition(0, 0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
	}

}

void broke_net()
{
	int c = 0, d = 0;

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(30, 50);
	glVertex2f(34, 54);
	glVertex2f(28, 49);
	glVertex2f(35, 45);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(33 + c, 42 + d);
	glVertex2f(31 + c, 38 + d);
	glVertex2f(30 + c, 38 + d);
	glVertex2f(28 + c, 30 + d);
	glVertex2f(28 + c, 45 + d);
	glVertex2f(25 + c, 35 + d);
	glVertex2f(33 + c, 20 + d);
	glVertex2f(38 + c, 10 + d);
	glVertex2f(43 + c, 33 + d);
	glVertex2f(38 + c, 25 + d);

	glEnd();
	// horizontal line bottem
	glBegin(GL_LINES);
	glVertex2f(20 + c, 47 + d);
	glVertex2f(18 + c, 44 + d);
	glVertex2f(14 + c, 35 + d);
	glVertex2f(13 + c, 28 + d);
	glVertex2f(20 + c, 25 + d);
	glVertex2f(25 + c, 24 + d);
	glVertex2f(35 + c, 25 + d);
	glVertex2f(40 + c, 27 + d);
	glVertex2f(50 + c, 25 + d);
	glVertex2f(50 + c, 30 + d);
	glVertex2f(45 + c, 40 + d);
	glVertex2f(40 + c, 45 + d);
	glEnd();
	int nx = 2, ny = 3, nxr = 2;
	glBegin(GL_LINES);
	glVertex2f(14 + nx + c, 35 + 2 + d);
	glVertex2f(13 + nx + c, 28 + ny + d);
	glVertex2f(25 + nx + c, 25 + ny + d);
	glVertex2f(30 + nx + c, 28 + ny + d);
	glVertex2f(50 - nx + c, 30 + ny + d);
	glVertex2f(48 - nx + c, 35 + 1 + d);
	glEnd();

	//3rd horizontal
	nx = 4; ny = 6;;
	glBegin(GL_LINES);
	glVertex2f(18 + nx + c, 44 + 2 + d);
	glVertex2f(16 + nx + c, 40 + 3 + d);
	glVertex2f(13 + nx + c, 28 + ny + d);
	glVertex2f(15 + nx + c, 25 + ny + 1 + d);
	glVertex2f(30 + nx + c, 25 + ny + 1 + d);
	glVertex2f(35 + nx + c, 23 + ny + 1 + d);
	glVertex2f(48 - nx - 2 + c, 35 + 5 + d);
	glVertex2f(45 - nx - 3 + c, 40 + 5 + d);
	glEnd();
	nx = 6; ny = 9;
	glBegin(GL_LINES);
	glVertex2f(20 + nx - 2 + c, 47 + 1 + d);
	glVertex2f(18 + nx + c, 44 + 3 + d);
	glVertex2f(16 + nx + c, 40 + 4 + d);
	glVertex2f(14 + nx + c, 35 + 4 + d);
	glVertex2f(13 + nx + c, 28 + ny + d);
	glVertex2f(15 + nx + c, 25 + ny + 2 + d);
	glVertex2f(20 + nx + c, 25 + ny + 2 + d);
	glVertex2f(25 + nx + c, 22 + ny + 2 + d);
	glEnd();
	//4th
	nx = 8; ny = 12;
	glBegin(GL_LINES);
	glVertex2f(20 + nx - 2 + c, 47 + 2 + d);
	glVertex2f(18 + nx + c, 44 + 4 + d);
	glVertex2f(16 + nx + 1 + c, 40 + 6 + d);
	glVertex2f(14 + nx + 1 + c, 35 + 8 + d);
	glVertex2f(13 + nx + 1 + c, 28 + ny + d);
	glVertex2f(15 + nx + 1 + c, 25 + ny + 2 + d);
	glVertex2f(20 + nx + c, 25 + ny + 2 + d);
	glVertex2f(25 + nx + c, 23 + ny + 2 + d);
	glVertex2f(30 + nx + c, 25 + ny + 2 + d);
	glVertex2f(35 + nx + c, 23 + ny + 2 + d);
	glEnd();

	glFlush();
}
void mouse(void)
{
	int rx = -5, ry = 18;
	glColor3f(1, 1, 1);
	glBegin(GL_LINE_STRIP);
	glBegin(GL_POLYGON);
	glEnd();
}

void mouse1(void)
{
	int rx = -5, ry = 18;
	glColor3f(1, 1, 1);
	mox -= .05;
	if (display_order == 7)
	{
		rx = -45; ry = 22;
	}
	if (display_order == 8)
	{
		rx = -43; ry = 22; mox += .045;
	}
	if (mox>-100)
	{
		//glBegin(GL_LINE_STRIP);
		glBegin(GL_POLYGON);
		glVertex2f(86 + rx + mox, 16. + ry);
		glVertex2f(85.06 + rx + mox, 16.25 + ry);
		glVertex2f(85.06 + rx + mox, 16.75 + ry);
		glVertex2f(86.00 + rx + mox, 17.50 + ry);
		glVertex2f(87.00 + rx + mox, 18.25 + ry);
		glVertex2f(88.00 + rx + mox, 18.75 + ry);
		glVertex2f(88.04 + rx + mox, 20.0 + ry);
		glVertex2f(88.06 + rx + mox, 19.0 + ry);
		glVertex2f(89 + rx + mox, 19.25 + ry);
		glVertex2f(90 + rx + mox, 19.25 + ry);
		glVertex2f(91 + rx + mox, 19.25 + ry);
		glVertex2f(91.08 + rx + mox, 19.25 + ry);
		glVertex2f(92 + rx + mox, 19.50 + ry);
		glVertex2f(93 + rx + mox, 20 + ry);
		glVertex2f(94 + rx + mox, 20.50 + ry);
		glVertex2f(95 + rx + mox, 20.75 + ry);
		glVertex2f(96 + rx + mox, 20.75 + ry);
		glVertex2f(97 + rx + mox, 20 + ry);
		glVertex2f(98 + rx + mox, 19 + ry);
		glVertex2f(99 + rx + mox, 15 + ry);
		glVertex2f(99.08 + rx + mox, 14.0 + ry);
		glVertex2f(89.8 + rx + mox, 15.75 + ry);
		glVertex2f(88 + rx + mox, 15.50 + ry);
		glVertex2f(87 + rx + mox, 15.58 + ry);
		glVertex2f(86.8 + rx + mox, 15.66 + ry);
		glVertex2f(86.6 + rx + mox, 15.74 + ry);
		glVertex2f(86.4 + rx + mox, 15.82 + ry);
		glVertex2f(86.2 + rx + mox, 15.90 + ry);
		glVertex2f(86 + rx + mox, 16 + ry);
		glEnd();

		//back_leg_body
		glBegin(GL_POLYGON);
		glVertex2f(99.08 + rx + mox, 14.0 + ry);
		glVertex2f(98 + rx + mox, 13.25 + ry);
		glVertex2f(97 + rx + mox, 13.25 + ry);
		glVertex2f(96.02 + rx + mox, 13.25 + ry);
		glVertex2f(94.02 + rx + mox, 13 + ry);
		glVertex2f(94 + rx + mox, 13.10 + ry);
		glVertex2f(93.6 + rx + mox, 13.20 + ry);
		glVertex2f(93 + rx + mox, 13.5 + ry);
		glVertex2f(92.6 + rx + mox, 13.5 + ry);
		glVertex2f(92.2 + rx + mox, 14 + ry);
		glVertex2f(92 + rx + mox, 19.50 + ry);
		glEnd();

		//front right leg body
		glBegin(GL_POLYGON);
		glVertex2f(92.2 + rx + mox, 14 + ry);
		glVertex2f(90.3 + rx + mox, 14.42 + ry);
		glVertex2f(90 + rx + mox, 14.8 + ry);
		glVertex2f(86.00 + rx + mox, 17.50 + ry);
		glVertex2f(94 + rx + mox, 20.50 + ry);
		glEnd();

		//glBegin(GL_LINE_STRIP);
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(92.2 + rx + mox, 14 + ry);
		glVertex2f(91.5 + rx + mox, 13.5 + ry);
		glVertex2f(90.6 + rx + mox, 13 + ry);
		glVertex2f(89.7 + rx + mox, 13.5 + ry);
		glVertex2f(90 + rx + mox, 14 + ry);
		glVertex2f(90.3 + rx + mox, 14.42 + ry);
		glVertex2f(90 + rx + mox, 14.8 + ry);
		glEnd();

		//front leg body
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(90 + rx + mox, 14.8 + ry);
		glVertex2f(89.8 + rx + mox, 14.2 + ry);
		glVertex2f(89.6 + rx + mox, 14.4 + ry);
		glVertex2f(89.2 + rx + mox, 14.8 + ry);
		glVertex2f(88.8 + rx + mox, 15 + ry);
		glVertex2f(88.4 + rx + mox, 15.5 + ry);
		glVertex2f(91 + rx + mox, 19.25 + ry);
		glEnd();

		//back leg
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(98 + rx + mox, 13.25 + 2 + ry);
		glVertex2f(97.5 + rx + mox, 12.4 + ry);
		glVertex2f(96 + rx + mox, 12.4 + ry);
		glVertex2f(95.3 + rx + mox, 12.4 + ry);
		glVertex2f(95 + rx + mox, 12.5 + ry);
		glVertex2f(94.6 + rx + mox, 12.4 + ry);
		glVertex2f(94.2 + rx + mox, 13 + ry);
		glVertex2f(94.6 + rx + mox, 13.10 + ry);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.980, 0.922, 0.843);
		glVertex2f(94.6 + rx + mox, 12.4 + ry);
		glVertex2f(94 + rx + mox, 12.2 + ry);
		glVertex2f(94.2 + rx + mox, 13 + ry);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(94.2 + rx + mox, 13 + ry);
		glVertex2f(93.6 + rx + mox, 12.3 + ry);
		glVertex2f(94 + rx + mox, 13.10 + ry);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(94 + rx + mox, 13.10 + ry);
		glVertex2f(93.2 + rx + mox, 12.4 + ry);
		glVertex2f(93.6 + rx + mox, 13.20 + ry);
		glEnd();

		//front right leg
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(89.7 + rx + mox, 13.5 + ry);
		glVertex2f(89.2 + rx + mox, 13.25 + ry);
		glVertex2f(88.9 + rx + mox, 12.75 + ry);
		glVertex2f(89.6 + rx + mox, 13 + ry);
		glVertex2f(89.2 + rx + mox, 12.5 + ry);
		glVertex2f(89.8 + rx + mox, 12.6 + ry);
		glVertex2f(90.6 + rx + mox, 13 + ry);
		glEnd();

		//front left leg
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(89.2 + rx + mox, 14.8 + ry);
		glVertex2f(89 + rx + mox, 14.5 + ry);
		glVertex2f(88.6 + rx + mox, 14 + ry);
		glVertex2f(88.6 + rx + mox, 13 + ry);
		glVertex2f(89 + rx + mox, 13.5 + ry);
		glVertex2f(89.8 + rx + mox, 14.2 + ry);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.980, 0.922, 0.843);
		glVertex2f(88.6 + rx + mox, 14 + ry);
		glVertex2f(87.6 + rx + mox, 13.5 + ry);
		glVertex2f(87.8 + rx + mox, 13.25 + ry);
		glVertex2f(88.2 + rx + mox, 13.5 + ry);
		glVertex2f(88 + rx + mox, 13 + ry);
		glVertex2f(88.6 + rx + mox, 13 + ry);
		glEnd();

		//eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 1);
		glVertex2f(87.6 + rx + mox, 17.5 + ry);
		glVertex2f(87.8 + rx + mox, 17.5 + ry);
		glVertex2f(88 + rx + mox, 17.7 + ry);
		glVertex2f(87.8 + rx + mox, 17.7 + ry);

		glEnd();

		//tail
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(99.08 + rx + mox, 14.0 + ry);
		glVertex2f(99.08 + rx + mox + 4, 14.0 + ry);
		glVertex2f(99.08 + rx + mox + 7, 14.0 - .2 + ry);
		glVertex2f(99.08 + rx + mox + 4, 14.0 - .4 + ry);
		glVertex2f(99.08 + rx + mox - 1, 14.0 - .4 + ry);
		glEnd();

	}
}

void man()
{
	//int mx = 300, my = 300;
	glColor3f(1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 2000, 0, 2000);
	glMatrixMode(GL_MODELVIEW);
	glBegin(GL_POLYGON);
	glEnd();

	}

void man1()
{

	int mx = 300, my = 300;
	glColor3f(1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 2000, 0, 2000);
	glMatrixMode(GL_MODELVIEW);
	ma -= 1;
	if (ma>-1300)
	{
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(550 + 300 + 700 + mx + ma, 670 + my);//head

		glVertex2f(530 + 300 + 700 + mx + ma, 610 + my);
		glVertex2f(580 + 300 + 700 + mx + ma, 575 + my);
		glVertex2f(610 + 300 + 700 + mx + ma, 665 + my);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);//head
		glVertex2f(525 + 300 + 700 + mx + ma, 700 + my);
		glVertex2f(510 + 300 + 700 + mx + ma, 675 + my);
		glVertex2f(550 + 300 + 700 + mx + ma, 660 + my);
		glVertex2f(610 + 300 + 700 + mx + ma, 665 + my);
		glVertex2f(610 + 300 + 700 + mx + ma, 685 + my);
		glVertex2f(600 + 300 + 700 + mx + ma, 700 + my);
		glVertex2f(590 + 300 + 700 + mx + ma, 710 + my);
		glVertex2f(550 + 300 + 700 + mx + ma, 710 + my);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(1, 0.871, 0.678);
		glVertex2f(535 + 300 + 700 + mx + ma, 610 + my);//head
		glVertex2f(500 + 300 + 700 + mx + ma, 625 + my);
		glVertex2f(525 + 300 + 700 + mx + ma, 575 + my);
		glVertex2f(590 + 300 + 700 + mx + ma, 575 + my);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1, 0.871, 0.678);
		glVertex2f(510 + 300 + 700 + mx + ma, 675 + my);//face
		glVertex2f(510 + 300 + 700 + mx + ma, 640 + my);
		glVertex2f(550 + 300 + 700 + mx + ma, 660 + my);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(1, 0.871, 0.678);
		glVertex2f(510 + 300 + 700 + mx + ma, 640 + my);//face
		glVertex2f(500 + 300 + 700 + mx + ma, 625 + my);
		glVertex2f(535 + 300 + 700 + mx + ma, 610 + my);
		glVertex2f(550 + 300 + 700 + mx + ma, 660 + my);
		glEnd();
		glPointSize(6.0);//eye
		glBegin(GL_POINTS);
		glColor3f(0, 0, 0);
		glVertex2f(528 + 300 + 700 + mx + ma, 645 + my);
		glEnd();
		glBegin(GL_LINE_STRIP);
		glColor3f(0, 0, 0);
		glVertex2f(520 + 300 + 700 + mx + ma, 650 + my);
		glVertex2f(525 + 300 + 700 + mx + ma, 655 + my);
		glVertex2f(535 + 300 + 700 + mx + ma, 655 + my);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.502, 0.502, 0);//neck
		glVertex2f(525 + 300 + 700 + mx + ma, 575 + my);
		glColor3f(0, 0, 0);
		glVertex2f(500 + 300 + 700 + mx + ma, 525 + my);
		glVertex2f(590 + 300 + 700 + mx + ma, 575 + my);
		glEnd();

		glBegin(GL_POLYGON);	
		glColor3f(1, 0.894, 0.769);
		glVertex2f(440 + 300 + 700 + mx + ma, 450 + my);
		glVertex2f(440 + 300 + 700 + mx + ma, 390 + my);
		glVertex2f(500 + 300 + 700 + mx + ma, 450 + my);
		glVertex2f(500 + 300 + 700 + mx + ma, 390 + my);
		glEnd();


		glBegin(GL_POLYGON);
		glColor3f(0.545, 0.000, 0.000);
		glVertex2f(500 + 300 + 700 + mx + ma, 525 + my);
		glVertex2f(475 + 300 + 700 + mx + ma, 400 + my);
		glVertex2f(475 + 300 + 700 + mx + ma, 375 + my);
		glVertex2f(560 + 300 + 700 + mx + ma, 375 + my);
		glVertex2f(575 + 300 + 700 + mx + ma, 400 + my);
		glVertex2f(565 + 300 + 700 + mx + ma, 500 + my);
		glVertex2f(600 + 300 + 700 + mx + ma, 525 + my);
		glVertex2f(580 + 300 + 700 + mx + ma, 575 + my);
		glEnd();
		glColor3f(1.0, 1.0, 1.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0, 2000, 0, 2000);
		glMatrixMode(GL_MODELVIEW);

		glBegin(GL_POLYGON);
		glColor3f(0.1, 0.000, 0.000);
		glVertex2f(475 + 300 + 700 + mx + ma, 375 + my);//leg
		glColor3f(0.545, 0.000, 0.000);
		glVertex2f(460 + 300 + 700 + mx + ma, 225 + my);
		glColor3f(0, 0, 0);
		glVertex2f(600 + 300 + 700 + mx + ma, 225 + my);
		glColor3f(0, 0, 0);
		glVertex2f(600 + 300 + 700 + mx + ma, 375 + my);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);

		glVertex2f(1460 - 50 + mx + ma, 200 + my);

		glVertex2f(1460 + 50 + mx + ma, 1000 + my);
		glColor3f(0.545, 0.271, 0.075);
		glVertex2f(1470 + 50 + mx + ma, 1000 + my);
		glVertex2f(1470 - 50 + mx + ma, 200 + my);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);//fingures1
		glVertex2f(440 + 300 + 20 + 700 + mx + ma, 450 + my);
		glVertex2f(400 + 300 + 20 + 700 + mx + ma, 450 + my);
		glVertex2f(400 + 300 + 20 + 700 + mx + ma, 390 + my);
		glVertex2f(440 + 300 + 20 + 700 + mx + ma, 400 + my);
		glEnd();

		glBegin(GL_POLYGON);
		//hand2
		glColor3f(1, 1.871, 0.678);
		glVertex2f(565 + 300 + 700 + mx + ma, 500 + my);
		glVertex2f(575 + 300 + 700 + mx + ma, 400 + my);
		glVertex2f(615 + 300 + 700 + mx + ma, 400 + my);
		glVertex2f(615 + 300 + 700 + mx + ma, 475 + my);
		glColor3f(0, 0, 0);
		glVertex2f(600 + 300 + 700 + mx + ma, 525 + my);
		glEnd();
		glBegin(GL_POLYGON);

		glVertex2f(500 + 300 + 700 + mx + ma, 400 + my);
		glVertex2f(450 + 300 + 700 + mx + ma, 420 + my);
		glVertex2f(450 + 300 + 700 + mx + ma, 355 + my);
		glVertex2f(500 + 300 + 700 + mx + ma, 365 + my);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(1, 1.871, 0.678);
		glVertex2f(615 + 300 + 700 + mx + ma, 415 + my);//hand2
		glVertex2f(500 + 300 + 700 + mx + ma, 400 + my);
		glVertex2f(500 + 300 + 700 + mx + ma, 365 + my);
		glColor3f(0.512, 0.512, 0);
		glVertex2f(615 + 300 + 700 + mx + ma, 365 + my);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);//leg1
		glVertex2f(475 + 300 + 700 + mx + ma, 225 + my);
		glColor3f(0, 0.000, 1);
		glVertex2f(500 + 300 + 700 + mx + ma, 100 + my);
		glVertex2f(530 + 300 + 700 + mx + ma, 100 + my);
		glColor3f(0, 0, 0);
		glVertex2f(530 + 300 + 700 + mx + ma, 225 + my);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.1, 0.000, 1);
		glVertex2f(530 + 300 + 700 + mx + ma, 225 + my);
		glVertex2f(530 + 300 + 700 + mx + ma, 100 + my);
		glVertex2f(575 + 300 + 700 + mx + ma, 100 + my);
		glColor3f(0, 0, 0);
		glVertex2f(600 + 300 + 700 + mx + ma, 225 + my);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(1, 0.871, 0.678);
		glVertex2f(500 + 300 + 700 + mx + ma, 100 + my);
		glVertex2f(500 + 300 + 700 + mx + ma, 75 + my);
		glVertex2f(530 + 300 + 700 + mx + ma, 75 + my);
		glColor3f(0, 0, 0); glColor3f(0.184, 0.310, 0.310);
		glVertex2f(530 + 300 + 700 + mx + ma, 100 + my);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.871, 0.871, 0.678);
		glVertex2f(500 + 300 + 700 + mx + ma, 75 + my);
		glColor3f(0, 0, 0);
		glVertex2f(460 + 300 + 700 + mx + ma, 50 + my);
		glVertex2f(460 + 300 + 700 + mx + ma, 25 + my);
		glVertex2f(530 + 300 + 700 + mx + ma, 25 + my);
		glVertex2f(530 + 300 + 700 + mx + ma, 75 + my);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.871, 0.871, 0.678);
		glVertex2f(530 + 300 + 700 + mx + ma, 100 + my);
		glVertex2f(530 + 300 + 700 + mx + ma, 75 + my);
		glVertex2f(575 + 300 + 700 + mx + ma, 75 + my);
		glColor3f(0.184, 0.310, 0.310);
		glVertex2f(575 + 300 + 700 + mx + ma, 100 + my);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.871, 0.871, 0.678);
		glVertex2f(530 + 300 + 700 + mx + ma, 75 + my);
		glColor3f(0, 0, 0);
		glVertex2f(500 + 300 + 700 + mx + ma, 50 + my);
		glVertex2f(500 + 300 + 700 + mx + ma, 25 + my);
		glVertex2f(575 + 300 + 700 + mx + ma, 25 + my);
		glVertex2f(575 + 300 + 700 + mx + ma, 75 + my);
		glEnd();
		mf = ma;

	}
}

void text()
{
	glColor3f(1, 1, 0);
	glRasterPos2f(300, 750);

	for (i = 0; i<strlen(str); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);

	}
	glRasterPos2f(370, 700);
	for (i = 0; i<strlen(str1); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str1[i]);
	}
	glColor3f(1, 0, 1);
	glRasterPos2f(240, 650);
	for (i = 0; i<strlen(str2); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[i]);
	}glColor3f(1, 1, 0);
	glRasterPos2f(345, 600);
	for (i = 0; i<strlen(str3); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[i]);
	}


	glRasterPos2f(340, 550);
	for (i = 0; i<strlen(str4); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str4[i]);
	}

	glColor3f(1, 1, 0);
	glRasterPos2f(10, 250);
	for (i = 0; i<strlen(str5); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str5[i]);
	}glColor3f(1, 1, 0);
	glRasterPos2f(10, 200);
	for (i = 0; i<strlen(str6); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str6[i]);
	}glColor3f(1, 1, 0);
	glRasterPos2f(10, 150);
	for (i = 0; i<strlen(str7); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str7[i]);
	}
	glColor3f(1, 1, 0);
	glRasterPos2f(10, 100);

	for (i = 0; i<strlen(str8); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str8[i]);
	}
	glColor3f(1, 1, 0);
	glRasterPos2f(550, 250);
	for (i = 0; i<strlen(str9); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str9[i]);
	}glColor3f(1, 1, 0);
	glRasterPos2f(550, 200);
	for (i = 0; i<strlen(str10); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str10[i]);
	}glColor3f(1, 1, 0);
	glRasterPos2f(550, 150);
	for (i = 0; i<strlen(str11); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str11[i]);
	}glColor3f(1, 1, 0);
	glRasterPos2f(550, 100);
	for (i = 0; i<strlen(str12); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str12[i]);
	}glColor3f(1, 1, 0);
	glRasterPos2f(270, 20);
	for (i = 0; i<strlen(str13); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str13[i]);
	}
}
// back ground

void back_ground()
{

	if (display_order == 1)
	{
		int i;
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.0, 0.0, 0.0, 0.0);
		glColor3f(0.0, 1.0, 0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0, 100.0, 0.0, 100.0);


		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);//sky
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(0.0, 0.0);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(100.0, 0.0);
		glColor3f(.529, .808, .922);
		glVertex2f(100.0, 100.0);
		glVertex2f(0.0, 100.0);
		glEnd();

		float a1 = 0.9, b1 = 0.9, c1 = 1.0, a2 = 0.9, b2 = 0.6, c2 = 0.0, a3 = 0.9, b3 = 0.6, c3 = 0, a4 = 0.9, b4 = 0.6, c4 = 0;
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 0);
		glVertex2f(0.0, 0.0);
		glColor3f(0, 1, 0);
		glVertex2f(0.0, 52.0);
		glVertex2f(100.0, 48.0);
		glColor3f(1, 1, 0);
		glVertex2f(100.0, 0.0);
		glEnd();

		//half tree branch
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.8, 0.1);
		glVertex2f(28, 65);
		glVertex2f(30, 64.5);
		glVertex2f(32.5, 64);
		glVertex2f(34, 64.5);
		glVertex2f(35.5, 65);
		glVertex2f(39, 66);
		glVertex2f(37, 67.5);
		glVertex2f(37, 68);
		glVertex2f(39, 69.5);

		glVertex2f(39, 71.5);
		glVertex2f(39.3, 72);
		glVertex2f(39.6, 73);
		glVertex2f(39.9, 73.5);
		glVertex2f(40, 74);
		glVertex2f(40.5, 75);
		glVertex2f(40, 76.5);
		glVertex2f(43, 77.5);
		glVertex2f(42.5, 79);
		glVertex2f(43, 80);
		glVertex2f(41.5, 82.5);
		glVertex2f(40.5, 82);
		glVertex2f(40, 81.5);
		glVertex2f(41, 82.5);
		glVertex2f(41.5, 83.5);
		glVertex2f(42, 85);
		glVertex2f(39, 87);
		glVertex2f(37, 88.5);
		glVertex2f(33, 86);
		glVertex2f(32, 84);
		glVertex2f(33, 90);
		glVertex2f(28, 65);

		glEnd();

		//root
		glBegin(GL_POLYGON);
		glColor3f(0, 1, 0);
		glVertex2f(26.5, 49);
		glVertex2f(28, 48.5);
		glVertex2f(30, 50);
		glVertex2f(28.5, 52.5);
		glVertex2f(28, 55);
		glVertex2f(28.5, 67.5);
		glVertex2f(28, 55);
		glVertex2f(28, 60);
		glVertex2f(28.5, 67.5);
		glVertex2f(28, 65);
		glVertex2f(28.5, 67.5);
		glVertex2f(29.5, 71);
		glVertex2f(30, 72.5);
		glVertex2f(25, 80);
		glVertex2f(25, 50);
		glVertex2f(26.5, 49);
		glEnd();


		//tree 1 branch
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.9, 0.2);
		glVertex2f(16.5, 70);
		glVertex2f(12.5, 70);
		glVertex2f(11, 71.5);
		glVertex2f(10, 72.5);
		glColor3f(0.0, 0.85, 0.1);
		glVertex2f(10, 75);
		glVertex2f(7.5, 75);
		glVertex2f(6, 76);
		glVertex2f(5, 78.5);
		glVertex2f(5, 80);
		glVertex2f(7.5, 82.5);
		glVertex2f(5, 85);
		glVertex2f(2.7, 87);
		glVertex2f(2.75, 90);
		glColor3f(0.1, 0.6, 0.1);
		glVertex2f(2.8, 91);
		glVertex2f(3.5, 92.5);
		glVertex2f(5, 95);
		glVertex2f(7, 97.5);
		glVertex2f(10, 98);
		glVertex2f(15, 99);
		glColor3f(0.1, 0.6, 0.2);
		glVertex2f(20, 98.5);
		glVertex2f(25, 98);
		glVertex2f(30, 97.5);
		glVertex2f(30.5, 97);
		glVertex2f(30, 95);
		glVertex2f(32.5, 92.5);
		glVertex2f(34, 87.5);
		glVertex2f(35, 85);
		glVertex2f(34.5, 82.5);

		glVertex2f(34, 79);
		glVertex2f(34.5, 77.5);
		glColor3f(0.1, 0.6, 0.0);
		glVertex2f(33, 76);
		glVertex2f(32.5, 74.5);
		glVertex2f(31, 73);
		glVertex2f(30, 72.5);
		glVertex2f(27.5, 72.5);
		glVertex2f(26, 73);
		glVertex2f(25, 75);
		glEnd();

		//grass middle
		int gx = 20, gy = 5;
		glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 0.0);

		glVertex2f(0 + gx, 40 + gy);
		glVertex2f(0 + gx, 47 + gy);
		glVertex2f(2.5 + gx, 46.5 + gy);
		glVertex2f(2 + gx, 48 + gy);
		glVertex2f(0 + gx, 50 + gy);
		glVertex2f(2 + gx, 49.5 + gy);
		glVertex2f(5 + gx, 47 + gy);
		glVertex2f(2.5 + gx, 55 + gy);
		glVertex2f(7 + gx, 50 + gy);
		glVertex2f(8 + gx, 53 + gy);
		glVertex2f(10 + gx, 55 + gy);
		glVertex2f(10.5 + gx, 52 + gy);
		glVertex2f(10 + gx, 50 + gy);
		glVertex2f(17 + gx, 53 + gy);
		glVertex2f(10 + gx, 45 + gy);
		glVertex2f(20 + gx, 47 + gy);
		glVertex2f(18 + gx, 45 + gy);
		glVertex2f(25 + gx, 46 + gy);
		glVertex2f(20 + gx, 42 + gy);
		glVertex2f(30 + gx, 40 + gy);
		glEnd();

		//tree1 root
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(17.5, 56);
		glVertex2f(17.0, 62.5);
		glVertex2f(17.5, 67.5);
		glVertex2f(16.5, 70.0);
		glVertex2f(16.0, 72.5);
		glVertex2f(15.5, 75.0);
		glVertex2f(15.0, 80.0);
		glVertex2f(20.0, 85.0);
		glVertex2f(21.5, 77.0);

		glVertex2f(26.0, 87.0);
		glVertex2f(30.0, 85.0);
		glVertex2f(28.0, 80.0);
		glVertex2f(25.5, 75.0);
		glVertex2f(25, 72.5);
		glVertex2f(25, 70.0);
		glVertex2f(25.0, 55.0);
		glVertex2f(25.5, 52.5);
		glVertex2f(26.0, 50.0);

		glVertex2f(26.5, 48.0);
		glVertex2f(27.0, 47.5);
		glVertex2f(28.5, 46.0);
		glVertex2f(29, 44);
		glVertex2f(30.0, 40.0);
		glVertex2f(20.0, 47.5);
		glVertex2f(17.5, 47.0);
		glVertex2f(18.0, 50.0);
		glVertex2f(17.0, 54.0);

		glVertex2f(20.0, 53.0);
		glVertex2f(17.5, 56.0);

		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.196078, 0.8, 0.196078);
		glVertex2f(0, 27.5);
		glVertex2f(0, 32.5);
		glVertex2f(0.3, 33.5);
		glVertex2f(2.5, 35);
		glVertex2f(2.5, 32.5);
		glVertex2f(4.9, 35);
		glVertex2f(7.5, 37.5);
		glVertex2f(7, 35);
		glVertex2f(10, 35);
		glVertex2f(7, 32.5);
		glVertex2f(15, 35);
		glVertex2f(12.5, 32);
		glVertex2f(15, 30);
		glVertex2f(12.5, 27);
		glVertex2f(20, 26);
		glEnd();


		//grass 2
		glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0 , 0.0);

		glVertex2f(0, 40);
		glVertex2f(0, 47);
		glVertex2f(2.5, 46.5);
		glVertex2f(2, 48);
		glVertex2f(0, 50);
		glVertex2f(2, 49.5);
		glVertex2f(5, 47);
		glVertex2f(2.5, 55);
		glVertex2f(7, 50);
		glVertex2f(8, 53);
		glVertex2f(10, 55);
		glVertex2f(10.5, 52);
		glVertex2f(10, 50);
		glVertex2f(17, 53);
		glVertex2f(10, 45);
		glVertex2f(20, 47);
		glVertex2f(18, 45);
		glVertex2f(25, 46);
		glVertex2f(20, 42);
		glVertex2f(30, 40);
		glEnd();

		//ryt grass
		glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(0, 7.5);
		glVertex2f(5, 13);
		glVertex2f(0, 15);
		glVertex2f(5, 13);
		glVertex2f(0, 20);
		glVertex2f(5, 15);
		glVertex2f(10, 18);
		glVertex2f(15, 25);
		glVertex2f(13, 20);
		glVertex2f(17, 21);
		glVertex2f(20, 23);
		glVertex2f(17, 18);
		glVertex2f(15, 15);
		glVertex2f(20, 17);
		glVertex2f(25, 18);
		glVertex2f(20, 15);
		glVertex2f(15, 10);
		glVertex2f(30, 10);
		glVertex2f(35, 7.5);
		glEnd();


		//grass 2
		glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(0, 50);
		glVertex2f(0, 65);
		glVertex2f(10, 67);
		glVertex2f(7, 65);
		glVertex2f(17, 65);
		glVertex2f(15, 64);
		glVertex2f(12, 63);
		glVertex2f(15, 60);
		glVertex2f(17, 57);
		glVertex2f(15, 56);
		glVertex2f(20, 53);
		glVertex2f(17, 54);
		glVertex2f(18, 50);
		glVertex2f(16, 47);
		glVertex2f(10, 45);
		glVertex2f(17, 53);
		glVertex2f(10, 50);
		glVertex2f(10.5, 52);
		glVertex2f(10, 55);
		glVertex2f(8, 53);
		glVertex2f(7, 50);
		glVertex2f(2.5, 55);
		glVertex2f(5, 47);
		glVertex2f(2, 49.5);
		glVertex2f(0, 50);
		glEnd();


		//branch
		glBegin(GL_POLYGON);
		glColor3f(0.2, 0.8, 0.0);
		glVertex2f(72.5, 70);
		glVertex2f(71.5, 69);
		glVertex2f(70, 68);
		glVertex2f(67.5, 68.5);
		glVertex2f(66, 70);
		glVertex2f(66.5, 71);
		glVertex2f(66, 72.7);
		glVertex2f(65, 74);
		glVertex2f(63, 75);
		glVertex2f(62.5, 75.5);
		glVertex2f(62, 77.5);
		glVertex2f(61, 79);
		glVertex2f(61, 80);
		glVertex2f(61.5, 81);
		glVertex2f(62, 82.5);
		glVertex2f(62.3, 84.5);
		glVertex2f(62.4, 85);
		glVertex2f(62.5, 87.5);
		glVertex2f(63.5, 90);
		glVertex2f(65, 91);
		glVertex2f(66.5, 92);
		glVertex2f(67.5, 92.5);
		glVertex2f(69, 92);
		glVertex2f(70.5, 90.5);
		glEnd();
		//tree2half
		glBegin(GL_POLYGON);
		glColor3f(0.65, 0.50, 0.39);
		glVertex2f(75, 48);
		glVertex2f(75.5, 58);
		glVertex2f(75.6, 60);
		glVertex2f(75.5, 61);
		glVertex2f(75, 65);
		glVertex2f(74.5, 66);
		glVertex2f(73, 69);
		glVertex2f(72.5, 70);
		glVertex2f(72.5, 77.5);
		glVertex2f(75, 80);
		glVertex2f(81, 67.5);
		glVertex2f(78, 48);
		glEnd();
		//tree branch 2
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.6, 0.3);
		glVertex2f(75, 75);
		glVertex2f(72.5, 72.5);
		glVertex2f(71, 74.0);
		glVertex2f(70.5, 74.5);
		glVertex2f(70, 75);
		glVertex2f(69.5, 76);
		glVertex2f(69.5, 77);

		glVertex2f(70, 80);
		glVertex2f(68, 81);
		glVertex2f(67.5, 82);
		glVertex2f(66, 83.5);
		glVertex2f(66.3, 84.5);
		glVertex2f(66.5, 85);
		glVertex2f(67, 87);
		glVertex2f(67.5, 87.5);
		glVertex2f(70, 90);
		glVertex2f(71, 91.5);
		glVertex2f(71.5, 92.5);
		glVertex2f(72.5, 94);
		glVertex2f(75, 95);
		glVertex2f(77.5, 96);
		glVertex2f(80, 96.5);
		glVertex2f(82.5, 96);
		glVertex2f(83, 95);
		glVertex2f(83.5, 94.5);
		glVertex2f(84.5, 92.5);

		glVertex2f(84.7, 90);
		glVertex2f(86, 91);
		glVertex2f(87.0, 91.5);
		glVertex2f(87.5, 90);
		glVertex2f(87.5, 89);
		glVertex2f(89, 89);
		glVertex2f(89.5, 87.5);
		glVertex2f(89, 85);
		glVertex2f(88, 82.5);
		glVertex2f(87, 82);
		glVertex2f(86, 81);
		glVertex2f(85, 80);
		glVertex2f(85.5, 75.5);
		glVertex2f(84, 75);
		glVertex2f(82.5, 75);
		glEnd();

		//tree 2 
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(77.5, 48);
		glVertex2f(77, 60);
		glVertex2f(77.5, 62.5);
		glVertex2f(77, 65);
		glVertex2f(77, 67.5);
		glVertex2f(76, 70);
		glVertex2f(75, 75);
		glVertex2f(75, 78);
		glVertex2f(80, 75);
		glVertex2f(82.5, 78);
		glVertex2f(82, 75);
		glVertex2f(82, 72.5);
		glVertex2f(81.5, 70);
		glVertex2f(81, 65);
		glVertex2f(81.5, 62);
		glVertex2f(84, 48);
		glEnd();

		//branch
		glBegin(GL_POLYGON);
		glColor3f(0.2, 0.8, 0.0);
		glVertex2f(90.5, 30);
		glVertex2f(89.5, 29);
		glVertex2f(88, 28);
		glVertex2f(85.5, 28.5);
		glVertex2f(84, 30);
		glVertex2f(84.5, 31);
		glVertex2f(84, 32.7);
		glVertex2f(83, 34);
		glVertex2f(81, 35);
		glVertex2f(80.5, 35.5);
		glVertex2f(80, 37.5);
		glVertex2f(79, 39);
		glVertex2f(79, 40);
		glVertex2f(79.5, 41);
		glVertex2f(80, 42.5);
		glVertex2f(80.3, 44.5);
		glVertex2f(80.4, 45);
		glVertex2f(80.5, 47.5);
		glVertex2f(81.5, 50);
		glVertex2f(83, 51);
		glVertex2f(84.5, 52);
		glVertex2f(85.5, 52.5);
		glVertex2f(87, 52);
		glVertex2f(88.5, 50.5);
		glEnd();
		//tree3half
		glBegin(GL_POLYGON);
		glColor3f(0.65, 0.50, 0.39);
		glVertex2f(90, 7.5);
		glVertex2f(90.5, 8);
		glVertex2f(90.6, 20);
		glVertex2f(90.5, 61);
		glVertex2f(90, 25);
		glVertex2f(89.5, 26);
		glVertex2f(88, 29);
		glVertex2f(87.5, 30);
		glVertex2f(87.5, 37.5);
		glVertex2f(90, 40);
		glVertex2f(96, 27.5);
		glVertex2f(93, 7.5);
		glEnd();
		//tree branch 3
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.6, 0.3);
		glVertex2f(90, 35);
		glVertex2f(87.5, 32.5);
		glVertex2f(86, 34.0);
		glVertex2f(85.5, 34.5);
		glVertex2f(85, 35);
		glVertex2f(84.5, 36);
		glVertex2f(84.5, 37);

		glVertex2f(85, 40);
		glVertex2f(83, 41);
		glVertex2f(82.5, 42);
		glVertex2f(81, 43.5);
		glVertex2f(81.3, 44.5);
		glVertex2f(81.5, 45);
		glVertex2f(82, 47);
		glVertex2f(82.5, 47.5);
		glVertex2f(85, 50);
		glVertex2f(86, 51.5);
		glVertex2f(86.5, 52.5);
		glVertex2f(87.5, 54);
		glVertex2f(90, 55);
		glVertex2f(92.5, 56);
		glVertex2f(95, 56.5);
		glVertex2f(97.5, 56);
		glVertex2f(98, 55);
		glVertex2f(98.5, 54.5);
		glVertex2f(99.5, 52.5);

		glVertex2f(99.7, 50);
		glVertex2f(101, 51);
		glVertex2f(102.0, 51.5);
		glVertex2f(102.5, 50);
		glVertex2f(102.5, 49);
		glVertex2f(104, 49);
		glVertex2f(104.5, 47.5);
		glVertex2f(104, 45);
		glVertex2f(103, 42.5);
		glVertex2f(102, 42);
		glVertex2f(101, 41);
		glVertex2f(100, 40);
		glVertex2f(100.5, 35.5);
		glVertex2f(99, 35);
		glVertex2f(97.5, 35);
		glEnd();
         //tree3
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(92, 7.5);
		glVertex2f(92, 20);
		glVertex2f(92.5, 22.5);
		glVertex2f(92, 25);
		glVertex2f(92, 27.5);
		glVertex2f(91, 30);
		glVertex2f(90, 35);
		glVertex2f(90.5, 40);
		glVertex2f(95, 35);
		glVertex2f(97.5, 40);
		glVertex2f(97, 35);
		glVertex2f(97, 32.5);
		glVertex2f(96.5, 30);
		glVertex2f(96, 25);
		glVertex2f(96.5, 22);
		glVertex2f(99, 7.5);
		glEnd();
		//sing gras
		glBegin(GL_LINES);
		glLineWidth(15.0);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(75, 10);
		glVertex2f(72, 20);
		glVertex2f(70, 17.5);
		glVertex2f(75, 10);
		glVertex2f(72.5, 25);
		glVertex2f(71, 22.5);
		glVertex2f(75, 10);
		glVertex2f(73, 25);
		glVertex2f(77, 22.5);
		glVertex2f(75, 10);
		glVertex2f(76, 19);
		glVertex2f(75.5, 15);
		glVertex2f(75, 10);
		glVertex2f(77, 15);
		glVertex2f(78, 12);
		glEnd();

	}
	if (display_order == 9)
		a = 0;

	a -= 0.05;
	if (a>-100)
	{
		//bird 2 middle left most
		int b2x = -15, b2y = 3;

		//front of bird2
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y);
		glVertex2f(84 + b2x + a, 90.6 + b2y);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y);
		glVertex2f(84.8 + b2x + a, 90 + b2y);
		glVertex2f(85 + b2x + a, 89.4 + b2y);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y);
		glVertex2f(86 + b2x + a, 88.75 + b2y);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(86.4 + b2x + a, 89 + b2y);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y);
		glVertex2f(87 + b2x + a, 89.25 + b2y);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y);
		glVertex2f(88 + b2x + a, 89.5 + b2y);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y);
		glVertex2f(89 + b2x + a, 89.8 + b2y);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y);
		glVertex2f(89.8 + b2x + a, 90 + b2y);
		glVertex2f(90 + b2x + a, 90.05 + b2y);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y);
		glVertex2f(91 + b2x + a, 90.3 + b2y);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y);
		glVertex2f(91 + b2x + a, 89.8 + b2y);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y);
		glVertex2f(90.6 + b2x + a, 89 + b2y);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 87 + b2y);
		glEnd();

		// bird2 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y);
		glVertex2f(91 + b2x + a, 88.1 + b2y);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y);
		glVertex2f(91.4 + b2x + a, 88 + b2y);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y);
		glVertex2f(92 + b2x + a, 87.84 + b2y);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y);
		glVertex2f(93 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y);
		glVertex2f(93.4 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93 + b2x + a, 87 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y);
		glVertex2f(94 + b2x + a, 87.6 + b2y);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y);
		glVertex2f(95 + b2x + a, 87.35 + b2y);
		glVertex2f(94.8 + b2x + a, 87 + b2y);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y);
		glVertex2f(94 + b2x + a, 86.5 + b2y);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y);
		glVertex2f(94 + b2x + a, 86.3 + b2y);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y);
		glVertex2f(94 + b2x + a, 86 + b2y);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y);
		glVertex2f(93 + b2x + a, 85.5 + b2y);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y);
		glVertex2f(92 + b2x + a, 85.32 + b2y);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y);
		glVertex2f(91 + b2x + a, 85.2 + b2y);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y);
		glVertex2f(90 + b2x + a, 85.4 + b2y);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glEnd();

		//after back feather to front bird2
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y);
		glVertex2f(88 + b2x + a, 85.325 + b2y);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85.25 + b2y);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y);
		glVertex2f(86 + b2x + a, 85.375 + b2y);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y);
		glVertex2f(85 + b2x + a, 85.7 + b2y);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y);
		glVertex2f(84.4 + b2x + a, 86 + b2y);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y);
		glVertex2f(84 + b2x + a, 86.4 + b2y);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y);
		glVertex2f(83.6 + b2x + a, 87 + b2y);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y);
		glVertex2f(83 + b2x + a, 89 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glEnd();

		// bird2 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85 + b2y);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y);
		glVertex2f(87.8 + b2x + a, 85 + b2y);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y);
		glEnd();


		//bird2 eye

		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y);
		glVertex2f(84 + b2x + a, 89.6 + b2y);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y);
		glEnd();


		//mouth bird2
		
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y);
		glVertex2f(82 + b2x + a, 89.3 + b2y);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y);
		glVertex2f(82.4 + b2x + a, 89 + b2y);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y);
		glVertex2f(82 + b2x + a, 89.1 + b2y);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y);

		glEnd();

		//bird3 middle bird
		b2x = -8, b2y = -5;

		//front of bird3
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y);
		glVertex2f(84 + b2x + a, 90.6 + b2y);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y);
		glVertex2f(84.8 + b2x + a, 90 + b2y);
		glVertex2f(85 + b2x + a, 89.4 + b2y);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y);
		glVertex2f(86 + b2x + a, 88.75 + b2y);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(86.4 + b2x + a, 89 + b2y);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y);
		glVertex2f(87 + b2x + a, 89.25 + b2y);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y);
		glVertex2f(88 + b2x + a, 89.5 + b2y);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y);
		glVertex2f(89 + b2x + a, 89.8 + b2y);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y);
		glVertex2f(89.8 + b2x + a, 90 + b2y);
		glVertex2f(90 + b2x + a, 90.05 + b2y);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y);
		glVertex2f(91 + b2x + a, 90.3 + b2y);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y);
		glVertex2f(91 + b2x + a, 89.8 + b2y);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y);
		glVertex2f(90.6 + b2x + a, 89 + b2y);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 87 + b2y);
		glEnd();

		// bird3 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y);
		glVertex2f(91 + b2x + a, 88.1 + b2y);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y);
		glVertex2f(91.4 + b2x + a, 88 + b2y);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y);
		glVertex2f(92 + b2x + a, 87.84 + b2y);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y);
		glVertex2f(93 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y);
		glVertex2f(93.4 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93 + b2x + a, 87 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y);
		glVertex2f(94 + b2x + a, 87.6 + b2y);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y);
		glVertex2f(95 + b2x + a, 87.35 + b2y);
		glVertex2f(94.8 + b2x + a, 87 + b2y);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y);
		glVertex2f(94 + b2x + a, 86.5 + b2y);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y);
		glVertex2f(94 + b2x + a, 86.3 + b2y);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y);
		glVertex2f(94 + b2x + a, 86 + b2y);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y);
		glVertex2f(93 + b2x + a, 85.5 + b2y);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y);
		glVertex2f(92 + b2x + a, 85.32 + b2y);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y);
		glVertex2f(91 + b2x + a, 85.2 + b2y);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y);
		glVertex2f(90 + b2x + a, 85.4 + b2y);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glEnd();

		//after back feather to front bird3
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y);
		glVertex2f(88 + b2x + a, 85.325 + b2y);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85.25 + b2y);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y);
		glVertex2f(86 + b2x + a, 85.375 + b2y);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y);
		glVertex2f(85 + b2x + a, 85.7 + b2y);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y);
		glVertex2f(84.4 + b2x + a, 86 + b2y);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y);
		glVertex2f(84 + b2x + a, 86.4 + b2y);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y);
		glVertex2f(83.6 + b2x + a, 87 + b2y);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y);
		glVertex2f(83 + b2x + a, 89 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glEnd();

		// bird3 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85 + b2y);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y);
		glVertex2f(87.8 + b2x + a, 85 + b2y);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y);
		glEnd();
		//bird3 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y);
		glVertex2f(84 + b2x + a, 89.6 + b2y);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y);
		glEnd();
		//mouth bird3
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y);
		glVertex2f(82 + b2x + a, 89.3 + b2y);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y);
		glVertex2f(82.4 + b2x + a, 89 + b2y);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y);
		glVertex2f(82 + b2x + a, 89.1 + b2y);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y);

		glEnd();

		//bird4 bottem left most
		b2x = -18, b2y = -8;

		//front of bird4
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y);
		glVertex2f(84 + b2x + a, 90.6 + b2y);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y);
		glVertex2f(84.8 + b2x + a, 90 + b2y);
		glVertex2f(85 + b2x + a, 89.4 + b2y);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y);
		glVertex2f(86 + b2x + a, 88.75 + b2y);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(86.4 + b2x + a, 89 + b2y);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y);
		glVertex2f(87 + b2x + a, 89.25 + b2y);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y);
		glVertex2f(88 + b2x + a, 89.5 + b2y);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y);
		glVertex2f(89 + b2x + a, 89.8 + b2y);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y);
		glVertex2f(89.8 + b2x + a, 90 + b2y);
		glVertex2f(90 + b2x + a, 90.05 + b2y);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y);
		glVertex2f(91 + b2x + a, 90.3 + b2y);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y);
		glVertex2f(91 + b2x + a, 89.8 + b2y);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y);
		glVertex2f(90.6 + b2x + a, 89 + b2y);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 87 + b2y);
		glEnd();

		// bird4 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y);
		glVertex2f(91 + b2x + a, 88.1 + b2y);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y);
		glVertex2f(91.4 + b2x + a, 88 + b2y);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y);
		glVertex2f(92 + b2x + a, 87.84 + b2y);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y);
		glVertex2f(93 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y);
		glVertex2f(93.4 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93 + b2x + a, 87 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y);
		glVertex2f(94 + b2x + a, 87.6 + b2y);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y);
		glVertex2f(95 + b2x + a, 87.35 + b2y);
		glVertex2f(94.8 + b2x + a, 87 + b2y);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y);
		glVertex2f(94 + b2x + a, 86.5 + b2y);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y);
		glVertex2f(94 + b2x + a, 86.3 + b2y);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y);
		glVertex2f(94 + b2x + a, 86 + b2y);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y);
		glVertex2f(93 + b2x + a, 85.5 + b2y);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y);
		glVertex2f(92 + b2x + a, 85.32 + b2y);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y);
		glVertex2f(91 + b2x + a, 85.2 + b2y);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y);
		glVertex2f(90 + b2x + a, 85.4 + b2y);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glEnd();

		//after back feather to front bird4
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y);
		glVertex2f(88 + b2x + a, 85.325 + b2y);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85.25 + b2y);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y);
		glVertex2f(86 + b2x + a, 85.375 + b2y);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y);
		glVertex2f(85 + b2x + a, 85.7 + b2y);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y);
		glVertex2f(84.4 + b2x + a, 86 + b2y);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y);
		glVertex2f(84 + b2x + a, 86.4 + b2y);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y);
		glVertex2f(83.6 + b2x + a, 87 + b2y);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y);
		glVertex2f(83 + b2x + a, 89 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glEnd();

		// bird4 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85 + b2y);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y);
		glVertex2f(87.8 + b2x + a, 85 + b2y);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y);
		glEnd();
		//bird4 eye
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y);
		glVertex2f(84 + b2x + a, 89.6 + b2y);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y);
		glEnd();
		//mouth bird4
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1,1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y);
		glVertex2f(82 + b2x + a, 89.3 + b2y);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y);
		glVertex2f(82.4 + b2x + a, 89 + b2y);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y);
		glVertex2f(82 + b2x + a, 89.1 + b2y);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y);

		glEnd();

		//bird5 bottem right most
		b2x = 4, b2y = -9;
		//front of bird5
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y);
		glVertex2f(84 + b2x + a, 90.6 + b2y);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y);
		glVertex2f(84.8 + b2x + a, 90 + b2y);
		glVertex2f(85 + b2x + a, 89.4 + b2y);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y);
		glVertex2f(86 + b2x + a, 88.75 + b2y);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(86.4 + b2x + a, 89 + b2y);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y);
		glVertex2f(87 + b2x + a, 89.25 + b2y);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y);
		glVertex2f(88 + b2x + a, 89.5 + b2y);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y);
		glVertex2f(89 + b2x + a, 89.8 + b2y);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y);
		glVertex2f(89.8 + b2x + a, 90 + b2y);
		glVertex2f(90 + b2x + a, 90.05 + b2y);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y);
		glVertex2f(91 + b2x + a, 90.3 + b2y);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y);
		glVertex2f(91 + b2x + a, 89.8 + b2y);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y);
		glVertex2f(90.6 + b2x + a, 89 + b2y);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 87 + b2y);
		glEnd();

		// bird5 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y);
		glVertex2f(91 + b2x + a, 88.1 + b2y);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y);
		glVertex2f(91.4 + b2x + a, 88 + b2y);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y);
		glVertex2f(92 + b2x + a, 87.84 + b2y);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y);
		glVertex2f(93 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y);
		glVertex2f(93.4 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93 + b2x + a, 87 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y);
		glVertex2f(94 + b2x + a, 87.6 + b2y);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y);
		glVertex2f(95 + b2x + a, 87.35 + b2y);
		glVertex2f(94.8 + b2x + a, 87 + b2y);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y);
		glVertex2f(94 + b2x + a, 86.5 + b2y);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y);
		glVertex2f(94 + b2x + a, 86.3 + b2y);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y);
		glVertex2f(94 + b2x + a, 86 + b2y);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y);
		glVertex2f(93 + b2x + a, 85.5 + b2y);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y);
		glVertex2f(92 + b2x + a, 85.32 + b2y);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y);
		glVertex2f(91 + b2x + a, 85.2 + b2y);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y);
		glVertex2f(90 + b2x + a, 85.4 + b2y);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glEnd();

		//after back feather to front bird5
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y);
		glVertex2f(88 + b2x + a, 85.325 + b2y);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85.25 + b2y);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y);
		glVertex2f(86 + b2x + a, 85.375 + b2y);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y);
		glVertex2f(85 + b2x + a, 85.7 + b2y);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y);
		glVertex2f(84.4 + b2x + a, 86 + b2y);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y);
		glVertex2f(84 + b2x + a, 86.4 + b2y);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y);
		glVertex2f(83.6 + b2x + a, 87 + b2y);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y);
		glVertex2f(83 + b2x + a, 89 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glEnd();

		// bird5 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85 + b2y);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y);
		glVertex2f(87.8 + b2x + a, 85 + b2y);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y);
		glEnd();
		//bird5 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y);
		glVertex2f(84 + b2x + a, 89.6 + b2y);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y);
		glEnd();
		//mouth bird5
		
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y);
		glVertex2f(82 + b2x + a, 89.3 + b2y);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y);
		glVertex2f(82.4 + b2x + a, 89 + b2y);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y);
		glVertex2f(82 + b2x + a, 89.1 + b2y);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y);

		glEnd();
	}

	if (display_order == 1)
	{

		char str[] = "PRESS d/D TO CONTINUE";
		glColor3f(1, 0, 0);
		glRasterPos2f(30, 5);
		for (i = 0; i<strlen(str); i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
		}
		
	}
}


void back_ground2()
{

	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 0.0, 100.0);


	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);//sky
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.0);
	glVertex2f(100.0, 0.0);
	glColor3f(0, .749, 1);
	glVertex2f(100.0, 100.0);
	glVertex2f(0.0, 100.0);
	glEnd();

	if (display_order != 2)
	{
		float a1 = 0.0, b1 = 0.5, c1 = 1.0, a2 = 0.0, b2 = 0.6, c2 = 0.0, a3 = 0.0, b3 = 0.6, c3 = 0, a4 = 0.0, b4 = 0.6, c4 = 0;
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glColor3f(a1, b1, c1);
		glVertex2f(0.0, 0.0);
		glColor3f(a2, b2, c2);
		glVertex2f(0.0, 52.0);
		glColor3f(a3, b3, c3);
		glVertex2f(100.0, 48.0);
		glColor3f(a4, b4, c4);
		glVertex2f(100.0, 0.0);
		glEnd();
	}
	if (display_order == 2)
	{
		glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(0.0, 0.0);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(0.0, 52.0);
		glColor3f(0.0, 1.0, 0.1);
		glVertex2f(100.0, 48.0);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(100.0, 0.0);
		glEnd();
		//grain
		glBegin(GL_POINTS);
		glPointSize(2.0);
		
		glColor3f(1, 0.843, 0);
		glVertex2f(28, 65);
		glVertex2f(30, 64.5);
		glVertex2f(32.5, 64);
		glVertex2f(34, 64.5);
		glVertex2f(35.5, 65);
		glVertex2f(39, 66);
		glVertex2f(37, 67.5);
		glVertex2f(37, 68);
		glVertex2f(39, 69.5);

		glVertex2f(39, 71.5);
		glVertex2f(39.3, 72);
		glVertex2f(39.6, 73);
		glVertex2f(39.9, 73.5);
		glVertex2f(40, 74);
		glVertex2f(40.5, 75);
		glVertex2f(40, 76.5);
		glVertex2f(43, 77.5);
		glVertex2f(42.5, 79);
		glVertex2f(43, 80);
		glVertex2f(41.5, 82.5);
		glVertex2f(40.5, 82);
		glVertex2f(40, 81.5);
		glVertex2f(41, 82.5);
		glVertex2f(41.5, 83.5);
		glVertex2f(42, 85);
		glVertex2f(39, 87);
		glVertex2f(37, 88.5);
		glVertex2f(33, 86);
		glVertex2f(32, 84);
		glVertex2f(33, 90);
		glVertex2f(28, 65);
		glEnd();
	}

	//half tree branch
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1, 0);
	glVertex2f(28, 65);
	glVertex2f(30, 64.5);
	glVertex2f(32.5, 64);
	glVertex2f(34, 64.5);
	glVertex2f(35.5, 65);
	glVertex2f(39, 66);
	glVertex2f(37, 67.5);
	glVertex2f(37, 68);
	glVertex2f(39, 69.5);

	glVertex2f(39, 71.5);
	glVertex2f(39.3, 72);
	glVertex2f(39.6, 73);
	glVertex2f(39.9, 73.5);
	glVertex2f(40, 74);
	glVertex2f(40.5, 75);
	glVertex2f(40, 76.5);
	glVertex2f(43, 77.5);
	glVertex2f(42.5, 79);
	glVertex2f(43, 80);
	glVertex2f(41.5, 82.5);
	glVertex2f(40.5, 82);
	glVertex2f(40, 81.5);
	glVertex2f(41, 82.5);
	glVertex2f(41.5, 83.5);
	glVertex2f(42, 85);
	glVertex2f(39, 87);
	glVertex2f(37, 88.5);
	glVertex2f(33, 86);
	glVertex2f(32, 84);
	glVertex2f(33, 90);
	glVertex2f(28, 65);

	glEnd();

	//root
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(26.5, 49);
	glVertex2f(28, 48.5);
	glVertex2f(30, 50);
	glVertex2f(28.5, 52.5);
	glVertex2f(28, 55);
	glVertex2f(28.5, 67.5);
	glVertex2f(28, 55);
	glVertex2f(28, 60);
	glVertex2f(28.5, 67.5);
	glVertex2f(28, 65);
	glVertex2f(28.5, 67.5);
	glVertex2f(29.5, 71);
	glVertex2f(30, 72.5);
	glVertex2f(25, 80);
	glVertex2f(25, 50);
	glVertex2f(26.5, 49);
	glEnd();


	//tree 1 branch
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.9, 0.2);
	glVertex2f(16.5, 70);
	glVertex2f(12.5, 70);
	glVertex2f(11, 71.5);
	glVertex2f(10, 72.5);
	glColor3f(0.0, 0.85, 0.1);
	glVertex2f(10, 75);
	glVertex2f(7.5, 75);
	glVertex2f(6, 76);
	glVertex2f(5, 78.5);
	glVertex2f(5, 80);
	glVertex2f(7.5, 82.5);
	glVertex2f(5, 85);
	glVertex2f(2.7, 87);
	glVertex2f(2.75, 90);
	glColor3f(0.1, 0.6, 0.1);
	glVertex2f(2.8, 91);
	glVertex2f(3.5, 92.5);
	glVertex2f(5, 95);
	glVertex2f(7, 97.5);
	glVertex2f(10, 98);
	glVertex2f(15, 99);
	glColor3f(0.1, 0.6, 0.2);
	glVertex2f(20, 98.5);
	glVertex2f(25, 98);
	glVertex2f(30, 97.5);
	glVertex2f(30.5, 97);
	glVertex2f(30, 95);
	glVertex2f(32.5, 92.5);
	glVertex2f(34, 87.5);
	glVertex2f(35, 85);
	glVertex2f(34.5, 82.5);

	glVertex2f(34, 79);
	glVertex2f(34.5, 77.5);
	glColor3f(0.1, 0.6, 0.0);
	glVertex2f(33, 76);
	glVertex2f(32.5, 74.5);
	glVertex2f(31, 73);
	glVertex2f(30, 72.5);
	glVertex2f(27.5, 72.5);
	glVertex2f(26, 73);
	glVertex2f(25, 75);
	glEnd();

	//grass middle
	int gx = 20, gy = 5;
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);

	glVertex2f(0 + gx, 40 + gy);
	glVertex2f(0 + gx, 47 + gy);
	glVertex2f(2.5 + gx, 46.5 + gy);
	glVertex2f(2 + gx, 48 + gy);
	glVertex2f(0 + gx, 50 + gy);
	glVertex2f(2 + gx, 49.5 + gy);
	glVertex2f(5 + gx, 47 + gy);
	glVertex2f(2.5 + gx, 55 + gy);
	glVertex2f(7 + gx, 50 + gy);
	glVertex2f(8 + gx, 53 + gy);
	glVertex2f(10 + gx, 55 + gy);
	glVertex2f(10.5 + gx, 52 + gy);
	glVertex2f(10 + gx, 50 + gy);
	glVertex2f(17 + gx, 53 + gy);
	glVertex2f(10 + gx, 45 + gy);
	glVertex2f(20 + gx, 47 + gy);
	glVertex2f(18 + gx, 45 + gy);
	glVertex2f(25 + gx, 46 + gy);
	glVertex2f(20 + gx, 42 + gy);
	glVertex2f(30 + gx, 40 + gy);
	glEnd();

	//tree1 root
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex2f(17.5, 56);
	glVertex2f(17.0, 62.5);
	glVertex2f(17.5, 67.5);
	glVertex2f(16.5, 70.0);
	glVertex2f(16.0, 72.5);
	glVertex2f(15.5, 75.0);
	glVertex2f(15.0, 80.0);
	glVertex2f(20.0, 85.0);
	glVertex2f(21.5, 77.0);

	glVertex2f(26.0, 87.0);
	glVertex2f(30.0, 85.0);
	glVertex2f(28.0, 80.0);
	glVertex2f(25.5, 75.0);
	glVertex2f(25, 72.5);
	glVertex2f(25, 70.0);
	glVertex2f(25.0, 55.0);
	glVertex2f(25.5, 52.5);
	glVertex2f(26.0, 50.0);
	glVertex2f(26.5, 48.0);
	glVertex2f(27.0, 47.5);
	glVertex2f(28.5, 46.0);
	glVertex2f(29, 44);
	glVertex2f(30.0, 40.0);
	glVertex2f(20.0, 47.5);
	glVertex2f(17.5, 47.0);
	glVertex2f(18.0, 50.0);
	glVertex2f(17.0, 54.0);
	glVertex2f(20.0, 53.0);
	glVertex2f(17.5, 56.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.196078, 0.8, 0.196078);
	glVertex2f(0, 27.5);
	glVertex2f(0, 32.5);
	glVertex2f(0.3, 33.5);
	glVertex2f(2.5, 35);
	glVertex2f(2.5, 32.5);
	glVertex2f(4.9, 35);
	glVertex2f(7.5, 37.5);
	glVertex2f(7, 35);
	glVertex2f(10, 35);
	glVertex2f(7, 32.5);
	glVertex2f(15, 35);
	glVertex2f(12.5, 32);
	glVertex2f(15, 30);
	glVertex2f(12.5, 27);
	glVertex2f(20, 26);
	glEnd();
	//grass 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 40);
	glVertex2f(0, 47);
	glVertex2f(2.5, 46.5);
	glVertex2f(2, 48);
	glVertex2f(0, 50);
	glVertex2f(2, 49.5);
	glVertex2f(5, 47);
	glVertex2f(2.5, 55);
	glVertex2f(7, 50);
	glVertex2f(8, 53);
	glVertex2f(10, 55);
	glVertex2f(10.5, 52);
	glVertex2f(10, 50);
	glVertex2f(17, 53);
	glVertex2f(10, 45);
	glVertex2f(20, 47);
	glVertex2f(18, 45);
	glVertex2f(25, 46);
	glVertex2f(20, 42);
	glVertex2f(30, 40);
	glEnd();

	//ryt grass
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 7.5);
	glVertex2f(5, 13);
	glVertex2f(0, 15);
	glVertex2f(5, 13);
	glVertex2f(0, 20);
	glVertex2f(5, 15);
	glVertex2f(10, 18);
	glVertex2f(15, 25);
	glVertex2f(13, 20);
	glVertex2f(17, 21);
	glVertex2f(20, 23);
	glVertex2f(17, 18);
	glVertex2f(15, 15);
	glVertex2f(20, 17);
	glVertex2f(25, 18);
	glVertex2f(20, 15);
	glVertex2f(15, 10);
	glVertex2f(30, 10);
	glVertex2f(35, 7.5);
	glEnd();
	//grass 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 50);
	glVertex2f(0, 65);
	glVertex2f(10, 67);
	glVertex2f(7, 65);
	glVertex2f(17, 65);
	glVertex2f(15, 64);
	glVertex2f(12, 63);
	glVertex2f(15, 60);
	glVertex2f(17, 57);
	glVertex2f(15, 56);
	glVertex2f(20, 53);
	glVertex2f(17, 54);
	glVertex2f(18, 50);
	glVertex2f(16, 47);
	glVertex2f(10, 45);
	glVertex2f(17, 53);
	glVertex2f(10, 50);
	glVertex2f(10.5, 52);
	glVertex2f(10, 55);
	glVertex2f(8, 53);
	glVertex2f(7, 50);
	glVertex2f(2.5, 55);
	glVertex2f(5, 47);
	glVertex2f(2, 49.5);
	glVertex2f(0, 50);
	glEnd();
	//branch
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0.0);
	glVertex2f(72.5, 70);
	glVertex2f(71.5, 69);
	glVertex2f(70, 68);
	glVertex2f(67.5, 68.5);
	glVertex2f(66, 70);
	glVertex2f(66.5, 71);
	glVertex2f(66, 72.7);
	glVertex2f(65, 74);
	glVertex2f(63, 75);
	glVertex2f(62.5, 75.5);
	glVertex2f(62, 77.5);
	glVertex2f(61, 79);
	glVertex2f(61, 80);
	glVertex2f(61.5, 81);
	glVertex2f(62, 82.5);
	glVertex2f(62.3, 84.5);
	glVertex2f(62.4, 85);
	glVertex2f(62.5, 87.5);
	glVertex2f(63.5, 90);
	glVertex2f(65, 91);
	glVertex2f(66.5, 92);
	glVertex2f(67.5, 92.5);
	glVertex2f(69, 92);
	glVertex2f(70.5, 90.5);
	glEnd();
	//tree2half
	glBegin(GL_POLYGON);
	glColor3f(0.65, 0.50, 0.39);
	glVertex2f(75, 48);
	glVertex2f(75.5, 58);
	glVertex2f(75.6, 60);
	glVertex2f(75.5, 61);
	glVertex2f(75, 65);
	glVertex2f(74.5, 66);
	glVertex2f(73, 69);
	glVertex2f(72.5, 70);
	glVertex2f(72.5, 77.5);
	glVertex2f(75, 80);
	glVertex2f(81, 67.5);
	glVertex2f(78, 48);
	glEnd();
	//tree branch 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.6, 0.3);
	glVertex2f(75, 75);
	glVertex2f(72.5, 72.5);
	glVertex2f(71, 74.0);
	glVertex2f(70.5, 74.5);
	glVertex2f(70, 75);
	glVertex2f(69.5, 76);
	glVertex2f(69.5, 77);

	glVertex2f(70, 80);
	glVertex2f(68, 81);
	glVertex2f(67.5, 82);
	glVertex2f(66, 83.5);
	glVertex2f(66.3, 84.5);
	glVertex2f(66.5, 85);
	glVertex2f(67, 87);
	glVertex2f(67.5, 87.5);
	glVertex2f(70, 90);
	glVertex2f(71, 91.5);
	glVertex2f(71.5, 92.5);
	glVertex2f(72.5, 94);
	glVertex2f(75, 95);
	glVertex2f(77.5, 96);
	glVertex2f(80, 96.5);
	glVertex2f(82.5, 96);
	glVertex2f(83, 95);
	glVertex2f(83.5, 94.5);
	glVertex2f(84.5, 92.5);

	glVertex2f(84.7, 90);
	glVertex2f(86, 91);
	glVertex2f(87.0, 91.5);
	glVertex2f(87.5, 90);
	glVertex2f(87.5, 89);
	glVertex2f(89, 89);
	glVertex2f(89.5, 87.5);
	glVertex2f(89, 85);
	glVertex2f(88, 82.5);
	glVertex2f(87, 82);
	glVertex2f(86, 81);
	glVertex2f(85, 80);
	glVertex2f(85.5, 75.5);
	glVertex2f(84, 75);
	glVertex2f(82.5, 75);
	glEnd();
	//tree 2 
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex2f(77.5, 48);
	glVertex2f(77, 60);
	glVertex2f(77.5, 62.5);
	glVertex2f(77, 65);
	glVertex2f(77, 67.5);
	glVertex2f(76, 70);
	glVertex2f(75, 75);
	glVertex2f(75, 78);
	glVertex2f(80, 75);
	glVertex2f(82.5, 78);
	glVertex2f(82, 75);
	glVertex2f(82, 72.5);
	glVertex2f(81.5, 70);
	glVertex2f(81, 65);
	glVertex2f(81.5, 62);
	glVertex2f(84, 48);
	glEnd();
	//sing gras
	glBegin(GL_LINES);
	glLineWidth(15.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(75, 10);
	glVertex2f(72, 20);
	glVertex2f(70, 17.5);
	glVertex2f(75, 10);
	glVertex2f(72.5, 25);
	glVertex2f(71, 22.5);
	glVertex2f(75, 10);
	glVertex2f(73, 25);
	glVertex2f(77, 22.5);
	glVertex2f(75, 10);
	glVertex2f(76, 19);
	glVertex2f(75.5, 15);
	glVertex2f(75, 10);
	glVertex2f(77, 15);
	glVertex2f(78, 12);
	glEnd();


	a -= 0.05;
	if (a>-100)
	{
		//bird 2 middle left most
		int b2x = -15, b2y = 3;

		//front of bird2
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y + a);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y + a);
		glVertex2f(84.8 + b2x + a, 90 + b2y + a);
		glVertex2f(85 + b2x + a, 89.4 + b2y + a);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y + a);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y + a);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y + a);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y + a);
		glVertex2f(86 + b2x + a, 88.75 + b2y + a);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(86.4 + b2x + a, 89 + b2y + a);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y + a);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(87 + b2x + a, 89.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y + a);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y + a);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y + a);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y + a);
		glVertex2f(88 + b2x + a, 89.5 + b2y + a);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y + a);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y + a);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y + a);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y + a);
		glVertex2f(89 + b2x + a, 89.8 + b2y + a);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y + a);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y + a);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y + a);
		glVertex2f(89.8 + b2x + a, 90 + b2y + a);
		glVertex2f(90 + b2x + a, 90.05 + b2y + a);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y + a);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y + a);
		glVertex2f(91 + b2x + a, 90.3 + b2y + a);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y + a);
		glVertex2f(91 + b2x + a, 89.8 + b2y + a);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y + a);
		glVertex2f(90.6 + b2x + a, 89 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 87 + b2y + a);
		glEnd();

		// bird2 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y + a);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y + a);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y + a);
		glVertex2f(91 + b2x + a, 88.1 + b2y + a);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y + a);
		glVertex2f(91.4 + b2x + a, 88 + b2y + a);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y + a);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y + a);
		glVertex2f(92 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y + a);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y + a);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y + a);
		glVertex2f(93 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93 + b2x + a, 87 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y + a);
		glVertex2f(94 + b2x + a, 87.6 + b2y + a);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y + a);
		glVertex2f(95 + b2x + a, 87.35 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87 + b2y + a);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y + a);
		glVertex2f(94 + b2x + a, 86.5 + b2y + a);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94 + b2x + a, 86.3 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(94 + b2x + a, 86 + b2y + a);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y + a);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y + a);
		glVertex2f(93 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y + a);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y + a);
		glVertex2f(92 + b2x + a, 85.32 + b2y + a);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y + a);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(91 + b2x + a, 85.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y + a);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y + a);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(90 + b2x + a, 85.4 + b2y + a);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y + a);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y + a);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glEnd();

		//after back feather to front bird2
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y + a);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y + a);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(88 + b2x + a, 85.325 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y + a);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85.25 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y + a);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y + a);
		glVertex2f(86 + b2x + a, 85.375 + b2y + a);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y + a);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y + a);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y + a);
		glVertex2f(85 + b2x + a, 85.7 + b2y + a);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y + a);
		glVertex2f(84.4 + b2x + a, 86 + b2y + a);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(84 + b2x + a, 86.4 + b2y + a);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y + a);
		glVertex2f(83.6 + b2x + a, 87 + b2y + a);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y + a);
		glVertex2f(83 + b2x + a, 89 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glEnd();
		// bird2 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85 + b2y + a);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y + a);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y + a);
		glEnd();
		//bird2 eye
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(84 + b2x + a, 89.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y + a);
		glEnd();
		//mouth bird2
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(82 + b2x + a, 89.3 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y + a);
		glVertex2f(82 + b2x + a, 89.1 + b2y + a);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y + a);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y + a);

		glEnd();
		//bird3 middle bird
		b2x = -8, b2y = -5;
		//front of bird3
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y + a);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y + a);
		glVertex2f(84.8 + b2x + a, 90 + b2y + a);
		glVertex2f(85 + b2x + a, 89.4 + b2y + a);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y + a);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y + a);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y + a);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y + a);
		glVertex2f(86 + b2x + a, 88.75 + b2y + a);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(86.4 + b2x + a, 89 + b2y + a);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y + a);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(87 + b2x + a, 89.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y + a);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y + a);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y + a);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y + a);
		glVertex2f(88 + b2x + a, 89.5 + b2y + a);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y + a);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y + a);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y + a);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y + a);
		glVertex2f(89 + b2x + a, 89.8 + b2y + a);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y + a);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y + a);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y + a);
		glVertex2f(89.8 + b2x + a, 90 + b2y + a);
		glVertex2f(90 + b2x + a, 90.05 + b2y + a);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y + a);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y + a);
		glVertex2f(91 + b2x + a, 90.3 + b2y + a);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y + a);
		glVertex2f(91 + b2x + a, 89.8 + b2y + a);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y + a);
		glVertex2f(90.6 + b2x + a, 89 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 87 + b2y + a);
		glEnd();

		// bird3 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y + a);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y + a);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y + a);
		glVertex2f(91 + b2x + a, 88.1 + b2y + a);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y + a);
		glVertex2f(91.4 + b2x + a, 88 + b2y + a);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y + a);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y + a);
		glVertex2f(92 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y + a);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y + a);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y + a);
		glVertex2f(93 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93 + b2x + a, 87 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y + a);
		glVertex2f(94 + b2x + a, 87.6 + b2y + a);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y + a);
		glVertex2f(95 + b2x + a, 87.35 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87 + b2y + a);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y + a);
		glVertex2f(94 + b2x + a, 86.5 + b2y + a);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94 + b2x + a, 86.3 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(94 + b2x + a, 86 + b2y + a);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y + a);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y + a);
		glVertex2f(93 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y + a);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y + a);
		glVertex2f(92 + b2x + a, 85.32 + b2y + a);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y + a);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(91 + b2x + a, 85.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y + a);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y + a);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(90 + b2x + a, 85.4 + b2y + a);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y + a);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y + a);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glEnd();

		//after back feather to front bird3
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y + a);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y + a);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(88 + b2x + a, 85.325 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y + a);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85.25 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y + a);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y + a);
		glVertex2f(86 + b2x + a, 85.375 + b2y + a);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y + a);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y + a);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y + a);
		glVertex2f(85 + b2x + a, 85.7 + b2y + a);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y + a);
		glVertex2f(84.4 + b2x + a, 86 + b2y + a);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(84 + b2x + a, 86.4 + b2y + a);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y + a);
		glVertex2f(83.6 + b2x + a, 87 + b2y + a);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y + a);
		glVertex2f(83 + b2x + a, 89 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glEnd();

		// bird3 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85 + b2y + a);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y + a);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y + a);
		glEnd();
		//bird3 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(84 + b2x + a, 89.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y + a);
		glEnd();
		//mouth bird3
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(82 + b2x + a, 89.3 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y + a);
		glVertex2f(82 + b2x + a, 89.1 + b2y + a);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y + a);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y + a);

		glEnd();

		//bird4 bottem left most
		b2x = -18, b2y = -8;

		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y + a);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y + a);
		glVertex2f(84.8 + b2x + a, 90 + b2y + a);
		glVertex2f(85 + b2x + a, 89.4 + b2y + a);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y + a);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y + a);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y + a);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y + a);
		glVertex2f(86 + b2x + a, 88.75 + b2y + a);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(86.4 + b2x + a, 89 + b2y + a);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y + a);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(87 + b2x + a, 89.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y + a);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y + a);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y + a);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y + a);
		glVertex2f(88 + b2x + a, 89.5 + b2y + a);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y + a);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y + a);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y + a);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y + a);
		glVertex2f(89 + b2x + a, 89.8 + b2y + a);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y + a);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y + a);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y + a);
		glVertex2f(89.8 + b2x + a, 90 + b2y + a);
		glVertex2f(90 + b2x + a, 90.05 + b2y + a);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y + a);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y + a);
		glVertex2f(91 + b2x + a, 90.3 + b2y + a);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y + a);
		glVertex2f(91 + b2x + a, 89.8 + b2y + a);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y + a);
		glVertex2f(90.6 + b2x + a, 89 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 87 + b2y + a);
		glEnd();

		// bird4 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y + a);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y + a);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y + a);
		glVertex2f(91 + b2x + a, 88.1 + b2y + a);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y + a);
		glVertex2f(91.4 + b2x + a, 88 + b2y + a);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y + a);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y + a);
		glVertex2f(92 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y + a);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y + a);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y + a);
		glVertex2f(93 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93 + b2x + a, 87 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y + a);
		glVertex2f(94 + b2x + a, 87.6 + b2y + a);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y + a);
		glVertex2f(95 + b2x + a, 87.35 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87 + b2y + a);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y + a);
		glVertex2f(94 + b2x + a, 86.5 + b2y + a);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94 + b2x + a, 86.3 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(94 + b2x + a, 86 + b2y + a);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y + a);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y + a);
		glVertex2f(93 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y + a);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y + a);
		glVertex2f(92 + b2x + a, 85.32 + b2y + a);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y + a);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(91 + b2x + a, 85.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y + a);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y + a);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(90 + b2x + a, 85.4 + b2y + a);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y + a);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y + a);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glEnd();

		//after back feather to front bird4
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y + a);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y + a);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(88 + b2x + a, 85.325 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y + a);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85.25 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y + a);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y + a);
		glVertex2f(86 + b2x + a, 85.375 + b2y + a);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y + a);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y + a);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y + a);
		glVertex2f(85 + b2x + a, 85.7 + b2y + a);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y + a);
		glVertex2f(84.4 + b2x + a, 86 + b2y + a);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(84 + b2x + a, 86.4 + b2y + a);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y + a);
		glVertex2f(83.6 + b2x + a, 87 + b2y + a);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y + a);
		glVertex2f(83 + b2x + a, 89 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glEnd();

		// bird4 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85 + b2y + a);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y + a);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y + a);
		glEnd();
		//bird4 eye
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(84 + b2x + a, 89.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y + a);
		glEnd();
		//mouth bird4
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(82 + b2x + a, 89.3 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y + a);
		glVertex2f(82 + b2x + a, 89.1 + b2y + a);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y + a);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y + a);

		glEnd();


		//bird5 bottem right most
		b2x = 4, b2y = -9;

		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y + a);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y + a);
		glVertex2f(84.8 + b2x + a, 90 + b2y + a);
		glVertex2f(85 + b2x + a, 89.4 + b2y + a);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y + a);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y + a);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y + a);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y + a);
		glVertex2f(86 + b2x + a, 88.75 + b2y + a);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(86.4 + b2x + a, 89 + b2y + a);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y + a);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(87 + b2x + a, 89.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y + a);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y + a);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y + a);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y + a);
		glVertex2f(88 + b2x + a, 89.5 + b2y + a);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y + a);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y + a);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y + a);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y + a);
		glVertex2f(89 + b2x + a, 89.8 + b2y + a);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y + a);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y + a);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y + a);
		glVertex2f(89.8 + b2x + a, 90 + b2y + a);
		glVertex2f(90 + b2x + a, 90.05 + b2y + a);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y + a);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y + a);
		glVertex2f(91 + b2x + a, 90.3 + b2y + a);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y + a);
		glVertex2f(91 + b2x + a, 89.8 + b2y + a);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y + a);
		glVertex2f(90.6 + b2x + a, 89 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 87 + b2y + a);
		glEnd();

		// bird5 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y + a);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y + a);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y + a);
		glVertex2f(91 + b2x + a, 88.1 + b2y + a);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y + a);
		glVertex2f(91.4 + b2x + a, 88 + b2y + a);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y + a);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y + a);
		glVertex2f(92 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y + a);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y + a);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y + a);
		glVertex2f(93 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93 + b2x + a, 87 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y + a);
		glVertex2f(94 + b2x + a, 87.6 + b2y + a);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y + a);
		glVertex2f(95 + b2x + a, 87.35 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87 + b2y + a);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y + a);
		glVertex2f(94 + b2x + a, 86.5 + b2y + a);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94 + b2x + a, 86.3 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(94 + b2x + a, 86 + b2y + a);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y + a);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y + a);
		glVertex2f(93 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y + a);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y + a);
		glVertex2f(92 + b2x + a, 85.32 + b2y + a);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y + a);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(91 + b2x + a, 85.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y + a);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y + a);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(90 + b2x + a, 85.4 + b2y + a);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y + a);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y + a);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glEnd();

		//after back feather to front bird5
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y + a);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y + a);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(88 + b2x + a, 85.325 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y + a);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85.25 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y + a);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y + a);
		glVertex2f(86 + b2x + a, 85.375 + b2y + a);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y + a);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y + a);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y + a);
		glVertex2f(85 + b2x + a, 85.7 + b2y + a);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y + a);
		glVertex2f(84.4 + b2x + a, 86 + b2y + a);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(84 + b2x + a, 86.4 + b2y + a);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y + a);
		glVertex2f(83.6 + b2x + a, 87 + b2y + a);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y + a);
		glVertex2f(83 + b2x + a, 89 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glEnd();

		// bird5 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85 + b2y + a);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y + a);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y + a);
		glEnd();
		//bird5 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(84 + b2x + a, 89.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y + a);
		glEnd();
		//mouth bird5
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(82 + b2x + a, 89.3 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y + a);
		glVertex2f(82 + b2x + a, 89.1 + b2y + a);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y + a);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y + a);

		glEnd();
	}

	if (net_k == 1)
	{
		glBegin(GL_LINES);
		glVertex2f(30, 50);
		glVertex2f(20, 25);
		glVertex2f(30, 50);
		glVertex2f(25, 25);
		glVertex2f(30, 50);
		glVertex2f(30, 25);
		glVertex2f(30, 50);
		glVertex2f(35, 25);
		glVertex2f(30, 50);
		glVertex2f(40, 25);
		glVertex2f(30, 50);
		glVertex2f(45, 25);
		glVertex2f(30, 50);
		glVertex2f(50, 25);
		glVertex2f(30, 50);
		glVertex2f(50, 30);
		glVertex2f(30, 50);
		glVertex2f(48, 35);
		glVertex2f(30, 50);
		glVertex2f(45, 40);
		glVertex2f(30, 50);
		glVertex2f(40, 45);
		glVertex2f(30, 50);
		glVertex2f(30.5, 46);

		glVertex2f(30, 50);
		glVertex2f(15, 25);
		glVertex2f(30, 50);
		glVertex2f(13, 28);
		glVertex2f(30, 50);
		glVertex2f(14, 35);
		glVertex2f(30, 50);
		glVertex2f(16, 40);
		glVertex2f(30, 50);
		glVertex2f(18, 44);
		glVertex2f(30, 50);
		glVertex2f(20, 47);

		glEnd();
		// horizontal line bottem
		glBegin(GL_LINE_STRIP);
		glVertex2f(20, 47);
		glVertex2f(18, 44);
		glVertex2f(16, 40);
		glVertex2f(14, 35);
		glVertex2f(13, 28);
		glVertex2f(15, 25);
		glVertex2f(20, 25);
		glVertex2f(25, 25);
		glVertex2f(30, 25);
		glVertex2f(35, 25);
		glVertex2f(40, 25);
		glVertex2f(45, 25);
		glVertex2f(50, 25);
		glVertex2f(50, 30);
		glVertex2f(48, 35);
		glVertex2f(45, 40);
		glVertex2f(40, 45);
		glEnd();
		int nx = 2, ny = 3, nxr = 2;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx, 47 + .5);
		glVertex2f(18 + nx, 44 + 1);
		glVertex2f(16 + nx, 40 + 1);
		glVertex2f(14 + nx, 35 + 2);
		glVertex2f(13 + nx, 28 + ny);
		glVertex2f(15 + nx, 25 + ny);
		glVertex2f(20 + nx, 25 + ny);
		glVertex2f(25 + nx, 25 + ny);
		glVertex2f(30 + nx, 25 + ny);
		glVertex2f(35 + nx, 25 + ny);
		glVertex2f(40 - nx, 25 + ny);
		glVertex2f(45 - nx, 25 + ny);
		glVertex2f(50 - nx, 25 + ny);
		glVertex2f(50 - nx, 30 + ny);
		glVertex2f(48 - nx, 35 + 1);
		glVertex2f(45 - nx, 40 + 1);
		glVertex2f(40 - nx, 45 + 1);

		glEnd();

		//3rd horizontal
		nx = 4; ny = 6;;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 1, 47 + 1);
		glVertex2f(18 + nx, 44 + 2);
		glVertex2f(16 + nx, 40 + 3);
		glVertex2f(14 + nx, 35 + 3);
		glVertex2f(13 + nx, 28 + ny);
		glVertex2f(15 + nx, 25 + ny + 1);
		glVertex2f(20 + nx, 25 + ny + 1);
		glVertex2f(25 + nx, 25 + ny + 1);
		glVertex2f(30 + nx, 25 + ny + 1);
		glVertex2f(35 + nx, 25 + ny + 1);
		glVertex2f(40 + nx, 25 + ny + 1);
		glVertex2f(45 - nx, 25 + ny + 1);
		glVertex2f(50 - nx - 1, 25 + ny + 1);
		glVertex2f(50 - nx, 30 + 4);
		glVertex2f(48 - nx - 2, 35 + 5);
		glVertex2f(45 - nx - 3, 40 + 5);
		glVertex2f(40 - nx - 3, 45 + 4);

		glEnd();
		nx = 6; ny = 9;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 2, 47 + 1);
		glVertex2f(18 + nx, 44 + 3);
		glVertex2f(16 + nx, 40 + 4);
		glVertex2f(14 + nx, 35 + 4);
		glVertex2f(13 + nx, 28 + ny);
		glVertex2f(15 + nx, 25 + ny + 2);
		glVertex2f(20 + nx, 25 + ny + 2);
		glVertex2f(25 + nx, 25 + ny + 2);
		glVertex2f(30 + nx, 25 + ny + 2);
		glVertex2f(35 + nx, 25 + ny + 2);

		glVertex2f(48 - nx + 1, 35 + 2);
		glVertex2f(45 - nx, 40 + 2);
		glVertex2f(40 - nx + 1, 45 + 2);

		glEnd();
		//4th
		nx = 8; ny = 12;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 2, 47 + 2);
		glVertex2f(18 + nx, 44 + 4);
		glVertex2f(16 + nx + 1, 40 + 6);
		glVertex2f(14 + nx + 1, 35 + 8);
		glVertex2f(13 + nx + 1, 28 + ny);
		glVertex2f(15 + nx + 1, 25 + ny + 2);
		glVertex2f(20 + nx, 25 + ny + 2);
		glVertex2f(25 + nx, 25 + ny + 2);
		glVertex2f(30 + nx + 1, 25 + ny + 2);

		glVertex2f(48 - nx, 35 + 5);
		glVertex2f(45 - nx, 40 + 4);
		glVertex2f(40 - nx + 1, 45 + 2);

		glEnd();

		//5
		nx = 10; ny = 15;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 2, 47 + 2.7);

		glVertex2f(13 + nx + 1, 28 + ny - .5);
		glVertex2f(15 + nx + 1, 25 + ny + 2);

		glVertex2f(25 + nx, 25 + ny + 2);
		glVertex2f(30 + nx - 2, 25 + ny + 2);


		glEnd();
		nx = 12; ny = 18;
		glBegin(GL_LINE_STRIP);

		glVertex2f(13 + nx + 1, 28 + ny - 1);
		glVertex2f(15 + nx + 1, 25 + ny + 2);
		glVertex2f(20 + nx, 25 + ny + 2);
		glVertex2f(25 + nx - 2, 25 + ny + 2);

		glEnd();
		nx = 14; ny = 21;
		glBegin(GL_LINE_STRIP);

		glVertex2f(13 + nx + 1, 28 + ny - 1);
		glVertex2f(15 + nx + 1, 25 + ny + 2);
		glVertex2f(20 + nx - 2, 25 + ny + 2);
		glEnd();
	}
	char str[] = "PRESS N/n TO CONTINUE";
	glColor3f(1, 1, 1);
	glRasterPos2f(30, 5);
	for (i = 0; i<strlen(str); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
	}
	
}

void back_ground3()
{
	int i, s_i;
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 0.0, 100.0);
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);//sky
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.0);
	glVertex2f(100.0, 0.0);
	glColor3f(0, .749, 1);
	glVertex2f(100.0, 100.0);
	glVertex2f(0.0, 100.0);
	glEnd();
	if (display_order == 6 || display_order == 7 || display_order == 8)
	{
		glShadeModel(GL_SMOOTH);
		glColor3f(0.0, 1.0, 0.0);
		glBegin(GL_POLYGON);//sky
		glVertex2f(0.0, 0.0);
		glVertex2f(0.0, 100.0);
		glVertex2f(100.0, 100.0);
		glVertex2f(100.0, 0.0);
		glEnd();
	}
	if (display_order != 3)
	{
		float a1 = 0.0, b1 = 0.5, c1 = 1.0, a2 = 0.0, b2 = 0.6, c2 = 0.0, a3 = 0.0, b3 = 0.6, c3 = 0, a4 = 0.0, b4 = 0.6, c4 = 0;
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glColor3f(a1, b1, c1);
		glVertex2f(0.0, 0.0);
		glColor3f(a2, b2, c2);
		glVertex2f(0.0, 52.0);
		glColor3f(a3, b3, c3);
		glVertex2f(100.0, 48.0);
		glColor3f(a4, b4, c4);
		glVertex2f(100.0, 0.0);
		glEnd();
	}

	if (display_order == 3)
	{
		glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(0.0, 0.0);
		glColor3f(0, 0, 0);
		glVertex2f(0.0, 52.0);
		glColor3f(0.196, .804, 0.196);
		glVertex2f(100.0, 48.0);
		glColor3f(0, 0, 0);
		glVertex2f(100.0, 0.0);
		glEnd();
		//grain

		glBegin(GL_POINTS);
		glPointSize(8.0);
		glColor3f(1, 1, 0);
		glColor3f(1, 0.843, 0);
		glVertex2f(20, 37);
		glVertex2f(20, 33);
		glVertex2f(20, 44);
		glVertex2f(21, 31);
		glVertex2f(21, 34);
		glVertex2f(21, 44);
		glVertex2f(21, 33);
		glVertex2f(15, 15);
		glVertex2f(15, 21);
		glVertex2f(15.5, 45);
		glVertex2f(15.5, 41);
		glVertex2f(15.5, 38);
		glVertex2f(15.5, 35);
		glVertex2f(15.6, 30);
		glVertex2f(15.9, 28);
		glVertex2f(15.3, 24);
		glVertex2f(15.4, 21);
		glVertex2f(16.3, 26);
		glVertex2f(17, 22);
		glVertex2f(18, 36);
		glVertex2f(18.3, 35);
		glVertex2f(18.9, 34);
		glVertex2f(18.7, 24);
		glVertex2f(19.1, 22);
		glVertex2f(20, 43);
		glVertex2f(20.6, 45);
		glVertex2f(21, 41);
		glVertex2f(21.1, 33);
		glVertex2f(22.2, 18);
		glVertex2f(22.5, 26);
		glVertex2f(23.2, 43);
		glVertex2f(24.2, 16);
		glVertex2f(24.4, 13);
		glVertex2f(25.9, 29);
		glVertex2f(25.3, 35);
		glVertex2f(25.6, 21);
		glVertex2f(25.3, 43);
		glVertex2f(25.2, 15);
		glVertex2f(25.1, 39);
		glVertex2f(26, 28);
		glVertex2f(27, 16);
		glVertex2f(27.2, 48);
		glVertex2f(27.5, 22);
		glVertex2f(27.8, 43);
		glVertex2f(28.2, 49);
		glVertex2f(28.4, 31);
		glVertex2f(29.3, 26);
		glVertex2f(29.4, 26);
		glVertex2f(30.6, 23);
		glVertex2f(39, 20);
		glVertex2f(30.4, 42);
		glVertex2f(30.6, 33);
		glVertex2f(30.8, 26);
		glVertex2f(31.3, 44);
		glVertex2f(31.5, 22);
		glVertex2f(32.1, 12);
		glVertex2f(32.2, 43);
		glVertex2f(33.1, 35);
		glVertex2f(34.2, 17);
		glVertex2f(34.4, 47);
		glVertex2f(35.2, 39);
		glVertex2f(35.6, 44);
		glVertex2f(14, 26);
		glVertex2f(13, 21);
		glVertex2f(14.5, 32);
		glVertex2f(13.4, 28);
		glEnd();

	}
	//half tree branch
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.8, 0.1);
	glVertex2f(28, 65);
	glVertex2f(30, 64.5);
	glVertex2f(32.5, 64);
	glVertex2f(34, 64.5);
	glVertex2f(35.5, 65);
	glVertex2f(39, 66);
	glVertex2f(37, 67.5);
	glVertex2f(37, 68);
	glVertex2f(39, 69.5);

	glVertex2f(39, 71.5);
	glVertex2f(39.3, 72);
	glVertex2f(39.6, 73);
	glVertex2f(39.9, 73.5);
	glVertex2f(40, 74);
	glVertex2f(40.5, 75);
	glVertex2f(40, 76.5);
	glVertex2f(43, 77.5);
	glVertex2f(42.5, 79);
	glVertex2f(43, 80);
	glVertex2f(41.5, 82.5);
	glVertex2f(40.5, 82);
	glVertex2f(40, 81.5);
	glVertex2f(41, 82.5);
	glVertex2f(41.5, 83.5);
	glVertex2f(42, 85);
	glVertex2f(39, 87);
	glVertex2f(37, 88.5);
	glVertex2f(33, 86);
	glVertex2f(32, 84);
	glVertex2f(33, 90);
	glVertex2f(28, 65);

	glEnd();

	//root
	glBegin(GL_POLYGON);
	glColor3f(0.65, 0.50, 0.39);
	glVertex2f(26.5, 49);
	glVertex2f(28, 48.5);
	glVertex2f(30, 50);
	glVertex2f(28.5, 52.5);
	glVertex2f(28, 55);
	glVertex2f(28.5, 67.5);
	glVertex2f(28, 55);
	glVertex2f(28, 60);
	glVertex2f(28.5, 67.5);
	glVertex2f(28, 65);
	glVertex2f(28.5, 67.5);
	glVertex2f(29.5, 71);
	glVertex2f(30, 72.5);
	glVertex2f(25, 80);
	glVertex2f(25, 50);
	glVertex2f(26.5, 49);
	glEnd();
	//tree 1 branch
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.9, 0.2);
	glVertex2f(16.5, 70);
	glVertex2f(12.5, 70);
	glVertex2f(11, 71.5);
	glVertex2f(10, 72.5);
	glColor3f(0.0, 0.85, 0.1);
	glVertex2f(10, 75);
	glVertex2f(7.5, 75);
	glVertex2f(6, 76);
	glVertex2f(5, 78.5);
	glVertex2f(5, 80);
	glVertex2f(7.5, 82.5);
	glVertex2f(5, 85);
	glVertex2f(2.7, 87);
	glVertex2f(2.75, 90);
	glColor3f(0.1, 0.6, 0.1);
	glVertex2f(2.8, 91);
	glVertex2f(3.5, 92.5);
	glVertex2f(5, 95);
	glVertex2f(7, 97.5);
	glVertex2f(10, 98);
	glVertex2f(15, 99);
	glColor3f(0.1, 0.6, 0.2);
	glVertex2f(20, 98.5);
	glVertex2f(25, 98);
	glVertex2f(30, 97.5);
	glVertex2f(30.5, 97);
	glVertex2f(30, 95);
	glVertex2f(32.5, 92.5);
	glVertex2f(34, 87.5);
	glVertex2f(35, 85);
	glVertex2f(34.5, 82.5);

	glVertex2f(34, 79);
	glVertex2f(34.5, 77.5);
	glColor3f(0.1, 0.6, 0.0);
	glVertex2f(33, 76);
	glVertex2f(32.5, 74.5);
	glVertex2f(31, 73);
	glVertex2f(30, 72.5);
	glVertex2f(27.5, 72.5);
	glVertex2f(26, 73);
	glVertex2f(25, 75);
	glEnd();

	//grass middle
	int gx = 20, gy = 5;
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);

	glVertex2f(0 + gx, 40 + gy);
	glVertex2f(0 + gx, 47 + gy);
	glVertex2f(2.5 + gx, 46.5 + gy);
	glVertex2f(2 + gx, 48 + gy);
	glVertex2f(0 + gx, 50 + gy);
	glVertex2f(2 + gx, 49.5 + gy);
	glVertex2f(5 + gx, 47 + gy);
	glVertex2f(2.5 + gx, 55 + gy);
	glVertex2f(7 + gx, 50 + gy);
	glVertex2f(8 + gx, 53 + gy);
	glVertex2f(10 + gx, 55 + gy);
	glVertex2f(10.5 + gx, 52 + gy);
	glVertex2f(10 + gx, 50 + gy);
	glVertex2f(17 + gx, 53 + gy);
	glVertex2f(10 + gx, 45 + gy);
	glVertex2f(20 + gx, 47 + gy);
	glVertex2f(18 + gx, 45 + gy);
	glVertex2f(25 + gx, 46 + gy);
	glVertex2f(20 + gx, 42 + gy);
	glVertex2f(30 + gx, 40 + gy);
	glEnd();

	//tree1 root
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex2f(17.5, 56);
	glVertex2f(17.0, 62.5);
	glVertex2f(17.5, 67.5);
	glVertex2f(16.5, 70.0);
	glVertex2f(16.0, 72.5);
	glVertex2f(15.5, 75.0);
	glVertex2f(15.0, 80.0);
	glVertex2f(20.0, 85.0);
	glVertex2f(21.5, 77.0);

	glVertex2f(26.0, 87.0);
	glVertex2f(30.0, 85.0);
	glVertex2f(28.0, 80.0);
	glVertex2f(25.5, 75.0);
	glVertex2f(25, 72.5);
	glVertex2f(25, 70.0);
	glVertex2f(25.0, 55.0);
	glVertex2f(25.5, 52.5);
	glVertex2f(26.0, 50.0);

	glVertex2f(26.5, 48.0);
	glVertex2f(27.0, 47.5);
	glVertex2f(28.5, 46.0);
	glVertex2f(29, 44);
	glVertex2f(30.0, 40.0);
	glVertex2f(20.0, 47.5);
	glVertex2f(17.5, 47.0);
	glVertex2f(18.0, 50.0);
	glVertex2f(17.0, 54.0);

	glVertex2f(20.0, 53.0);
	glVertex2f(17.5, 56.0);

	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.196078, 0.8, 0.196078);
	glVertex2f(0, 27.5);
	glVertex2f(0, 32.5);
	glVertex2f(0.3, 33.5);
	glVertex2f(2.5, 35);
	glVertex2f(2.5, 32.5);
	glVertex2f(4.9, 35);
	glVertex2f(7.5, 37.5);
	glVertex2f(7, 35);
	glVertex2f(10, 35);
	glVertex2f(7, 32.5);
	glVertex2f(15, 35);
	glVertex2f(12.5, 32);
	glVertex2f(15, 30);
	glVertex2f(12.5, 27);
	glVertex2f(20, 26);
	glEnd();
	//grass 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);

	glVertex2f(0, 40);
	glVertex2f(0, 47);
	glVertex2f(2.5, 46.5);
	glVertex2f(2, 48);
	glVertex2f(0, 50);
	glVertex2f(2, 49.5);
	glVertex2f(5, 47);
	glVertex2f(2.5, 55);
	glVertex2f(7, 50);
	glVertex2f(8, 53);
	glVertex2f(10, 55);
	glVertex2f(10.5, 52);
	glVertex2f(10, 50);
	glVertex2f(17, 53);
	glVertex2f(10, 45);
	glVertex2f(20, 47);
	glVertex2f(18, 45);
	glVertex2f(25, 46);
	glVertex2f(20, 42);
	glVertex2f(30, 40);
	glEnd();

	//ryt grass
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 7.5);
	glVertex2f(5, 13);
	glVertex2f(0, 15);
	glVertex2f(5, 13);
	glVertex2f(0, 20);
	glVertex2f(5, 15);
	glVertex2f(10, 18);
	glVertex2f(15, 25);
	glVertex2f(13, 20);
	glVertex2f(17, 21);
	glVertex2f(20, 23);
	glVertex2f(17, 18);
	glVertex2f(15, 15);
	glVertex2f(20, 17);
	glVertex2f(25, 18);
	glVertex2f(20, 15);
	glVertex2f(15, 10);
	glVertex2f(30, 10);
	glVertex2f(35, 7.5);
	glEnd();
	//grass 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 50);
	glVertex2f(0, 65);
	glVertex2f(10, 67);
	glVertex2f(7, 65);
	glVertex2f(17, 65);
	glVertex2f(15, 64);
	glVertex2f(12, 63);
	glVertex2f(15, 60);
	glVertex2f(17, 57);
	glVertex2f(15, 56);
	glVertex2f(20, 53);
	glVertex2f(17, 54);
	glVertex2f(18, 50);
	glVertex2f(16, 47);
	glVertex2f(10, 45);
	glVertex2f(17, 53);
	glVertex2f(10, 50);
	glVertex2f(10.5, 52);
	glVertex2f(10, 55);
	glVertex2f(8, 53);
	glVertex2f(7, 50);
	glVertex2f(2.5, 55);
	glVertex2f(5, 47);
	glVertex2f(2, 49.5);
	glVertex2f(0, 50);
	glEnd();
	//branch
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0.0);
	glVertex2f(72.5, 70);
	glVertex2f(71.5, 69);
	glVertex2f(70, 68);
	glVertex2f(67.5, 68.5);
	glVertex2f(66, 70);
	glVertex2f(66.5, 71);
	glVertex2f(66, 72.7);
	glVertex2f(65, 74);
	glVertex2f(63, 75);
	glVertex2f(62.5, 75.5);
	glVertex2f(62, 77.5);
	glVertex2f(61, 79);
	glVertex2f(61, 80);
	glVertex2f(61.5, 81);
	glVertex2f(62, 82.5);
	glVertex2f(62.3, 84.5);
	glVertex2f(62.4, 85);
	glVertex2f(62.5, 87.5);
	glVertex2f(63.5, 90);
	glVertex2f(65, 91);
	glVertex2f(66.5, 92);
	glVertex2f(67.5, 92.5);
	glVertex2f(69, 92);
	glVertex2f(70.5, 90.5);
	glEnd();
	//tree2half
	glBegin(GL_POLYGON);
	glColor3f(0.65, 0.50, 0.39);
	glVertex2f(75, 48);
	glVertex2f(75.5, 58);
	glVertex2f(75.6, 60);
	glVertex2f(75.5, 61);
	glVertex2f(75, 65);
	glVertex2f(74.5, 66);
	glVertex2f(73, 69);
	glVertex2f(72.5, 70);
	glVertex2f(72.5, 77.5);
	glVertex2f(75, 80);
	glVertex2f(81, 67.5);
	glVertex2f(78, 48);
	glEnd();
	//tree branch 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.6, 0.3);
	glVertex2f(75, 75);
	glVertex2f(72.5, 72.5);
	glVertex2f(71, 74.0);
	glVertex2f(70.5, 74.5);
	glVertex2f(70, 75);
	glVertex2f(69.5, 76);
	glVertex2f(69.5, 77);

	glVertex2f(70, 80);
	glVertex2f(68, 81);
	glVertex2f(67.5, 82);
	glVertex2f(66, 83.5);
	glVertex2f(66.3, 84.5);
	glVertex2f(66.5, 85);
	glVertex2f(67, 87);
	glVertex2f(67.5, 87.5);
	glVertex2f(70, 90);
	glVertex2f(71, 91.5);
	glVertex2f(71.5, 92.5);
	glVertex2f(72.5, 94);
	glVertex2f(75, 95);
	glVertex2f(77.5, 96);
	glVertex2f(80, 96.5);
	glVertex2f(82.5, 96);
	glVertex2f(83, 95);
	glVertex2f(83.5, 94.5);
	glVertex2f(84.5, 92.5);

	glVertex2f(84.7, 90);
	glVertex2f(86, 91);
	glVertex2f(87.0, 91.5);
	glVertex2f(87.5, 90);
	glVertex2f(87.5, 89);
	glVertex2f(89, 89);
	glVertex2f(89.5, 87.5);
	glVertex2f(89, 85);
	glVertex2f(88, 82.5);
	glVertex2f(87, 82);
	glVertex2f(86, 81);
	glVertex2f(85, 80);
	glVertex2f(85.5, 75.5);
	glVertex2f(84, 75);
	glVertex2f(82.5, 75);
	glEnd();

	//tree 2 
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex2f(77.5, 48);
	glVertex2f(77, 60);
	glVertex2f(77.5, 62.5);
	glVertex2f(77, 65);
	glVertex2f(77, 67.5);
	glVertex2f(76, 70);
	glVertex2f(75, 75);
	glVertex2f(75, 78);
	glVertex2f(80, 75);
	glVertex2f(82.5, 78);
	glVertex2f(82, 75);
	glVertex2f(82, 72.5);
	glVertex2f(81.5, 70);
	glVertex2f(81, 65);
	glVertex2f(81.5, 62);
	glVertex2f(84, 48);
	glEnd();
	glBegin(GL_LINES);
	glLineWidth(15.0);
	glColor3f(0.0, 0.6, 0.3);
	glVertex2f(75, 10);
	glVertex2f(72, 20);
	glVertex2f(70, 17.5);
	glVertex2f(75, 10);
	glVertex2f(72.5, 25);
	glVertex2f(71, 22.5);
	glVertex2f(75, 10);
	glVertex2f(73, 25);
	glVertex2f(77, 22.5);
	glVertex2f(75, 10);
	glVertex2f(76, 19);
	glVertex2f(75.5, 15);
	glVertex2f(75, 10);
	glVertex2f(77, 15);
	glVertex2f(78, 12);
	glEnd();


	a -= 0.04; c -= 0.04; b += 0.04; d += 0.04;
	if (display_order == 6 | display_order == 7)
	{
		a = -49;
		b = 0;
		c = 0;
		d = 0;
	}

	if (display_order == 6 | display_order == 7)
	{
		c = 0;
		d = 0;
	}

	if (a>-100)
	{
		//bird 2 middle left most
		int b2x = -15, b2y = 3;

		//front of bird2
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y - 50 + b);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(84.8 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(85 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y - 50 + b);
		glVertex2f(86 + b2x + a, 88.75 + b2y - 50 + b);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(86.4 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 89.25 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y - 50 + b);
		glVertex2f(88 + b2x + a, 89.5 + b2y - 50 + b);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y - 50 + b);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y - 50 + b);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 90.05 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 87 + b2y - 50 + b);
		glEnd();

		// bird2 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 88.1 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y - 50 + b);
		glVertex2f(91.4 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y - 50 + b);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y - 50 + b);
		glVertex2f(92 + b2x + a, 87.84 + b2y - 50 + b);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y - 50 + b);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y - 50 + b);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y - 50 + b);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(95 + b2x + a, 87.35 + b2y - 50 + b);
		glVertex2f(94.8 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86.5 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86.3 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y - 50 + b);
		glVertex2f(92 + b2x + a, 85.32 + b2y - 50 + b);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y - 50 + b);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 85.6 + b2y - 50 + b);
		glEnd();

		//after back feather to front bird2
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y - 50 + b);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(88 + b2x + a, 85.325 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 85.25 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y - 50 + b);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y - 50 + b);
		glVertex2f(86 + b2x + a, 85.375 + b2y - 50 + b);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(85 + b2x + a, 85.7 + b2y - 50 + b);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y - 50 + b);
		glVertex2f(84.4 + b2x + a, 86 + b2y - 50 + b);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y - 50 + b);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(83 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(83 + b2x + a, 90 + b2y - 50 + b);
		glEnd();

		// bird2 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 85 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y - 50 + b);
		glEnd();
		//bird2 eye
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y - 50 + b);
		glEnd();
		//mouth bird2
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(82 + b2x + a, 89.3 + b2y - 50 + b);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(82.4 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y - 50 + b);
		glVertex2f(82 + b2x + a, 89.1 + b2y - 50 + b);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y - 50 + b);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y - 50 + b);

		glEnd();

		//bird3 middle bird
		b2x = -8, b2y = -5;

		//front of bird3
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y - 50 + b);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(84.8 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(85 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y - 50 + b);
		glVertex2f(86 + b2x + a, 88.75 + b2y - 50 + b);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(86.4 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 89.25 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y - 50 + b);
		glVertex2f(88 + b2x + a, 89.5 + b2y - 50 + b);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y - 50 + b);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y - 50 + b);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 90.05 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 87 + b2y - 50 + b);
		glEnd();

		// bird3 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 88.1 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y - 50 + b);
		glVertex2f(91.4 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y - 50 + b);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y - 50 + b);
		glVertex2f(92 + b2x + a, 87.84 + b2y - 50 + b);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y - 50 + b);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y - 50 + b);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y - 50 + b);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(95 + b2x + a, 87.35 + b2y - 50 + b);
		glVertex2f(94.8 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86.5 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86.3 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y - 50 + b);
		glVertex2f(92 + b2x + a, 85.32 + b2y - 50 + b);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y - 50 + b);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 85.6 + b2y - 50 + b);
		glEnd();

		//after back feather to front bird3
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y - 50 + b);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(88 + b2x + a, 85.325 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 85.25 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y - 50 + b);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y - 50 + b);
		glVertex2f(86 + b2x + a, 85.375 + b2y - 50 + b);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(85 + b2x + a, 85.7 + b2y - 50 + b);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y - 50 + b);
		glVertex2f(84.4 + b2x + a, 86 + b2y - 50 + b);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y - 50 + b);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(83 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(83 + b2x + a, 90 + b2y - 50 + b);
		glEnd();

		// bird3 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 85 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y - 50 + b);
		glEnd();
		//bird3 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y - 50 + b);
		glEnd();
		//mouth bird3
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(82 + b2x + a, 89.3 + b2y - 50 + b);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(82.4 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y - 50 + b);
		glVertex2f(82 + b2x + a, 89.1 + b2y - 50 + b);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y - 50 + b);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y - 50 + b);

		glEnd();
		//bird4 bottem left most
		b2x = -18, b2y = -8;

		//front of bird4
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y - 50 + b);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(84.8 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(85 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y - 50 + b);
		glVertex2f(86 + b2x + a, 88.75 + b2y - 50 + b);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(86.4 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 89.25 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y - 50 + b);
		glVertex2f(88 + b2x + a, 89.5 + b2y - 50 + b);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y - 50 + b);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y - 50 + b);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 90.05 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 87 + b2y - 50 + b);
		glEnd();

		// bird4 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 88.1 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y - 50 + b);
		glVertex2f(91.4 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y - 50 + b);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y - 50 + b);
		glVertex2f(92 + b2x + a, 87.84 + b2y - 50 + b);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y - 50 + b);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y - 50 + b);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y - 50 + b);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(95 + b2x + a, 87.35 + b2y - 50 + b);
		glVertex2f(94.8 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86.5 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86.3 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y - 50 + b);
		glVertex2f(92 + b2x + a, 85.32 + b2y - 50 + b);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y - 50 + b);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 85.6 + b2y - 50 + b);
		glEnd();

		//after back feather to front bird4
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y - 50 + b);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(88 + b2x + a, 85.325 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 85.25 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y - 50 + b);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y - 50 + b);
		glVertex2f(86 + b2x + a, 85.375 + b2y - 50 + b);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(85 + b2x + a, 85.7 + b2y - 50 + b);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y - 50 + b);
		glVertex2f(84.4 + b2x + a, 86 + b2y - 50 + b);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y - 50 + b);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(83 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(83 + b2x + a, 90 + b2y - 50 + b);
		glEnd();

		// bird4 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 85 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y - 50 + b);
		glEnd();
		//bird4 eye
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y - 50 + b);
		glEnd();
		//mouth bird4
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(82 + b2x + a, 89.3 + b2y - 50 + b);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(82.4 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y - 50 + b);
		glVertex2f(82 + b2x + a, 89.1 + b2y - 50 + b);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y - 50 + b);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y - 50 + b);

		glEnd();
		//bird5 bottem right most
		b2x = 4, b2y = -9;
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y - 50 + b);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y - 50 + b);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(84.8 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(85 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y - 50 + b);
		glVertex2f(86 + b2x + a, 88.75 + b2y - 50 + b);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(86.4 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 89.25 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y - 50 + b);
		glVertex2f(88 + b2x + a, 89.5 + b2y - 50 + b);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y - 50 + b);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y - 50 + b);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 90 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 90.05 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 90.3 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 87 + b2y - 50 + b);
		glEnd();

		// bird5 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 88.1 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y - 50 + b);
		glVertex2f(91.4 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y - 50 + b);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y - 50 + b);
		glVertex2f(92 + b2x + a, 87.84 + b2y - 50 + b);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y - 50 + b);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y - 50 + b);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y - 50 + b);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 88 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 87.6 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y - 50 + b);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y - 50 + b);
		glVertex2f(95 + b2x + a, 87.35 + b2y - 50 + b);
		glVertex2f(94.8 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86.5 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86.3 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y - 50 + b);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y - 50 + b);
		glVertex2f(94 + b2x + a, 86 + b2y - 50 + b);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y - 50 + b);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y - 50 + b);
		glVertex2f(93 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y - 50 + b);
		glVertex2f(92 + b2x + a, 85.32 + b2y - 50 + b);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y - 50 + b);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y - 50 + b);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(91 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y - 50 + b);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y - 50 + b);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(90 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 85.6 + b2y - 50 + b);
		glEnd();

		//after back feather to front bird5
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 87.2 + b2y - 50 + b);
		glVertex2f(89 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y - 50 + b);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(88 + b2x + a, 85.325 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 85.25 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y - 50 + b);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y - 50 + b);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y - 50 + b);
		glVertex2f(86 + b2x + a, 85.375 + b2y - 50 + b);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y - 50 + b);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y - 50 + b);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y - 50 + b);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y - 50 + b);
		glVertex2f(85 + b2x + a, 85.7 + b2y - 50 + b);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y - 50 + b);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y - 50 + b);
		glVertex2f(84.4 + b2x + a, 86 + b2y - 50 + b);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 86.4 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 87 + b2y - 50 + b);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y - 50 + b);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(83 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(83 + b2x + a, 90 + b2y - 50 + b);
		glEnd();

		// bird5 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y - 50 + b);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87 + b2x + a, 85 + b2y - 50 + b);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y - 50 + b);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85 + b2y - 50 + b);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y - 50 + b);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y - 50 + b);
		glEnd();
		//bird5 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(84 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y - 50 + b);
		glEnd();
		//mouth bird5
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y - 50 + b);
		glVertex2f(82 + b2x + a, 89.3 + b2y - 50 + b);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y - 50 + b);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y - 50 + b);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y - 50 + b);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y - 50 + b);
		glVertex2f(82.8 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y - 50 + b);
		glVertex2f(82.4 + b2x + a, 89 + b2y - 50 + b);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y - 50 + b);
		glVertex2f(82 + b2x + a, 89.1 + b2y - 50 + b);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y - 50 + b);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y - 50 + b);

		glEnd();
		if (display_order == 6 | display_order == 3)
		{
			//net

			glBegin(GL_LINES);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(20 + c, 25 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(25 + c, 25 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(30 + c, 25 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(35 + c, 25 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(40 + c, 25 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(45 + c, 25 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(50 + c, 25 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(50 + c, 30 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(48 + c, 35 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(45 + c, 40 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(40 + c, 45 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(30.5 + c, 46 + d);

			glVertex2f(30 + c, 50 + d);
			glVertex2f(15 + c, 25 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(13 + c, 28 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(14 + c, 35 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(16 + c, 40 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(18 + c, 44 + d);
			glVertex2f(30 + c, 50 + d);
			glVertex2f(20 + c, 47 + d);

			glEnd();
			// horizontal line bottem
			glBegin(GL_LINE_STRIP);
			glVertex2f(20 + c, 47 + d);
			glVertex2f(18 + c, 44 + d);
			glVertex2f(16 + c, 40 + d);
			glVertex2f(14 + c, 35 + d);
			glVertex2f(13 + c, 28 + d);
			glVertex2f(15 + c, 25 + d);
			glVertex2f(20 + c, 25 + d);
			glVertex2f(25 + c, 25 + d);
			glVertex2f(30 + c, 25 + d);
			glVertex2f(35 + c, 25 + d);
			glVertex2f(40 + c, 25 + d);
			glVertex2f(45 + c, 25 + d);
			glVertex2f(50 + c, 25 + d);
			glVertex2f(50 + c, 30 + d);
			glVertex2f(48 + c, 35 + d);
			glVertex2f(45 + c, 40 + d);
			glVertex2f(40 + c, 45 + d);
			glEnd();
			int nx = 2, ny = 3, nxr = 2;
			glBegin(GL_LINE_STRIP);
			glVertex2f(20 + nx + c, 47 + .5 + d);
			glVertex2f(18 + nx + c, 44 + 1 + d);
			glVertex2f(16 + nx + c, 40 + 1 + d);
			glVertex2f(14 + nx + c, 35 + 2 + d);
			glVertex2f(13 + nx + c, 28 + ny + d);
			glVertex2f(15 + nx + c, 25 + ny + d);
			glVertex2f(20 + nx + c, 25 + ny + d);
			glVertex2f(25 + nx + c, 25 + ny + d);
			glVertex2f(30 + nx + c, 25 + ny + d);
			glVertex2f(35 + nx + c, 25 + ny + d);
			glVertex2f(40 - nx + c, 25 + ny + d);
			glVertex2f(45 - nx + c, 25 + ny + d);
			glVertex2f(50 - nx + c, 25 + ny + d);
			glVertex2f(50 - nx + c, 30 + ny + d);
			glVertex2f(48 - nx + c, 35 + 1 + d);
			glVertex2f(45 - nx + c, 40 + 1 + d);
			glVertex2f(40 - nx + c, 45 + 1 + d);

			glEnd();

			//3rd horizontal
			nx = 4; ny = 6;;
			glBegin(GL_LINE_STRIP);
			glVertex2f(20 + nx - 1 + c, 47 + 1 + d);
			glVertex2f(18 + nx + c, 44 + 2 + d);
			glVertex2f(16 + nx + c, 40 + 3 + d);
			glVertex2f(14 + nx + c, 35 + 3 + d);
			glVertex2f(13 + nx + c, 28 + ny + d);
			glVertex2f(15 + nx + c, 25 + ny + 1 + d);
			glVertex2f(20 + nx + c, 25 + ny + 1 + d);
			glVertex2f(25 + nx + c, 25 + ny + 1 + d);
			glVertex2f(30 + nx + c, 25 + ny + 1 + d);
			glVertex2f(35 + nx + c, 25 + ny + 1 + d);
			glVertex2f(40 + nx + c, 25 + ny + 1 + d);
			glVertex2f(45 - nx + c, 25 + ny + 1 + d);
			glVertex2f(50 - nx - 1 + c, 25 + ny + 1 + d);
			glVertex2f(50 - nx + c, 30 + 4 + d);
			glVertex2f(48 - nx - 2 + c, 35 + 5 + d);
			glVertex2f(45 - nx - 3 + c, 40 + 5 + d);
			glVertex2f(40 - nx - 3 + c, 45 + 4 + d);

			glEnd();
			nx = 6; ny = 9;
			glBegin(GL_LINE_STRIP);
			glVertex2f(20 + nx - 2 + c, 47 + 1 + d);
			glVertex2f(18 + nx + c, 44 + 3 + d);
			glVertex2f(16 + nx + c, 40 + 4 + d);
			glVertex2f(14 + nx + c, 35 + 4 + d);
			glVertex2f(13 + nx + c, 28 + ny + d);
			glVertex2f(15 + nx + c, 25 + ny + 2 + d);
			glVertex2f(20 + nx + c, 25 + ny + 2 + d);
			glVertex2f(25 + nx + c, 25 + ny + 2 + d);
			glVertex2f(30 + nx + c, 25 + ny + 2 + d);
			glVertex2f(35 + nx + c, 25 + ny + 2 + d);

			glVertex2f(48 - nx + 1 + c, 35 + 2 + d);
			glVertex2f(45 - nx + c, 40 + 2 + d);
			glVertex2f(40 - nx + 1 + c, 45 + 2 + d);

			glEnd();
			//4th
			nx = 8; ny = 12;
			glBegin(GL_LINE_STRIP);
			glVertex2f(20 + nx - 2 + c, 47 + 2 + d);
			glVertex2f(18 + nx + c, 44 + 4 + d);
			glVertex2f(16 + nx + 1 + c, 40 + 6 + d);
			glVertex2f(14 + nx + 1 + c, 35 + 8 + d);
			glVertex2f(13 + nx + 1 + c, 28 + ny + d);
			glVertex2f(15 + nx + 1 + c, 25 + ny + 2 + d);
			glVertex2f(20 + nx + c, 25 + ny + 2 + d);
			glVertex2f(25 + nx + c, 25 + ny + 2 + d);
			glVertex2f(30 + nx + 1 + c, 25 + ny + 2 + d);

			glVertex2f(48 - nx + c, 35 + 5 + d);
			glVertex2f(45 - nx + c, 40 + 4 + d);
			glVertex2f(40 - nx + 1 + c, 45 + 2 + d);

			glEnd();

			//5
			nx = 10; ny = 15;
			glBegin(GL_LINE_STRIP);
			glVertex2f(20 + nx - 2 + c, 47 + 2.7 + d);

			glVertex2f(13 + nx + 1 + c, 28 + ny - .5 + d);
			glVertex2f(15 + nx + 1 + c, 25 + ny + 2 + d);

			glVertex2f(25 + nx + c, 25 + ny + 2 + d);
			glVertex2f(30 + nx - 2 + c, 25 + ny + 2 + d);


			glEnd();
			nx = 12; ny = 18;
			glBegin(GL_LINE_STRIP);

			glVertex2f(13 + nx + 1 + c, 28 + ny - 1 + d);
			glVertex2f(15 + nx + 1 + c, 25 + ny + 2 + d);
			glVertex2f(20 + nx + c, 25 + ny + 2 + d);
			glVertex2f(25 + nx - 2 + c, 25 + ny + 2 + d);

			glEnd();
			nx = 14; ny = 21;
			glBegin(GL_LINE_STRIP);

			glVertex2f(13 + nx + 1 + c, 28 + ny - 1 + d);
			glVertex2f(15 + nx + 1 + c, 25 + ny + 2 + d);
			glVertex2f(20 + nx - 2 + c, 25 + ny + 2 + d);

			glEnd();
		}
	}
	if (display_order == 3)
	{
		char str[] = "PRESS d/D TO CONTINUE";
		glColor3f(1, 1, 1);
		glRasterPos2f(30, 5);
		for (i = 0; i<strlen(str); i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
		}
		
	}


	if (display_order == 6)
	{
		char str[] = "PRESS c/C TO CONTINUE";
		glColor3f(1, 1, 1);
		glRasterPos2f(30, 5);
		for (i = 0; i<strlen(str); i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
		}
	}
	if (display_order == 7)
	{
		char str[] = "PRESS f/F TO CONTINUE";
		glRasterPos2f(30, 5);
		for (i = 0; i<strlen(str); i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
		}
		
	}

	if (display_order == 8)
	{
		char str[] = "PRESS t/T TO CONTINUE";
		glColor3f(1, 1, 1);
		glRasterPos2f(30, 5);
		for (i = 0; i<strlen(str); i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
		}	
	}
}

void back_ground4()
{

	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 0.0, 100.0);
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);//sky
	glColor3f(1, .271, 0);
	glVertex2f(0.0, 0.0);
	glColor3f(1, 1, 0);
	glVertex2f(0.0, 100.0);
	glVertex2f(100.0, 100.0);
	glVertex2f(100.0, 0.0);
	glEnd();

	float a1 = 0.0, b1 = 0.5, c1 = 1.0, a2 = 0.0, b2 = 0.6, c2 = 0.0, a3 = 0.0, b3 = 0.6, c3 = 0, a4 = 0.0, b4 = 0.6, c4 = 0;
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(a1, b1, c1);
	glVertex2f(0.0, 0.0);
	glColor3f(a2, b2, c2);
	glVertex2f(0.0, 52.0);
	glColor3f(a3, b3, c3);
	glVertex2f(100.0, 48.0);
	glColor3f(a4, b4, c4);
	glVertex2f(100.0, 0.0);
	glEnd();
	if (display_order == 4)
	{
		glBegin(GL_POLYGON);
		glColor3f(0, 1, 0);
		glVertex2f(0.0, 0.0);
		glColor3f(0, 0, 0);
		glVertex2f(0.0, 52.0);
		glColor3f(0, 1, 0);
		glVertex2f(100.0, 48.0);
		glColor3f(0, 0, 0);
		glVertex2f(100.0, 0.0);
		glEnd();
	}


	//half tree branch
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.8, 0.1);
	glVertex2f(28, 65);
	glVertex2f(30, 64.5);
	glVertex2f(32.5, 64);
	glVertex2f(34, 64.5);
	glVertex2f(35.5, 65);
	glVertex2f(39, 66);
	glVertex2f(37, 67.5);
	glVertex2f(37, 68);
	glVertex2f(39, 69.5);

	glVertex2f(39, 71.5);
	glVertex2f(39.3, 72);
	glVertex2f(39.6, 73);
	glVertex2f(39.9, 73.5);
	glVertex2f(40, 74);
	glVertex2f(40.5, 75);
	glVertex2f(40, 76.5);
	glVertex2f(43, 77.5);
	glVertex2f(42.5, 79);
	glVertex2f(43, 80);
	glVertex2f(41.5, 82.5);
	glVertex2f(40.5, 82);
	glVertex2f(40, 81.5);
	glVertex2f(41, 82.5);
	glVertex2f(41.5, 83.5);
	glVertex2f(42, 85);
	glVertex2f(39, 87);
	glVertex2f(37, 88.5);
	glVertex2f(33, 86);
	glVertex2f(32, 84);
	glVertex2f(33, 90);
	glVertex2f(28, 65);

	glEnd();

	//root
	glBegin(GL_POLYGON);
	glColor3f(0.65, 0.50, 0.39);
	glVertex2f(26.5, 49);
	glVertex2f(28, 48.5);
	glVertex2f(30, 50);
	glVertex2f(28.5, 52.5);
	glVertex2f(28, 55);
	glVertex2f(28.5, 67.5);
	glVertex2f(28, 55);
	glVertex2f(28, 60);
	glVertex2f(28.5, 67.5);
	glVertex2f(28, 65);
	glVertex2f(28.5, 67.5);
	glVertex2f(29.5, 71);
	glVertex2f(30, 72.5);
	glVertex2f(25, 80);
	glVertex2f(25, 50);
	glVertex2f(26.5, 49);
	glEnd();


	//tree 1 branch
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.9, 0.2);
	glVertex2f(16.5, 70);
	glVertex2f(12.5, 70);
	glVertex2f(11, 71.5);
	glVertex2f(10, 72.5);
	glColor3f(0.0, 0.85, 0.1);
	glVertex2f(10, 75);
	glVertex2f(7.5, 75);
	glVertex2f(6, 76);
	glVertex2f(5, 78.5);
	glVertex2f(5, 80);
	glVertex2f(7.5, 82.5);
	glVertex2f(5, 85);
	glVertex2f(2.7, 87);
	glVertex2f(2.75, 90);
	glColor3f(0.1, 0.6, 0.1);
	glVertex2f(2.8, 91);
	glVertex2f(3.5, 92.5);
	glVertex2f(5, 95);
	glVertex2f(7, 97.5);
	glVertex2f(10, 98);
	glVertex2f(15, 99);
	glColor3f(0.1, 0.6, 0.2);
	glVertex2f(20, 98.5);
	glVertex2f(25, 98);
	glVertex2f(30, 97.5);
	glVertex2f(30.5, 97);
	glVertex2f(30, 95);
	glVertex2f(32.5, 92.5);
	glVertex2f(34, 87.5);
	glVertex2f(35, 85);
	glVertex2f(34.5, 82.5);

	glVertex2f(34, 79);
	glVertex2f(34.5, 77.5);
	glColor3f(0.1, 0.6, 0.0);
	glVertex2f(33, 76);
	glVertex2f(32.5, 74.5);
	glVertex2f(31, 73);
	glVertex2f(30, 72.5);
	glVertex2f(27.5, 72.5);
	glVertex2f(26, 73);
	glVertex2f(25, 75);
	glEnd();


	if (display_order != 4)
	{
		//grass middle
		int gx = 20, gy = 5;
		glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 0.0);

		glVertex2f(0 + gx, 40 + gy);
		glVertex2f(0 + gx, 47 + gy);
		glVertex2f(2.5 + gx, 46.5 + gy);
		glVertex2f(2 + gx, 48 + gy);
		glVertex2f(0 + gx, 50 + gy);
		glVertex2f(2 + gx, 49.5 + gy);
		glVertex2f(5 + gx, 47 + gy);
		glVertex2f(2.5 + gx, 55 + gy);
		glVertex2f(7 + gx, 50 + gy);
		glVertex2f(8 + gx, 53 + gy);
		glVertex2f(10 + gx, 55 + gy);
		glVertex2f(10.5 + gx, 52 + gy);
		glVertex2f(10 + gx, 50 + gy);
		glVertex2f(17 + gx, 53 + gy);
		glVertex2f(10 + gx, 45 + gy);
		glVertex2f(20 + gx, 47 + gy);
		glVertex2f(18 + gx, 45 + gy);
		glVertex2f(25 + gx, 46 + gy);
		glVertex2f(20 + gx, 42 + gy);
		glVertex2f(30 + gx, 40 + gy);
		glEnd();
	}

	//tree1 root
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex2f(17.5, 56);
	glVertex2f(17.0, 62.5);
	glVertex2f(17.5, 67.5);
	glVertex2f(16.5, 70.0);
	glVertex2f(16.0, 72.5);
	glVertex2f(15.5, 75.0);
	glVertex2f(15.0, 80.0);
	glVertex2f(20.0, 85.0);
	glVertex2f(21.5, 77.0);

	glVertex2f(26.0, 87.0);
	glVertex2f(30.0, 85.0);
	glVertex2f(28.0, 80.0);
	glVertex2f(25.5, 75.0);
	glVertex2f(25, 72.5);
	glVertex2f(25, 70.0);
	glVertex2f(25.0, 55.0);
	glVertex2f(25.5, 52.5);
	glVertex2f(26.0, 50.0);

	glVertex2f(26.5, 48.0);
	glVertex2f(27.0, 47.5);
	glVertex2f(28.5, 46.0);
	glVertex2f(29, 44);
	glVertex2f(30.0, 40.0);
	glVertex2f(20.0, 47.5);
	glVertex2f(17.5, 47.0);
	glVertex2f(18.0, 50.0);
	glVertex2f(17.0, 54.0);

	glVertex2f(20.0, 53.0);
	glVertex2f(17.5, 56.0);

	glEnd();

	
	if (display_order != 4)
	{
		glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 0.0);
		glVertex2f(0, 27.5);
		glVertex2f(0, 32.5);
		glVertex2f(0.3, 33.5);
		glVertex2f(2.5, 35);
		glVertex2f(2.5, 32.5);
		glVertex2f(4.9, 35);
		glVertex2f(7.5, 37.5);
		glVertex2f(7, 35);
		glVertex2f(10, 35);
		glVertex2f(7, 32.5);
		glVertex2f(15, 35);
		glVertex2f(12.5, 32);
		glVertex2f(15, 30);
		glVertex2f(12.5, 27);
		glVertex2f(20, 26);
		glEnd();
	}

	//grass 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);

	glVertex2f(0, 40);
	glVertex2f(0, 47);
	glVertex2f(2.5, 46.5);
	glVertex2f(2, 48);
	glVertex2f(0, 50);
	glVertex2f(2, 49.5);
	glVertex2f(5, 47);
	glVertex2f(2.5, 55);
	glVertex2f(7, 50);
	glVertex2f(8, 53);
	glVertex2f(10, 55);
	glVertex2f(10.5, 52);
	glVertex2f(10, 50);
	glVertex2f(17, 53);
	glVertex2f(10, 45);
	glVertex2f(20, 47);
	glVertex2f(18, 45);
	glVertex2f(25, 46);
	glVertex2f(20, 42);
	glVertex2f(30, 40);
	glEnd();

	//ryt grass
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 7.5);
	glVertex2f(5, 13);
	glVertex2f(0, 15);
	glVertex2f(5, 13);
	glVertex2f(0, 20);
	glVertex2f(5, 15);
	glVertex2f(10, 18);
	glVertex2f(15, 25);
	glVertex2f(13, 20);
	glVertex2f(17, 21);
	glVertex2f(20, 23);
	glVertex2f(17, 18);
	glVertex2f(15, 15);
	glVertex2f(20, 17);
	glVertex2f(25, 18);
	glVertex2f(20, 15);
	glVertex2f(15, 10);
	glVertex2f(30, 10);
	glVertex2f(35, 7.5);
	glEnd();
	//grass 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 50);
	glVertex2f(0, 65);
	glVertex2f(10, 67);
	glVertex2f(7, 65);
	glVertex2f(17, 65);
	glVertex2f(15, 64);
	glVertex2f(12, 63);
	glVertex2f(15, 60);
	glVertex2f(17, 57);
	glVertex2f(15, 56);
	glVertex2f(20, 53);
	glVertex2f(17, 54);
	glVertex2f(18, 50);
	glVertex2f(16, 47);
	glVertex2f(10, 45);
	glVertex2f(17, 53);
	glVertex2f(10, 50);
	glVertex2f(10.5, 52);
	glVertex2f(10, 55);
	glVertex2f(8, 53);
	glVertex2f(7, 50);
	glVertex2f(2.5, 55);
	glVertex2f(5, 47);
	glVertex2f(2, 49.5);
	glVertex2f(0, 50);
	glEnd();
	//branch
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0.0);
	glVertex2f(72.5, 70);
	glVertex2f(71.5, 69);
	glVertex2f(70, 68);
	glVertex2f(67.5, 68.5);
	glVertex2f(66, 70);
	glVertex2f(66.5, 71);
	glVertex2f(66, 72.7);
	glVertex2f(65, 74);
	glVertex2f(63, 75);
	glVertex2f(62.5, 75.5);
	glVertex2f(62, 77.5);
	glVertex2f(61, 79);
	glVertex2f(61, 80);
	glVertex2f(61.5, 81);
	glVertex2f(62, 82.5);
	glVertex2f(62.3, 84.5);
	glVertex2f(62.4, 85);
	glVertex2f(62.5, 87.5);
	glVertex2f(63.5, 90);
	glVertex2f(65, 91);
	glVertex2f(66.5, 92);
	glVertex2f(67.5, 92.5);
	glVertex2f(69, 92);
	glVertex2f(70.5, 90.5);
	glEnd();
	//tree2half
	glBegin(GL_POLYGON);
	glColor3f(0.65, 0.50, 0.39);
	glVertex2f(75, 48);
	glVertex2f(75.5, 58);
	glVertex2f(75.6, 60);
	glVertex2f(75.5, 61);
	glVertex2f(75, 65);
	glVertex2f(74.5, 66);
	glVertex2f(73, 69);
	glVertex2f(72.5, 70);
	glVertex2f(72.5, 77.5);
	glVertex2f(75, 80);
	glVertex2f(81, 67.5);
	glVertex2f(78, 48);
	glEnd();
	//tree branch 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.6, 0.3);
	glVertex2f(75, 75);
	glVertex2f(72.5, 72.5);
	glVertex2f(71, 74.0);
	glVertex2f(70.5, 74.5);
	glVertex2f(70, 75);
	glVertex2f(69.5, 76);
	glVertex2f(69.5, 77);

	glVertex2f(70, 80);
	glVertex2f(68, 81);
	glVertex2f(67.5, 82);
	glVertex2f(66, 83.5);
	glVertex2f(66.3, 84.5);
	glVertex2f(66.5, 85);
	glVertex2f(67, 87);
	glVertex2f(67.5, 87.5);
	glVertex2f(70, 90);
	glVertex2f(71, 91.5);
	glVertex2f(71.5, 92.5);
	glVertex2f(72.5, 94);
	glVertex2f(75, 95);
	glVertex2f(77.5, 96);
	glVertex2f(80, 96.5);
	glVertex2f(82.5, 96);
	glVertex2f(83, 95);
	glVertex2f(83.5, 94.5);
	glVertex2f(84.5, 92.5);

	glVertex2f(84.7, 90);
	glVertex2f(86, 91);
	glVertex2f(87.0, 91.5);
	glVertex2f(87.5, 90);
	glVertex2f(87.5, 89);
	glVertex2f(89, 89);
	glVertex2f(89.5, 87.5);
	glVertex2f(89, 85);
	glVertex2f(88, 82.5);
	glVertex2f(87, 82);
	glVertex2f(86, 81);
	glVertex2f(85, 80);
	glVertex2f(85.5, 75.5);
	glVertex2f(84, 75);
	glVertex2f(82.5, 75);
	glEnd();
	//tree 2 
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex2f(77.5, 48);
	glVertex2f(77, 60);
	glVertex2f(77.5, 62.5);
	glVertex2f(77, 65);
	glVertex2f(77, 67.5);
	glVertex2f(76, 70);
	glVertex2f(75, 75);
	glVertex2f(75, 78);
	glVertex2f(80, 75);
	glVertex2f(82.5, 78);
	glVertex2f(82, 75);
	glVertex2f(82, 72.5);
	glVertex2f(81.5, 70);
	glVertex2f(81, 65);
	glVertex2f(81.5, 62);
	glVertex2f(84, 48);
	glEnd();

	//branch
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0.0);
	glVertex2f(90.5, 30);
	glVertex2f(89.5, 29);
	glVertex2f(88, 28);
	glVertex2f(85.5, 28.5);
	glVertex2f(84, 30);
	glVertex2f(84.5, 31);
	glVertex2f(84, 32.7);
	glVertex2f(83, 34);
	glVertex2f(81, 35);
	glVertex2f(80.5, 35.5);
	glVertex2f(80, 37.5);
	glVertex2f(79, 39);
	glVertex2f(79, 40);
	glVertex2f(79.5, 41);
	glVertex2f(80, 42.5);
	glVertex2f(80.3, 44.5);
	glVertex2f(80.4, 45);
	glVertex2f(80.5, 47.5);
	glVertex2f(81.5, 50);
	glVertex2f(83, 51);
	glVertex2f(84.5, 52);
	glVertex2f(85.5, 52.5);
	glVertex2f(87, 52);
	glVertex2f(88.5, 50.5);
	glEnd();
	//tree3half
	glBegin(GL_POLYGON);
	glColor3f(0.65, 0.50, 0.39);
	glVertex2f(90, 7.5);
	glVertex2f(90.5, 8);
	glVertex2f(90.6, 20);
	glVertex2f(90.5, 61);
	glVertex2f(90, 25);
	glVertex2f(89.5, 26);
	glVertex2f(88, 29);
	glVertex2f(87.5, 30);
	glVertex2f(87.5, 37.5);
	glVertex2f(90, 40);
	glVertex2f(96, 27.5);
	glVertex2f(93, 7.5);
	glEnd();
	//tree branch 3
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.6, 0.3);
	glVertex2f(90, 35);
	glVertex2f(87.5, 32.5);
	glVertex2f(86, 34.0);
	glVertex2f(85.5, 34.5);
	glVertex2f(85, 35);
	glVertex2f(84.5, 36);
	glVertex2f(84.5, 37);

	glVertex2f(85, 40);
	glVertex2f(83, 41);
	glVertex2f(82.5, 42);
	glVertex2f(81, 43.5);
	glVertex2f(81.3, 44.5);
	glVertex2f(81.5, 45);
	glVertex2f(82, 47);
	glVertex2f(82.5, 47.5);
	glVertex2f(85, 50);
	glVertex2f(86, 51.5);
	glVertex2f(86.5, 52.5);
	glVertex2f(87.5, 54);
	glVertex2f(90, 55);
	glVertex2f(92.5, 56);
	glVertex2f(95, 56.5);
	glVertex2f(97.5, 56);
	glVertex2f(98, 55);
	glVertex2f(98.5, 54.5);
	glVertex2f(99.5, 52.5);

	glVertex2f(99.7, 50);
	glVertex2f(101, 51);
	glVertex2f(102.0, 51.5);
	glVertex2f(102.5, 50);
	glVertex2f(102.5, 49);
	glVertex2f(104, 49);
	glVertex2f(104.5, 47.5);
	glVertex2f(104, 45);
	glVertex2f(103, 42.5);
	glVertex2f(102, 42);
	glVertex2f(101, 41);
	glVertex2f(100, 40);
	glVertex2f(100.5, 35.5);
	glVertex2f(99, 35);
	glVertex2f(97.5, 35);
	glEnd();

	//tree3
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex2f(92, 7.5);
	glVertex2f(92, 20);
	glVertex2f(92.5, 22.5);
	glVertex2f(92, 25);
	glVertex2f(92, 27.5);
	glVertex2f(91, 30);
	glVertex2f(90, 35);
	glVertex2f(90.5, 40);
	glVertex2f(95, 35);
	glVertex2f(97.5, 40);
	glVertex2f(97, 35);
	glVertex2f(97, 32.5);
	glVertex2f(96.5, 30);
	glVertex2f(96, 25);
	glVertex2f(96.5, 22);
	glVertex2f(99, 7.5);
	glEnd();

	//sing gras
	glBegin(GL_LINES);
	glLineWidth(15.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(75, 10);
	glVertex2f(72, 20);
	glVertex2f(70, 17.5);
	glVertex2f(75, 10);
	glVertex2f(72.5, 25);
	glVertex2f(71, 22.5);
	glVertex2f(75, 10);
	glVertex2f(73, 25);
	glVertex2f(77, 22.5);
	glVertex2f(75, 10);
	glVertex2f(76, 19);
	glVertex2f(75.5, 15);
	glVertex2f(75, 10);
	glVertex2f(77, 15);
	glVertex2f(78, 12);
	glEnd();
	a -= 0.05;
	if (a>-100)
	{
		//bird 2 middle left most
		int b2x = -15, b2y = 3;

		//front of bird2
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y);
		glVertex2f(84 + b2x + a, 90.6 + b2y);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y);
		glVertex2f(84.8 + b2x + a, 90 + b2y);
		glVertex2f(85 + b2x + a, 89.4 + b2y);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y);
		glVertex2f(86 + b2x + a, 88.75 + b2y);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(86.4 + b2x + a, 89 + b2y);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y);
		glVertex2f(87 + b2x + a, 89.25 + b2y);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y);
		glVertex2f(88 + b2x + a, 89.5 + b2y);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y);
		glVertex2f(89 + b2x + a, 89.8 + b2y);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y);
		glVertex2f(89.8 + b2x + a, 90 + b2y);
		glVertex2f(90 + b2x + a, 90.05 + b2y);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y);
		glVertex2f(91 + b2x + a, 90.3 + b2y);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y);
		glVertex2f(91 + b2x + a, 89.8 + b2y);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y);
		glVertex2f(90.6 + b2x + a, 89 + b2y);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 87 + b2y);
		glEnd();

		// bird2 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y);
		glVertex2f(91 + b2x + a, 88.1 + b2y);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y);
		glVertex2f(91.4 + b2x + a, 88 + b2y);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y);
		glVertex2f(92 + b2x + a, 87.84 + b2y);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y);
		glVertex2f(93 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y);
		glVertex2f(93.4 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93 + b2x + a, 87 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y);
		glVertex2f(94 + b2x + a, 87.6 + b2y);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y);
		glVertex2f(95 + b2x + a, 87.35 + b2y);
		glVertex2f(94.8 + b2x + a, 87 + b2y);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y);
		glVertex2f(94 + b2x + a, 86.5 + b2y);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y);
		glVertex2f(94 + b2x + a, 86.3 + b2y);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y);
		glVertex2f(94 + b2x + a, 86 + b2y);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y);
		glVertex2f(93 + b2x + a, 85.5 + b2y);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y);
		glVertex2f(92 + b2x + a, 85.32 + b2y);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y);
		glVertex2f(91 + b2x + a, 85.2 + b2y);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y);
		glVertex2f(90 + b2x + a, 85.4 + b2y);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glEnd();

		//after back feather to front bird2
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y);
		glVertex2f(88 + b2x + a, 85.325 + b2y);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85.25 + b2y);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y);
		glVertex2f(86 + b2x + a, 85.375 + b2y);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y);
		glVertex2f(85 + b2x + a, 85.7 + b2y);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y);
		glVertex2f(84.4 + b2x + a, 86 + b2y);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y);
		glVertex2f(84 + b2x + a, 86.4 + b2y);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y);
		glVertex2f(83.6 + b2x + a, 87 + b2y);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y);
		glVertex2f(83 + b2x + a, 89 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glEnd();

		// bird2 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85 + b2y);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y);
		glVertex2f(87.8 + b2x + a, 85 + b2y);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y);
		glEnd();
		//bird2 eye
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y);
		glVertex2f(84 + b2x + a, 89.6 + b2y);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y);
		glEnd();
		//mouth bird2
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y);
		glVertex2f(82 + b2x + a, 89.3 + b2y);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y);
		glVertex2f(82.4 + b2x + a, 89 + b2y);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y);
		glVertex2f(82 + b2x + a, 89.1 + b2y);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y);
		glEnd();
		//bird3 middle bird
		b2x = -8, b2y = -5;

		//front of bird3
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y);
		glVertex2f(84 + b2x + a, 90.6 + b2y);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y);
		glVertex2f(84.8 + b2x + a, 90 + b2y);
		glVertex2f(85 + b2x + a, 89.4 + b2y);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y);
		glVertex2f(86 + b2x + a, 88.75 + b2y);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(86.4 + b2x + a, 89 + b2y);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y);
		glVertex2f(87 + b2x + a, 89.25 + b2y);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y);
		glVertex2f(88 + b2x + a, 89.5 + b2y);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y);
		glVertex2f(89 + b2x + a, 89.8 + b2y);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y);
		glVertex2f(89.8 + b2x + a, 90 + b2y);
		glVertex2f(90 + b2x + a, 90.05 + b2y);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y);
		glVertex2f(91 + b2x + a, 90.3 + b2y);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y);
		glVertex2f(91 + b2x + a, 89.8 + b2y);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y);
		glVertex2f(90.6 + b2x + a, 89 + b2y);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 87 + b2y);
		glEnd();

		// bird3 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y);
		glVertex2f(91 + b2x + a, 88.1 + b2y);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y);
		glVertex2f(91.4 + b2x + a, 88 + b2y);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y);
		glVertex2f(92 + b2x + a, 87.84 + b2y);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y);
		glVertex2f(93 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y);
		glVertex2f(93.4 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93 + b2x + a, 87 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y);
		glVertex2f(94 + b2x + a, 87.6 + b2y);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y);
		glVertex2f(95 + b2x + a, 87.35 + b2y);
		glVertex2f(94.8 + b2x + a, 87 + b2y);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y);
		glVertex2f(94 + b2x + a, 86.5 + b2y);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y);
		glVertex2f(94 + b2x + a, 86.3 + b2y);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y);
		glVertex2f(94 + b2x + a, 86 + b2y);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y);
		glVertex2f(93 + b2x + a, 85.5 + b2y);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y);
		glVertex2f(92 + b2x + a, 85.32 + b2y);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y);
		glVertex2f(91 + b2x + a, 85.2 + b2y);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y);
		glVertex2f(90 + b2x + a, 85.4 + b2y);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glEnd();

		//after back feather to front bird3
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y);
		glVertex2f(88 + b2x + a, 85.325 + b2y);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85.25 + b2y);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y);
		glVertex2f(86 + b2x + a, 85.375 + b2y);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y);
		glVertex2f(85 + b2x + a, 85.7 + b2y);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y);
		glVertex2f(84.4 + b2x + a, 86 + b2y);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y);
		glVertex2f(84 + b2x + a, 86.4 + b2y);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y);
		glVertex2f(83.6 + b2x + a, 87 + b2y);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y);
		glVertex2f(83 + b2x + a, 89 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glEnd();

		// bird3 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85 + b2y);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y);
		glVertex2f(87.8 + b2x + a, 85 + b2y);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y);
		glEnd();
		//bird3 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y);
		glVertex2f(84 + b2x + a, 89.6 + b2y);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y);
		glEnd();
		//mouth bird3
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y);
		glVertex2f(82 + b2x + a, 89.3 + b2y);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y);
		glVertex2f(82.4 + b2x + a, 89 + b2y);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y);
		glVertex2f(82 + b2x + a, 89.1 + b2y);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y);
		glEnd();
		//bird4 bottem left most
		b2x = -18, b2y = -8;

		//front of bird4
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y);
		glVertex2f(84 + b2x + a, 90.6 + b2y);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y);
		glVertex2f(84.8 + b2x + a, 90 + b2y);
		glVertex2f(85 + b2x + a, 89.4 + b2y);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y);
		glVertex2f(86 + b2x + a, 88.75 + b2y);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(86.4 + b2x + a, 89 + b2y);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y);
		glVertex2f(87 + b2x + a, 89.25 + b2y);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y);
		glVertex2f(88 + b2x + a, 89.5 + b2y);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y);
		glVertex2f(89 + b2x + a, 89.8 + b2y);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y);
		glVertex2f(89.8 + b2x + a, 90 + b2y);
		glVertex2f(90 + b2x + a, 90.05 + b2y);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y);
		glVertex2f(91 + b2x + a, 90.3 + b2y);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y);
		glVertex2f(91 + b2x + a, 89.8 + b2y);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y);
		glVertex2f(90.6 + b2x + a, 89 + b2y);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 87 + b2y);
		glEnd();

		// bird4 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y);
		glVertex2f(91 + b2x + a, 88.1 + b2y);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y);
		glVertex2f(91.4 + b2x + a, 88 + b2y);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y);
		glVertex2f(92 + b2x + a, 87.84 + b2y);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y);
		glVertex2f(93 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y);
		glVertex2f(93.4 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93 + b2x + a, 87 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y);
		glVertex2f(94 + b2x + a, 87.6 + b2y);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y);
		glVertex2f(95 + b2x + a, 87.35 + b2y);
		glVertex2f(94.8 + b2x + a, 87 + b2y);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y);
		glVertex2f(94 + b2x + a, 86.5 + b2y);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y);
		glVertex2f(94 + b2x + a, 86.3 + b2y);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y);
		glVertex2f(94 + b2x + a, 86 + b2y);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y);
		glVertex2f(93 + b2x + a, 85.5 + b2y);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y);
		glVertex2f(92 + b2x + a, 85.32 + b2y);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y);
		glVertex2f(91 + b2x + a, 85.2 + b2y);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y);
		glVertex2f(90 + b2x + a, 85.4 + b2y);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glEnd();

		//after back feather to front bird4
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y);
		glVertex2f(88 + b2x + a, 85.325 + b2y);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85.25 + b2y);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y);
		glVertex2f(86 + b2x + a, 85.375 + b2y);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y);
		glVertex2f(85 + b2x + a, 85.7 + b2y);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y);
		glVertex2f(84.4 + b2x + a, 86 + b2y);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y);
		glVertex2f(84 + b2x + a, 86.4 + b2y);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y);
		glVertex2f(83.6 + b2x + a, 87 + b2y);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y);
		glVertex2f(83 + b2x + a, 89 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glEnd();

		// bird4 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85 + b2y);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y);
		glVertex2f(87.8 + b2x + a, 85 + b2y);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y);
		glEnd();
		//bird4 eye
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y);
		glVertex2f(84 + b2x + a, 89.6 + b2y);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y);
		glEnd();
		//mouth bird4
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y);
		glVertex2f(82 + b2x + a, 89.3 + b2y);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y);
		glVertex2f(82.4 + b2x + a, 89 + b2y);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y);
		glVertex2f(82 + b2x + a, 89.1 + b2y);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y);

		glEnd();

		//bird5 bottem right most
		b2x = 4, b2y = -9;

		//front of bird5
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y);
		glVertex2f(84 + b2x + a, 90.6 + b2y);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y);
		glVertex2f(84.8 + b2x + a, 90 + b2y);
		glVertex2f(85 + b2x + a, 89.4 + b2y);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y);
		glVertex2f(86 + b2x + a, 88.75 + b2y);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(86.4 + b2x + a, 89 + b2y);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y);
		glVertex2f(87 + b2x + a, 89.25 + b2y);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y);
		glVertex2f(88 + b2x + a, 89.5 + b2y);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y);
		glVertex2f(89 + b2x + a, 89.8 + b2y);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y);
		glVertex2f(89.8 + b2x + a, 90 + b2y);
		glVertex2f(90 + b2x + a, 90.05 + b2y);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y);
		glVertex2f(91 + b2x + a, 90.3 + b2y);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y);
		glVertex2f(91 + b2x + a, 89.8 + b2y);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y);
		glVertex2f(90.6 + b2x + a, 89 + b2y);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 87 + b2y);
		glEnd();

		// bird5 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y);
		glVertex2f(90 + b2x + a, 88 + b2y);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y);
		glVertex2f(91 + b2x + a, 88.1 + b2y);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y);
		glVertex2f(91.4 + b2x + a, 88 + b2y);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y);
		glVertex2f(92 + b2x + a, 87.84 + b2y);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y);
		glVertex2f(93 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y);
		glVertex2f(93.4 + b2x + a, 88 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93 + b2x + a, 87 + b2y);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y);
		glVertex2f(94 + b2x + a, 87.6 + b2y);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y);
		glVertex2f(95 + b2x + a, 87.35 + b2y);
		glVertex2f(94.8 + b2x + a, 87 + b2y);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y);
		glVertex2f(94 + b2x + a, 86.5 + b2y);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y);
		glVertex2f(94 + b2x + a, 86.3 + b2y);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y);
		glVertex2f(94 + b2x + a, 86 + b2y);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y);
		glVertex2f(93 + b2x + a, 85.5 + b2y);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y);
		glVertex2f(92 + b2x + a, 85.32 + b2y);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y);
		glVertex2f(91 + b2x + a, 85.2 + b2y);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y);
		glVertex2f(90 + b2x + a, 85.4 + b2y);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glEnd();

		//after back feather to front bird5
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y);
		glVertex2f(89 + b2x + a, 87.2 + b2y);
		glVertex2f(89 + b2x + a, 85.6 + b2y);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y);
		glVertex2f(88 + b2x + a, 85.325 + b2y);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85.25 + b2y);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y);
		glVertex2f(86 + b2x + a, 85.375 + b2y);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y);
		glVertex2f(85 + b2x + a, 85.7 + b2y);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y);
		glVertex2f(84.4 + b2x + a, 86 + b2y);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y);
		glVertex2f(84 + b2x + a, 86.4 + b2y);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y);
		glVertex2f(83.6 + b2x + a, 87 + b2y);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y);
		glVertex2f(83 + b2x + a, 89 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(83 + b2x + a, 90 + b2y);
		glEnd();

		// bird5 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87 + b2x + a, 85 + b2y);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y);
		glVertex2f(87.8 + b2x + a, 85 + b2y);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y);
		glEnd();
		//bird5 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y);
		glVertex2f(84 + b2x + a, 89.6 + b2y);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y);
		glEnd();
		//mouth bird5
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y);
		glVertex2f(82 + b2x + a, 89.3 + b2y);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y);
		glVertex2f(82.8 + b2x + a, 89 + b2y);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y);
		glVertex2f(82.4 + b2x + a, 89 + b2y);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y);
		glVertex2f(82 + b2x + a, 89.1 + b2y);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y);

		glEnd();
//net
		nx4 = 49.5; ny4 = 50;
		glColor3f(1, 1, 1);
		glBegin(GL_LINES);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(20 + nx4 + a, 25 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(25 + nx4 + a, 25 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(30 + nx4 + a, 25 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(35 + nx4 + a, 25 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(40 + nx4 + a, 25 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(45 + nx4 + a, 25 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(50 + nx4 + a, 25 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(50 + nx4 + a, 30 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(48 + nx4 + a, 35 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(45 + nx4 + a, 40 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(40 + nx4 + a, 45 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(30.5 + nx4 + a, 46 + ny4);

		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(15 + nx4 + a, 25 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(13 + nx4 + a, 28 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(14 + nx4 + a, 35 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(16 + nx4 + a, 40 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(18 + nx4 + a, 44 + ny4);
		glVertex2f(30 + nx4 + a, 50 + ny4);
		glVertex2f(20 + nx4 + a, 47 + ny4);

		glEnd();
		// horizontal line bottem
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx4 + a, 47 + ny4);
		glVertex2f(18 + nx4 + a, 44 + ny4);
		glVertex2f(16 + nx4 + a, 40 + ny4);
		glVertex2f(14 + nx4 + a, 35 + ny4);
		glVertex2f(13 + nx4 + a, 28 + ny4);
		glVertex2f(15 + nx4 + a, 25 + ny4);
		glVertex2f(20 + nx4 + a, 25 + ny4);
		glVertex2f(25 + nx4 + a, 25 + ny4);
		glVertex2f(30 + nx4 + a, 25 + ny4);
		glVertex2f(35 + nx4 + a, 25 + ny4);
		glVertex2f(40 + nx4 + a, 25 + ny4);
		glVertex2f(45 + nx4 + a, 25 + ny4);
		glVertex2f(50 + nx4 + a, 25 + ny4);
		glVertex2f(50 + nx4 + a, 30 + ny4);
		glVertex2f(48 + nx4 + a, 35 + ny4);
		glVertex2f(45 + nx4 + a, 40 + ny4);
		glVertex2f(40 + nx4 + a, 45 + ny4);
		glEnd();
		int nx = 2, ny = 3, nxr = 2;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx + nx4 + a, 47 + .5 + ny4);
		glVertex2f(18 + nx + nx4 + a, 44 + 1 + ny4);
		glVertex2f(16 + nx + nx4 + a, 40 + 1 + ny4);
		glVertex2f(14 + nx + nx4 + a, 35 + 2 + ny4);
		glVertex2f(13 + nx + nx4 + a, 28 + ny + ny4);
		glVertex2f(15 + nx + nx4 + a, 25 + ny + ny4);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + ny4);
		glVertex2f(25 + nx + nx4 + a, 25 + ny + ny4);
		glVertex2f(30 + nx + nx4 + a, 25 + ny + ny4);
		glVertex2f(35 + nx + nx4 + a, 25 + ny + ny4);
		glVertex2f(40 - nx + nx4 + a, 25 + ny + ny4);
		glVertex2f(45 - nx + nx4 + a, 25 + ny + ny4);
		glVertex2f(50 - nx + nx4 + a, 25 + ny + ny4);
		glVertex2f(50 - nx + nx4 + a, 30 + ny + ny4);
		glVertex2f(48 - nx + nx4 + a, 35 + 1 + ny4);
		glVertex2f(45 - nx + nx4 + a, 40 + 1 + ny4);
		glVertex2f(40 - nx + nx4 + a, 45 + 1 + ny4);

		glEnd();

		//3rd horizontal
		nx = 4; ny = 6;;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 1 + nx4 + a, 47 + 1 + ny4);
		glVertex2f(18 + nx + nx4 + a, 44 + 2 + ny4);
		glVertex2f(16 + nx + nx4 + a, 40 + 3 + ny4);
		glVertex2f(14 + nx + nx4 + a, 35 + 3 + ny4);
		glVertex2f(13 + nx + nx4 + a, 28 + ny + ny4);
		glVertex2f(15 + nx + nx4 + a, 25 + ny + 1 + ny4);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + 1 + ny4);
		glVertex2f(25 + nx + nx4 + a, 25 + ny + 1 + ny4);
		glVertex2f(30 + nx + nx4 + a, 25 + ny + 1 + ny4);
		glVertex2f(35 + nx + nx4 + a, 25 + ny + 1 + ny4);
		glVertex2f(40 + nx + nx4 + a, 25 + ny + 1 + ny4);
		glVertex2f(45 - nx + nx4 + a, 25 + ny + 1 + ny4);
		glVertex2f(50 - nx - 1 + nx4 + a, 25 + ny + 1 + ny4);
		glVertex2f(50 - nx + nx4 + a, 30 + 4 + ny4);
		glVertex2f(48 - nx - 2 + nx4 + a, 35 + 5 + ny4);
		glVertex2f(45 - nx - 3 + nx4 + a, 40 + 5 + ny4);
		glVertex2f(40 - nx - 3 + nx4 + a, 45 + 4 + ny4);

		glEnd();
		nx = 6; ny = 9;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 2 + nx4 + a, 47 + 1 + ny4);
		glVertex2f(18 + nx + nx4 + a, 44 + 3 + ny4);
		glVertex2f(16 + nx + nx4 + a, 40 + 4 + ny4);
		glVertex2f(14 + nx + nx4 + a, 35 + 4 + ny4);
		glVertex2f(13 + nx + nx4 + a, 28 + ny + ny4);
		glVertex2f(15 + nx + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(25 + nx + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(30 + nx + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(35 + nx + nx4 + a, 25 + ny + 2 + ny4);

		glVertex2f(48 - nx + 1 + nx4 + a, 35 + 2 + ny4);
		glVertex2f(45 - nx + nx4 + a, 40 + 2 + ny4);
		glVertex2f(40 - nx + 1 + nx4 + a, 45 + 2 + ny4);

		glEnd();
		//4th
		nx = 8; ny = 12;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 2 + nx4 + a, 47 + 2 + ny4);
		glVertex2f(18 + nx + nx4 + a, 44 + 4 + ny4);
		glVertex2f(16 + nx + 1 + nx4 + a, 40 + 6 + ny4);
		glVertex2f(14 + nx + 1 + nx4 + a, 35 + 8 + ny4);
		glVertex2f(13 + nx + 1 + nx4 + a, 28 + ny + ny4);
		glVertex2f(15 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(25 + nx + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(30 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4);

		glVertex2f(48 - nx + nx4 + a, 35 + 5 + ny4);
		glVertex2f(45 - nx + nx4 + a, 40 + 4 + ny4);
		glVertex2f(40 - nx + 1 + nx4 + a, 45 + 2 + ny4);

		glEnd();

		//5
		nx = 10; ny = 15;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 2 + nx4 + a, 47 + 2.7 + ny4);

		glVertex2f(13 + nx + 1 + nx4 + a, 28 + ny - .5 + ny4);
		glVertex2f(15 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4);

		glVertex2f(25 + nx + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(30 + nx - 2 + nx4 + a, 25 + ny + 2 + ny4);
		glEnd();
		nx = 12; ny = 18;
		glBegin(GL_LINE_STRIP);

		glVertex2f(13 + nx + 1 + nx4 + a, 28 + ny - 1 + ny4);
		glVertex2f(15 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(25 + nx - 2 + nx4 + a, 25 + ny + 2 + ny4);
		glEnd();
		nx = 14; ny = 21;
		glBegin(GL_LINE_STRIP);

		glVertex2f(13 + nx + 1 + nx4 + a, 28 + ny - 1 + ny4);
		glVertex2f(15 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4);
		glVertex2f(20 + nx - 2 + nx4 + a, 25 + ny + 2 + ny4);

		glEnd();
	}
	char str[] = "PRESS n/N TO CONTINUE";
	glColor3f(1, 1, 1);
	glRasterPos2f(30, 5);
	for (i = 0; i<strlen(str); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
	}
}

void back_ground5()
{
	int i, s_i = 0;
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 0.0, 100.0);
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);//sky
	
	glVertex2f(0.0, 0.0);
	glColor3f(0.7, 0.9, 1);
	glVertex2f(0.0, 100.0);
	glColor3f(0.7, 0.9, 1);
	glVertex2f(100.0, 100.0);
	glColor3f(0.7, 0.9, 1);
	glVertex2f(100.0, 0.0);
	glEnd();
	if (display_order == 5)
	{
		glShadeModel(GL_SMOOTH);
		glColor3f(0.0, 1.0,0.0);
		glBegin(GL_POLYGON);//sky
		
		glVertex2f(0.0, 0.0);
		
		glVertex2f(0.0, 100.0);
		
		glVertex2f(100.0, 100.0);
		
		glVertex2f(100.0, 0.0);
		glEnd();
		while (1)
		{
			if (s_i>200)
				break;

			int x, y, z;
			x = rand() % 100;
			y = rand() % 100;
			z = rand() % 100;
			glColor3f(1, 1, 0);
			glBegin(GL_POINTS);
			glPointSize(7);

			glVertex2f(x, y);
			glPointSize(8);
			glVertex2f(x, z);

			glEnd();
			s_i++;
		}

	}

	float a1 = 0.0, b1 = 0.0, c1 = 1.0, a2 = 0.0, b2 = 0.6, c2 = 0.0, a3 = 0.0, b3 = 0.6, c3 = 0, a4 = 0.0, b4 = 0.6, c4 = 0;
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(a1, b1, c1);
	glVertex2f(0.0, 0.0);
	glColor3f(a2, b2, c2);
	glVertex2f(0.0, 52.0);
	glColor3f(a3, b3, c3);
	glVertex2f(100.0, 48.0);
	glColor3f(a4, b4, c4);
	glVertex2f(100.0, 0.0);
	glEnd();
	//half tree branch
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.8, 0.1);
	glVertex2f(28, 65);
	glVertex2f(30, 64.5);
	glVertex2f(32.5, 64);
	glVertex2f(34, 64.5);
	glVertex2f(35.5, 65);
	glVertex2f(39, 66);
	glVertex2f(37, 67.5);
	glVertex2f(37, 68);
	glVertex2f(39, 69.5);

	glVertex2f(39, 71.5);
	glVertex2f(39.3, 72);
	glVertex2f(39.6, 73);
	glVertex2f(39.9, 73.5);
	glVertex2f(40, 74);
	glVertex2f(40.5, 75);
	glVertex2f(40, 76.5);
	glVertex2f(43, 77.5);
	glVertex2f(42.5, 79);
	glVertex2f(43, 80);
	glVertex2f(41.5, 82.5);
	glVertex2f(40.5, 82);
	glVertex2f(40, 81.5);
	glVertex2f(41, 82.5);
	glVertex2f(41.5, 83.5);
	glVertex2f(42, 85);
	glVertex2f(39, 87);
	glVertex2f(37, 88.5);
	glVertex2f(33, 86);
	glVertex2f(32, 84);
	glVertex2f(33, 90);
	glVertex2f(28, 65);
	glEnd();
	//root
	glBegin(GL_POLYGON);
	glColor3f(0.65, 0.50, 0.39);
	glVertex2f(26.5, 49);
	glVertex2f(28, 48.5);
	glVertex2f(30, 50);
	glVertex2f(28.5, 52.5);
	glVertex2f(28, 55);
	glVertex2f(28.5, 67.5);
	glVertex2f(28, 55);
	glVertex2f(28, 60);
	glVertex2f(28.5, 67.5);
	glVertex2f(28, 65);
	glVertex2f(28.5, 67.5);
	glVertex2f(29.5, 71);
	glVertex2f(30, 72.5);
	glVertex2f(25, 80);
	glVertex2f(25, 50);
	glVertex2f(26.5, 49);
	glEnd();
	//tree 1 branch
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.9, 0.2);
	glVertex2f(16.5, 70);
	glVertex2f(12.5, 70);
	glVertex2f(11, 71.5);
	glVertex2f(10, 72.5);
	glColor3f(0.0, 0.85, 0.1);
	glVertex2f(10, 75);
	glVertex2f(7.5, 75);
	glVertex2f(6, 76);
	glVertex2f(5, 78.5);
	glVertex2f(5, 80);
	glVertex2f(7.5, 82.5);
	glVertex2f(5, 85);
	glVertex2f(2.7, 87);
	glVertex2f(2.75, 90);
	glColor3f(0.1, 0.6, 0.1);
	glVertex2f(2.8, 91);
	glVertex2f(3.5, 92.5);
	glVertex2f(5, 95);
	glVertex2f(7, 97.5);
	glVertex2f(10, 98);
	glVertex2f(15, 99);
	glColor3f(0.1, 0.6, 0.2);
	glVertex2f(20, 98.5);
	glVertex2f(25, 98);
	glVertex2f(30, 97.5);
	glVertex2f(30.5, 97);
	glVertex2f(30, 95);
	glVertex2f(32.5, 92.5);
	glVertex2f(34, 87.5);
	glVertex2f(35, 85);
	glVertex2f(34.5, 82.5);

	glVertex2f(34, 79);
	glVertex2f(34.5, 77.5);
	glColor3f(0.1, 0.6, 0.0);
	glVertex2f(33, 76);
	glVertex2f(32.5, 74.5);
	glVertex2f(31, 73);
	glVertex2f(30, 72.5);
	glVertex2f(27.5, 72.5);
	glVertex2f(26, 73);
	glVertex2f(25, 75);
	glEnd();

	//grass middle
	int gx = 20, gy = 5;
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);

	glVertex2f(0 + gx, 40 + gy);
	glVertex2f(0 + gx, 47 + gy);
	glVertex2f(2.5 + gx, 46.5 + gy);
	glVertex2f(2 + gx, 48 + gy);
	glVertex2f(0 + gx, 50 + gy);
	glVertex2f(2 + gx, 49.5 + gy);
	glVertex2f(5 + gx, 47 + gy);
	glVertex2f(2.5 + gx, 55 + gy);
	glVertex2f(7 + gx, 50 + gy);
	glVertex2f(8 + gx, 53 + gy);
	glVertex2f(10 + gx, 55 + gy);
	glVertex2f(10.5 + gx, 52 + gy);
	glVertex2f(10 + gx, 50 + gy);
	glVertex2f(17 + gx, 53 + gy);
	glVertex2f(10 + gx, 45 + gy);
	glVertex2f(20 + gx, 47 + gy);
	glVertex2f(18 + gx, 45 + gy);
	glVertex2f(25 + gx, 46 + gy);
	glVertex2f(20 + gx, 42 + gy);
	glVertex2f(30 + gx, 40 + gy);
	glEnd();

	//tree1 root
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex2f(17.5, 56);
	glVertex2f(17.0, 62.5);
	glVertex2f(17.5, 67.5);
	glVertex2f(16.5, 70.0);
	glVertex2f(16.0, 72.5);
	glVertex2f(15.5, 75.0);
	glVertex2f(15.0, 80.0);
	glVertex2f(20.0, 85.0);
	glVertex2f(21.5, 77.0);

	glVertex2f(26.0, 87.0);
	glVertex2f(30.0, 85.0);
	glVertex2f(28.0, 80.0);
	glVertex2f(25.5, 75.0);
	glVertex2f(25, 72.5);
	glVertex2f(25, 70.0);
	glVertex2f(25.0, 55.0);
	glVertex2f(25.5, 52.5);
	glVertex2f(26.0, 50.0);

	glVertex2f(26.5, 48.0);
	glVertex2f(27.0, 47.5);
	glVertex2f(28.5, 46.0);
	glVertex2f(29, 44);
	glVertex2f(30.0, 40.0);
	glVertex2f(20.0, 47.5);
	glVertex2f(17.5, 47.0);
	glVertex2f(18.0, 50.0);
	glVertex2f(17.0, 54.0);

	glVertex2f(20.0, 53.0);
	glVertex2f(17.5, 56.0);
	glEnd();
	//gras 1 dwn
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 27.5);
	glVertex2f(0, 32.5);
	glVertex2f(0.3, 33.5);
	glVertex2f(2.5, 35);
	glVertex2f(2.5, 32.5);
	glVertex2f(4.9, 35);
	glVertex2f(7.5, 37.5);
	glVertex2f(7, 35);
	glVertex2f(10, 35);
	glVertex2f(7, 32.5);
	glVertex2f(15, 35);
	glVertex2f(12.5, 32);
	glVertex2f(15, 30);
	glVertex2f(12.5, 27);
	glVertex2f(20, 26);
	glEnd();
	//grass 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);

	glVertex2f(0, 40);
	glVertex2f(0, 47);
	glVertex2f(2.5, 46.5);
	glVertex2f(2, 48);
	glVertex2f(0, 50);
	glVertex2f(2, 49.5);
	glVertex2f(5, 47);
	glVertex2f(2.5, 55);
	glVertex2f(7, 50);
	glVertex2f(8, 53);
	glVertex2f(10, 55);
	glVertex2f(10.5, 52);
	glVertex2f(10, 50);
	glVertex2f(17, 53);
	glVertex2f(10, 45);
	glVertex2f(20, 47);
	glVertex2f(18, 45);
	glVertex2f(25, 46);
	glVertex2f(20, 42);
	glVertex2f(30, 40);
	glEnd();

	//ryt grass
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 7.5);
	glVertex2f(5, 13);
	glVertex2f(0, 15);
	glVertex2f(5, 13);
	glVertex2f(0, 20);
	glVertex2f(5, 15);
	glVertex2f(10, 18);
	glVertex2f(15, 25);
	glVertex2f(13, 20);
	glVertex2f(17, 21);
	glVertex2f(20, 23);
	glVertex2f(17, 18);
	glVertex2f(15, 15);
	glVertex2f(20, 17);
	glVertex2f(25, 18);
	glVertex2f(20, 15);
	glVertex2f(15, 10);
	glVertex2f(30, 10);
	glVertex2f(35, 7.5);
	glEnd();
	//grass 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0, 50);
	glVertex2f(0, 65);
	glVertex2f(10, 67);
	glVertex2f(7, 65);
	glVertex2f(17, 65);
	glVertex2f(15, 64);
	glVertex2f(12, 63);
	glVertex2f(15, 60);
	glVertex2f(17, 57);
	glVertex2f(15, 56);
	glVertex2f(20, 53);
	glVertex2f(17, 54);
	glVertex2f(18, 50);
	glVertex2f(16, 47);
	glVertex2f(10, 45);
	glVertex2f(17, 53);
	glVertex2f(10, 50);
	glVertex2f(10.5, 52);
	glVertex2f(10, 55);
	glVertex2f(8, 53);
	glVertex2f(7, 50);
	glVertex2f(2.5, 55);
	glVertex2f(5, 47);
	glVertex2f(2, 49.5);
	glVertex2f(0, 50);
	glEnd();
	//branch
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0.0);
	glVertex2f(72.5, 70);
	glVertex2f(71.5, 69);
	glVertex2f(70, 68);
	glVertex2f(67.5, 68.5);
	glVertex2f(66, 70);
	glVertex2f(66.5, 71);
	glVertex2f(66, 72.7);
	glVertex2f(65, 74);
	glVertex2f(63, 75);
	glVertex2f(62.5, 75.5);
	glVertex2f(62, 77.5);
	glVertex2f(61, 79);
	glVertex2f(61, 80);
	glVertex2f(61.5, 81);
	glVertex2f(62, 82.5);
	glVertex2f(62.3, 84.5);
	glVertex2f(62.4, 85);
	glVertex2f(62.5, 87.5);
	glVertex2f(63.5, 90);
	glVertex2f(65, 91);
	glVertex2f(66.5, 92);
	glVertex2f(67.5, 92.5);
	glVertex2f(69, 92);
	glVertex2f(70.5, 90.5);
	glEnd();
	//tree2half
	glBegin(GL_POLYGON);
	glColor3f(0.65, 0.50, 0.39);
	glVertex2f(75, 48);
	glVertex2f(75.5, 58);
	glVertex2f(75.6, 60);
	glVertex2f(75.5, 61);
	glVertex2f(75, 65);
	glVertex2f(74.5, 66);
	glVertex2f(73, 69);
	glVertex2f(72.5, 70);
	glVertex2f(72.5, 77.5);
	glVertex2f(75, 80);
	glVertex2f(81, 67.5);
	glVertex2f(78, 48);
	glEnd();
	//tree branch 2
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.6, 0.3);
	glVertex2f(75, 75);
	glVertex2f(72.5, 72.5);
	glVertex2f(71, 74.0);
	glVertex2f(70.5, 74.5);
	glVertex2f(70, 75);
	glVertex2f(69.5, 76);
	glVertex2f(69.5, 77);

	glVertex2f(70, 80);
	glVertex2f(68, 81);
	glVertex2f(67.5, 82);
	glVertex2f(66, 83.5);
	glVertex2f(66.3, 84.5);
	glVertex2f(66.5, 85);
	glVertex2f(67, 87);
	glVertex2f(67.5, 87.5);
	glVertex2f(70, 90);
	glVertex2f(71, 91.5);
	glVertex2f(71.5, 92.5);
	glVertex2f(72.5, 94);
	glVertex2f(75, 95);
	glVertex2f(77.5, 96);
	glVertex2f(80, 96.5);
	glVertex2f(82.5, 96);
	glVertex2f(83, 95);
	glVertex2f(83.5, 94.5);
	glVertex2f(84.5, 92.5);

	glVertex2f(84.7, 90);
	glVertex2f(86, 91);
	glVertex2f(87.0, 91.5);
	glVertex2f(87.5, 90);
	glVertex2f(87.5, 89);
	glVertex2f(89, 89);
	glVertex2f(89.5, 87.5);
	glVertex2f(89, 85);
	glVertex2f(88, 82.5);
	glVertex2f(87, 82);
	glVertex2f(86, 81);
	glVertex2f(85, 80);
	glVertex2f(85.5, 75.5);
	glVertex2f(84, 75);
	glVertex2f(82.5, 75);
	glEnd();

	//tree 2 
	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.6, 0.0);
	glVertex2f(77.5, 48);
	glVertex2f(77, 60);
	glVertex2f(77.5, 62.5);
	glVertex2f(77, 65);
	glVertex2f(77, 67.5);
	glVertex2f(76, 70);
	glVertex2f(75, 75);
	glVertex2f(75, 78);
	glVertex2f(80, 75);
	glVertex2f(82.5, 78);
	glVertex2f(82, 75);
	glVertex2f(82, 72.5);
	glVertex2f(81.5, 70);
	glVertex2f(81, 65);
	glVertex2f(81.5, 62);
	glVertex2f(84, 48);
	glEnd();
	//sing gras
	glBegin(GL_LINES);
	glLineWidth(15.0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(75, 10);
	glVertex2f(72, 20);
	glVertex2f(70, 17.5);
	glVertex2f(75, 10);
	glVertex2f(72.5, 25);
	glVertex2f(71, 22.5);
	glVertex2f(75, 10);
	glVertex2f(73, 25);
	glVertex2f(77, 22.5);
	glVertex2f(75, 10);
	glVertex2f(76, 19);
	glVertex2f(75.5, 15);
	glVertex2f(75, 10);
	glVertex2f(77, 15);
	glVertex2f(78, 12);
	glEnd();


	a -= 0.05;
	if (a>-100)
	{
		//bird 2 middle left most
		int b2x = -15, b2y = 3;

		//front of bird2
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y + a);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y + a);
		glVertex2f(84.8 + b2x + a, 90 + b2y + a);
		glVertex2f(85 + b2x + a, 89.4 + b2y + a);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y + a);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y + a);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y + a);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y + a);
		glVertex2f(86 + b2x + a, 88.75 + b2y + a);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(86.4 + b2x + a, 89 + b2y + a);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y + a);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(87 + b2x + a, 89.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y + a);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y + a);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y + a);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y + a);
		glVertex2f(88 + b2x + a, 89.5 + b2y + a);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y + a);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y + a);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y + a);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y + a);
		glVertex2f(89 + b2x + a, 89.8 + b2y + a);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y + a);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y + a);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y + a);
		glVertex2f(89.8 + b2x + a, 90 + b2y + a);
		glVertex2f(90 + b2x + a, 90.05 + b2y + a);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y + a);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y + a);
		glVertex2f(91 + b2x + a, 90.3 + b2y + a);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y + a);
		glVertex2f(91 + b2x + a, 89.8 + b2y + a);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y + a);
		glVertex2f(90.6 + b2x + a, 89 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 87 + b2y + a);
		glEnd();

		// bird2 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y + a);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y + a);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y + a);
		glVertex2f(91 + b2x + a, 88.1 + b2y + a);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y + a);
		glVertex2f(91.4 + b2x + a, 88 + b2y + a);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y + a);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y + a);
		glVertex2f(92 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y + a);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y + a);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y + a);
		glVertex2f(93 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93 + b2x + a, 87 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y + a);
		glVertex2f(94 + b2x + a, 87.6 + b2y + a);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y + a);
		glVertex2f(95 + b2x + a, 87.35 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87 + b2y + a);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y + a);
		glVertex2f(94 + b2x + a, 86.5 + b2y + a);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94 + b2x + a, 86.3 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(94 + b2x + a, 86 + b2y + a);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y + a);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y + a);
		glVertex2f(93 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y + a);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y + a);
		glVertex2f(92 + b2x + a, 85.32 + b2y + a);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y + a);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(91 + b2x + a, 85.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y + a);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y + a);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(90 + b2x + a, 85.4 + b2y + a);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y + a);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y + a);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glEnd();

		//after back feather to front bird2
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y + a);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y + a);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(88 + b2x + a, 85.325 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y + a);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85.25 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y + a);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y + a);
		glVertex2f(86 + b2x + a, 85.375 + b2y + a);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y + a);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y + a);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y + a);
		glVertex2f(85 + b2x + a, 85.7 + b2y + a);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y + a);
		glVertex2f(84.4 + b2x + a, 86 + b2y + a);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(84 + b2x + a, 86.4 + b2y + a);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y + a);
		glVertex2f(83.6 + b2x + a, 87 + b2y + a);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y + a);
		glVertex2f(83 + b2x + a, 89 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glEnd();

		// bird2 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85 + b2y + a);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y + a);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y + a);
		glEnd();
		//bird2 eye
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(84 + b2x + a, 89.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y + a);
		glEnd();

		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(82 + b2x + a, 89.3 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y + a);
		glVertex2f(82 + b2x + a, 89.1 + b2y + a);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y + a);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y + a);

		glEnd();

		//bird3 middle bird
		b2x = -8, b2y = -5;

		//front of bird3
		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y + a);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y + a);
		glVertex2f(84.8 + b2x + a, 90 + b2y + a);
		glVertex2f(85 + b2x + a, 89.4 + b2y + a);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y + a);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y + a);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y + a);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y + a);
		glVertex2f(86 + b2x + a, 88.75 + b2y + a);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(86.4 + b2x + a, 89 + b2y + a);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y + a);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(87 + b2x + a, 89.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y + a);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y + a);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y + a);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y + a);
		glVertex2f(88 + b2x + a, 89.5 + b2y + a);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y + a);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y + a);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y + a);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y + a);
		glVertex2f(89 + b2x + a, 89.8 + b2y + a);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y + a);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y + a);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y + a);
		glVertex2f(89.8 + b2x + a, 90 + b2y + a);
		glVertex2f(90 + b2x + a, 90.05 + b2y + a);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y + a);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y + a);
		glVertex2f(91 + b2x + a, 90.3 + b2y + a);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y + a);
		glVertex2f(91 + b2x + a, 89.8 + b2y + a);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y + a);
		glVertex2f(90.6 + b2x + a, 89 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 87 + b2y + a);
		glEnd();

		// bird3 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y + a);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y + a);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y + a);
		glVertex2f(91 + b2x + a, 88.1 + b2y + a);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y + a);
		glVertex2f(91.4 + b2x + a, 88 + b2y + a);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y + a);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y + a);
		glVertex2f(92 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y + a);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y + a);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y + a);
		glVertex2f(93 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93 + b2x + a, 87 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y + a);
		glVertex2f(94 + b2x + a, 87.6 + b2y + a);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y + a);
		glVertex2f(95 + b2x + a, 87.35 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87 + b2y + a);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y + a);
		glVertex2f(94 + b2x + a, 86.5 + b2y + a);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94 + b2x + a, 86.3 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(94 + b2x + a, 86 + b2y + a);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y + a);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y + a);
		glVertex2f(93 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y + a);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y + a);
		glVertex2f(92 + b2x + a, 85.32 + b2y + a);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y + a);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(91 + b2x + a, 85.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y + a);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y + a);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(90 + b2x + a, 85.4 + b2y + a);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y + a);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y + a);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glEnd();

		//after back feather to front bird3
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y + a);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y + a);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(88 + b2x + a, 85.325 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y + a);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85.25 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y + a);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y + a);
		glVertex2f(86 + b2x + a, 85.375 + b2y + a);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y + a);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y + a);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y + a);
		glVertex2f(85 + b2x + a, 85.7 + b2y + a);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y + a);
		glVertex2f(84.4 + b2x + a, 86 + b2y + a);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(84 + b2x + a, 86.4 + b2y + a);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y + a);
		glVertex2f(83.6 + b2x + a, 87 + b2y + a);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y + a);
		glVertex2f(83 + b2x + a, 89 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glEnd();

		// bird3 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85 + b2y + a);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y + a);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y + a);
		glEnd();
		//bird3 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(84 + b2x + a, 89.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y + a);
		glEnd();

		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(82 + b2x + a, 89.3 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y + a);
		glVertex2f(82 + b2x + a, 89.1 + b2y + a);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y + a);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y + a);

		glEnd();

		//bird4 bottem left most
		b2x = -18, b2y = -8;

		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y + a);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y + a);
		glVertex2f(84.8 + b2x + a, 90 + b2y + a);
		glVertex2f(85 + b2x + a, 89.4 + b2y + a);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y + a);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y + a);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y + a);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y + a);
		glVertex2f(86 + b2x + a, 88.75 + b2y + a);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(86.4 + b2x + a, 89 + b2y + a);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y + a);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(87 + b2x + a, 89.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y + a);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y + a);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y + a);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y + a);
		glVertex2f(88 + b2x + a, 89.5 + b2y + a);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y + a);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y + a);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y + a);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y + a);
		glVertex2f(89 + b2x + a, 89.8 + b2y + a);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y + a);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y + a);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y + a);
		glVertex2f(89.8 + b2x + a, 90 + b2y + a);
		glVertex2f(90 + b2x + a, 90.05 + b2y + a);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y + a);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y + a);
		glVertex2f(91 + b2x + a, 90.3 + b2y + a);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y + a);
		glVertex2f(91 + b2x + a, 89.8 + b2y + a);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y + a);
		glVertex2f(90.6 + b2x + a, 89 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 87 + b2y + a);
		glEnd();

		// bird4 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y + a);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y + a);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y + a);
		glVertex2f(91 + b2x + a, 88.1 + b2y + a);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y + a);
		glVertex2f(91.4 + b2x + a, 88 + b2y + a);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y + a);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y + a);
		glVertex2f(92 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y + a);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y + a);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y + a);
		glVertex2f(93 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93 + b2x + a, 87 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y + a);
		glVertex2f(94 + b2x + a, 87.6 + b2y + a);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y + a);
		glVertex2f(95 + b2x + a, 87.35 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87 + b2y + a);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y + a);
		glVertex2f(94 + b2x + a, 86.5 + b2y + a);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94 + b2x + a, 86.3 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(94 + b2x + a, 86 + b2y + a);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y + a);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y + a);
		glVertex2f(93 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y + a);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y + a);
		glVertex2f(92 + b2x + a, 85.32 + b2y + a);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y + a);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(91 + b2x + a, 85.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y + a);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y + a);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(90 + b2x + a, 85.4 + b2y + a);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y + a);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y + a);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glEnd();

		//after back feather to front bird4
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y + a);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y + a);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(88 + b2x + a, 85.325 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y + a);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85.25 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y + a);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y + a);
		glVertex2f(86 + b2x + a, 85.375 + b2y + a);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y + a);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y + a);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y + a);
		glVertex2f(85 + b2x + a, 85.7 + b2y + a);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y + a);
		glVertex2f(84.4 + b2x + a, 86 + b2y + a);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(84 + b2x + a, 86.4 + b2y + a);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y + a);
		glVertex2f(83.6 + b2x + a, 87 + b2y + a);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y + a);
		glVertex2f(83 + b2x + a, 89 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glEnd();

		// bird4 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85 + b2y + a);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y + a);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y + a);
		glEnd();
		//bird4 eye
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(84 + b2x + a, 89.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y + a);
		glEnd();
		//mouth bird4
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(82 + b2x + a, 89.3 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y + a);
		glVertex2f(82 + b2x + a, 89.1 + b2y + a);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y + a);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y + a);

		glEnd();


		//bird5 bottem right most
		b2x = 4, b2y = -9;

		glBegin(GL_POLYGON);
		glShadeModel(GL_SMOOTH);
		glLineWidth(100.0);
		glColor3f(1, 1, 1);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glVertex2f(83.1 + b2x + a, 90.2 + b2y + a);
		glVertex2f(83.2 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.3 + b2x + a, 90.3 + b2y + a);
		glVertex2f(83.4 + b2x + a, 90.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 90.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.2 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.4 + b2x + a, 90.6 + b2y + a);
		glVertex2f(84.6 + b2x + a, 90.3 + b2y + a);
		glVertex2f(84.8 + b2x + a, 90 + b2y + a);
		glVertex2f(85 + b2x + a, 89.4 + b2y + a);
		glVertex2f(85.2 + b2x + a, 89.2 + b2y + a);
		glVertex2f(85.4 + b2x + a, 88.9 + b2y + a);
		glVertex2f(85.6 + b2x + a, 88.8 + b2y + a);
		glVertex2f(85.8 + b2x + a, 88.77 + b2y + a);
		glVertex2f(86 + b2x + a, 88.75 + b2y + a);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(86.4 + b2x + a, 89 + b2y + a);
		glVertex2f(86.6 + b2x + a, 89.15 + b2y + a);
		glVertex2f(86.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(87 + b2x + a, 89.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 89.3 + b2y + a);
		glVertex2f(87.4 + b2x + a, 89.35 + b2y + a);
		glVertex2f(87.6 + b2x + a, 89.4 + b2y + a);
		glVertex2f(87.8 + b2x + a, 89.45 + b2y + a);
		glVertex2f(88 + b2x + a, 89.5 + b2y + a);
		glVertex2f(88.2 + b2x + a, 89.55 + b2y + a);
		glVertex2f(88.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(88.6 + b2x + a, 89.65 + b2y + a);
		glVertex2f(88.8 + b2x + a, 89.7 + b2y + a);
		glVertex2f(89.8 + b2x + a, 89.75 + b2y + a);
		glVertex2f(89 + b2x + a, 89.8 + b2y + a);
		glVertex2f(89.2 + b2x + a, 89.85 + b2y + a);
		glVertex2f(89.4 + b2x + a, 89.9 + b2y + a);
		glVertex2f(89.6 + b2x + a, 89.95 + b2y + a);
		glVertex2f(89.8 + b2x + a, 90 + b2y + a);
		glVertex2f(90 + b2x + a, 90.05 + b2y + a);
		glVertex2f(90.2 + b2x + a, 90.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 90.15 + b2y + a);
		glVertex2f(90.6 + b2x + a, 90.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 90.25 + b2y + a);
		glVertex2f(91 + b2x + a, 90.3 + b2y + a);
		glVertex2f(91.2 + b2x + a, 90.35 + b2y + a);
		glVertex2f(91 + b2x + a, 89.8 + b2y + a);
		glVertex2f(90.8 + b2x + a, 89.6 + b2y + a);
		glVertex2f(90.6 + b2x + a, 89 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.4 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 87 + b2y + a);
		glEnd();

		// bird5 back side feather
		glBegin(GL_POLYGON);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89.2 + b2x + a, 87.3 + b2y + a);
		glVertex2f(89.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(89.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(89.8 + b2x + a, 87.8 + b2y + a);
		glVertex2f(90 + b2x + a, 88 + b2y + a);
		glVertex2f(90.2 + b2x + a, 88.1 + b2y + a);
		glVertex2f(90.4 + b2x + a, 88.2 + b2y + a);
		glVertex2f(90.6 + b2x + a, 88.25 + b2y + a);
		glVertex2f(90.8 + b2x + a, 88.2 + b2y + a);
		glVertex2f(91 + b2x + a, 88.1 + b2y + a);
		glVertex2f(91.2 + b2x + a, 88.05 + b2y + a);
		glVertex2f(91.4 + b2x + a, 88 + b2y + a);
		glVertex2f(91.6 + b2x + a, 87.9 + b2y + a);
		glVertex2f(91.8 + b2x + a, 87.87 + b2y + a);
		glVertex2f(92 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.2 + b2x + a, 87.83 + b2y + a);
		glVertex2f(92.4 + b2x + a, 87.84 + b2y + a);
		glVertex2f(92.6 + b2x + a, 87.88 + b2y + a);
		glVertex2f(92.8 + b2x + a, 87.9 + b2y + a);
		glVertex2f(93 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 88.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 88 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93 + b2x + a, 87 + b2y + a);
		glVertex2f(93.2 + b2x + a, 87.2 + b2y + a);
		glVertex2f(93.4 + b2x + a, 87.4 + b2y + a);
		glVertex2f(93.6 + b2x + a, 87.6 + b2y + a);
		glVertex2f(93.8 + b2x + a, 87.7 + b2y + a);
		glVertex2f(94 + b2x + a, 87.6 + b2y + a);
		glVertex2f(94.2 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.4 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.6 + b2x + a, 87.5 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87.4 + b2y + a);
		glVertex2f(95 + b2x + a, 87.35 + b2y + a);
		glVertex2f(94.8 + b2x + a, 87 + b2y + a);
		glVertex2f(94.6 + b2x + a, 86.8 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.7 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.6 + b2y + a);
		glVertex2f(94 + b2x + a, 86.5 + b2y + a);
		glVertex2f(93.8 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94 + b2x + a, 86.3 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.4 + b2y + a);
		glVertex2f(94.4 + b2x + a, 86.5 + b2y + a);
		glVertex2f(94.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(94 + b2x + a, 86 + b2y + a);
		glVertex2f(93.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(93.6 + b2x + a, 85.7 + b2y + a);
		glVertex2f(93.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(93.2 + b2x + a, 85.55 + b2y + a);
		glVertex2f(93 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(92.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(92.4 + b2x + a, 85.4 + b2y + a);
		glVertex2f(92.2 + b2x + a, 85.35 + b2y + a);
		glVertex2f(92 + b2x + a, 85.32 + b2y + a);
		glVertex2f(91.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(91.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(91.4 + b2x + a, 85.225 + b2y + a);
		glVertex2f(91.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(91 + b2x + a, 85.2 + b2y + a);
		glVertex2f(90.8 + b2x + a, 85.225 + b2y + a);
		glVertex2f(90.6 + b2x + a, 85.250 + b2y + a);
		glVertex2f(90.4 + b2x + a, 85.275 + b2y + a);
		glVertex2f(90.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(90 + b2x + a, 85.4 + b2y + a);
		glVertex2f(89.8 + b2x + a, 85.45 + b2y + a);
		glVertex2f(89.6 + b2x + a, 85.5 + b2y + a);
		glVertex2f(89.4 + b2x + a, 85.6 + b2y + a);
		glVertex2f(89.2 + b2x + a, 85.8 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glEnd();

		//after back feather to front bird5
		glBegin(GL_POLYGON);
		glVertex2f(86.2 + b2x + a, 88.8 + b2y + a);
		glVertex2f(89 + b2x + a, 87.2 + b2y + a);
		glVertex2f(89 + b2x + a, 85.6 + b2y + a);
		glVertex2f(88.8 + b2x + a, 85.5 + b2y + a);
		glVertex2f(88.6 + b2x + a, 85.4 + b2y + a);
		glVertex2f(88.4 + b2x + a, 85.375 + b2y + a);
		glVertex2f(88.2 + b2x + a, 85.3 + b2y + a);
		glVertex2f(88 + b2x + a, 85.325 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.3 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.275 + b2y + a);
		glVertex2f(87.4 + b2x + a, 85.25 + b2y + a);
		glVertex2f(87.2 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85.25 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.275 + b2y + a);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.4 + b2x + a, 85.325 + b2y + a);
		glVertex2f(86.2 + b2x + a, 85.350 + b2y + a);
		glVertex2f(86 + b2x + a, 85.375 + b2y + a);
		glVertex2f(85.8 + b2x + a, 85.4 + b2y + a);
		glVertex2f(85.6 + b2x + a, 85.45 + b2y + a);
		glVertex2f(85.4 + b2x + a, 85.5 + b2y + a);
		glVertex2f(85.2 + b2x + a, 85.6 + b2y + a);
		glVertex2f(85 + b2x + a, 85.7 + b2y + a);
		glVertex2f(84.8 + b2x + a, 85.8 + b2y + a);
		glVertex2f(84.6 + b2x + a, 85.9 + b2y + a);
		glVertex2f(84.4 + b2x + a, 86 + b2y + a);
		glVertex2f(84.2 + b2x + a, 86.2 + b2y + a);
		glVertex2f(84 + b2x + a, 86.4 + b2y + a);
		glVertex2f(83.8 + b2x + a, 86.7 + b2y + a);
		glVertex2f(83.6 + b2x + a, 87 + b2y + a);
		glVertex2f(83.4 + b2x + a, 88.6 + b2y + a);
		glVertex2f(83.2 + b2x + a, 88.9 + b2y + a);
		glVertex2f(83 + b2x + a, 89 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(83 + b2x + a, 90 + b2y + a);
		glEnd();

		// bird5 leg
		glBegin(GL_POLYGON);
		glColor3f(0.8, 0.6, 0.0);
		glVertex2f(86.6 + b2x + a, 85.3 + b2y + a);
		glVertex2f(86.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87 + b2x + a, 85 + b2y + a);
		glVertex2f(87.2 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.4 + b2x + a, 84.8 + b2y + a);
		glVertex2f(87.6 + b2x + a, 84.9 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85 + b2y + a);
		glVertex2f(87.8 + b2x + a, 85.2 + b2y + a);
		glVertex2f(87.6 + b2x + a, 85.3 + b2y + a);
		glEnd();
		//bird5 eye
		glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		glVertex2f(83.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(84 + b2x + a, 89.6 + b2y + a);
		glVertex2f(83.8 + b2x + a, 89.4 + b2y + a);
		glVertex2f(83.6 + b2x + a, 89.6 + b2y + a);
		glEnd();
		//mouth bird5
		glShadeModel(GL_SMOOTH);
		glBegin(GL_POLYGON);
		glLineWidth(100.0);
		glColor3f(0, 0, 0);
		glVertex2f(81.8 + b2x + a, 89.2 + b2y + a);
		glVertex2f(82 + b2x + a, 89.3 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.4 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89.6 + b2y + a);
		glVertex2f(82.6 + b2x + a, 89.7 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89.8 + b2y + a);
		glVertex2f(82.9 + b2x + a, 89.9 + b2y + a);
		glVertex2f(82.8 + b2x + a, 89 + b2y + a);
		glVertex2f(82.6 + b2x + a, 88.9 + b2y + a);
		glVertex2f(82.4 + b2x + a, 89 + b2y + a);
		glVertex2f(82.2 + b2x + a, 89.05 + b2y + a);
		glVertex2f(82 + b2x + a, 89.1 + b2y + a);
		glVertex2f(81.8 + b2x + a, 89.15 + b2y + a);
		glVertex2f(81.6 + b2x + a, 89.2 + b2y + a);

		glEnd();

		//net
		nx4 = 49.5; ny4 = 50;
		glColor3f(1, 1, 1);
		glBegin(GL_LINES);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(20 + nx4 + a, 25 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(25 + nx4 + a, 25 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(30 + nx4 + a, 25 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(35 + nx4 + a, 25 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(40 + nx4 + a, 25 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(45 + nx4 + a, 25 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(50 + nx4 + a, 25 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(50 + nx4 + a, 30 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(48 + nx4 + a, 35 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(45 + nx4 + a, 40 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(40 + nx4 + a, 45 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(30.5 + nx4 + a, 46 + ny4 + a);

		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(15 + nx4 + a, 25 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(13 + nx4 + a, 28 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(14 + nx4 + a, 35 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(16 + nx4 + a, 40 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(18 + nx4 + a, 44 + ny4 + a);
		glVertex2f(30 + nx4 + a, 50 + ny4 + a);
		glVertex2f(20 + nx4 + a, 47 + ny4 + a);

		glEnd();
		// horizontal line bottem
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx4 + a, 47 + ny4 + a);
		glVertex2f(18 + nx4 + a, 44 + ny4 + a);
		glVertex2f(16 + nx4 + a, 40 + ny4 + a);
		glVertex2f(14 + nx4 + a, 35 + ny4 + a);
		glVertex2f(13 + nx4 + a, 28 + ny4 + a);
		glVertex2f(15 + nx4 + a, 25 + ny4 + a);
		glVertex2f(20 + nx4 + a, 25 + ny4 + a);
		glVertex2f(25 + nx4 + a, 25 + ny4 + a);
		glVertex2f(30 + nx4 + a, 25 + ny4 + a);
		glVertex2f(35 + nx4 + a, 25 + ny4 + a);
		glVertex2f(40 + nx4 + a, 25 + ny4 + a);
		glVertex2f(45 + nx4 + a, 25 + ny4 + a);
		glVertex2f(50 + nx4 + a, 25 + ny4 + a);
		glVertex2f(50 + nx4 + a, 30 + ny4 + a);
		glVertex2f(48 + nx4 + a, 35 + ny4 + a);
		glVertex2f(45 + nx4 + a, 40 + ny4 + a);
		glVertex2f(40 + nx4 + a, 45 + ny4 + a);
		glEnd();
		int nx = 2, ny = 3, nxr = 2;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx + nx4 + a, 47 + .5 + ny4 + a);
		glVertex2f(18 + nx + nx4 + a, 44 + 1 + ny4 + a);
		glVertex2f(16 + nx + nx4 + a, 40 + 1 + ny4 + a);
		glVertex2f(14 + nx + nx4 + a, 35 + 2 + ny4 + a);
		glVertex2f(13 + nx + nx4 + a, 28 + ny + ny4 + a);
		glVertex2f(15 + nx + nx4 + a, 25 + ny + ny4 + a);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + ny4 + a);
		glVertex2f(25 + nx + nx4 + a, 25 + ny + ny4 + a);
		glVertex2f(30 + nx + nx4 + a, 25 + ny + ny4 + a);
		glVertex2f(35 + nx + nx4 + a, 25 + ny + ny4 + a);
		glVertex2f(40 - nx + nx4 + a, 25 + ny + ny4 + a);
		glVertex2f(45 - nx + nx4 + a, 25 + ny + ny4 + a);
		glVertex2f(50 - nx + nx4 + a, 25 + ny + ny4 + a);
		glVertex2f(50 - nx + nx4 + a, 30 + ny + ny4 + a);
		glVertex2f(48 - nx + nx4 + a, 35 + 1 + ny4 + a);
		glVertex2f(45 - nx + nx4 + a, 40 + 1 + ny4 + a);
		glVertex2f(40 - nx + nx4 + a, 45 + 1 + ny4 + a);

		glEnd();

		//3rd horizontal
		nx = 4; ny = 6;;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 1 + nx4 + a, 47 + 1 + ny4 + a);
		glVertex2f(18 + nx + nx4 + a, 44 + 2 + ny4 + a);
		glVertex2f(16 + nx + nx4 + a, 40 + 3 + ny4 + a);
		glVertex2f(14 + nx + nx4 + a, 35 + 3 + ny4 + a);
		glVertex2f(13 + nx + nx4 + a, 28 + ny + ny4 + a);
		glVertex2f(15 + nx + nx4 + a, 25 + ny + 1 + ny4 + a);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + 1 + ny4 + a);
		glVertex2f(25 + nx + nx4 + a, 25 + ny + 1 + ny4 + a);
		glVertex2f(30 + nx + nx4 + a, 25 + ny + 1 + ny4 + a);
		glVertex2f(35 + nx + nx4 + a, 25 + ny + 1 + ny4 + a);
		glVertex2f(40 + nx + nx4 + a, 25 + ny + 1 + ny4 + a);
		glVertex2f(45 - nx + nx4 + a, 25 + ny + 1 + ny4 + a);
		glVertex2f(50 - nx - 1 + nx4 + a, 25 + ny + 1 + ny4 + a);
		glVertex2f(50 - nx + nx4 + a, 30 + 4 + ny4 + a);
		glVertex2f(48 - nx - 2 + nx4 + a, 35 + 5 + ny4 + a);
		glVertex2f(45 - nx - 3 + nx4 + a, 40 + 5 + ny4 + a);
		glVertex2f(40 - nx - 3 + nx4 + a, 45 + 4 + ny4 + a);

		glEnd();
		nx = 6; ny = 9;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 2 + nx4 + a, 47 + 1 + ny4 + a);
		glVertex2f(18 + nx + nx4 + a, 44 + 3 + ny4 + a);
		glVertex2f(16 + nx + nx4 + a, 40 + 4 + ny4 + a);
		glVertex2f(14 + nx + nx4 + a, 35 + 4 + ny4 + a);
		glVertex2f(13 + nx + nx4 + a, 28 + ny + ny4 + a);
		glVertex2f(15 + nx + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(25 + nx + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(30 + nx + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(35 + nx + nx4 + a, 25 + ny + 2 + ny4 + a);

		glVertex2f(48 - nx + 1 + nx4 + a, 35 + 2 + ny4 + a);
		glVertex2f(45 - nx + nx4 + a, 40 + 2 + ny4 + a);
		glVertex2f(40 - nx + 1 + nx4 + a, 45 + 2 + ny4 + a);

		glEnd();
		//4th
		nx = 8; ny = 12;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 2 + nx4 + a, 47 + 2 + ny4 + a);
		glVertex2f(18 + nx + nx4 + a, 44 + 4 + ny4 + a);
		glVertex2f(16 + nx + 1 + nx4 + a, 40 + 6 + ny4 + a);
		glVertex2f(14 + nx + 1 + nx4 + a, 35 + 8 + ny4 + a);
		glVertex2f(13 + nx + 1 + nx4 + a, 28 + ny + ny4 + a);
		glVertex2f(15 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(25 + nx + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(30 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4 + a);

		glVertex2f(48 - nx + nx4 + a, 35 + 5 + ny4 + a);
		glVertex2f(45 - nx + nx4 + a, 40 + 4 + ny4 + a);
		glVertex2f(40 - nx + 1 + nx4 + a, 45 + 2 + ny4 + a);

		glEnd();

		//5
		nx = 10; ny = 15;
		glBegin(GL_LINE_STRIP);
		glVertex2f(20 + nx - 2 + nx4 + a, 47 + 2.7 + ny4 + a);

		glVertex2f(13 + nx + 1 + nx4 + a, 28 + ny - .5 + ny4 + a);
		glVertex2f(15 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4 + a);

		glVertex2f(25 + nx + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(30 + nx - 2 + nx4 + a, 25 + ny + 2 + ny4 + a);


		glEnd();
		nx = 12; ny = 18;
		glBegin(GL_LINE_STRIP);

		glVertex2f(13 + nx + 1 + nx4 + a, 28 + ny - 1 + ny4 + a);
		glVertex2f(15 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(20 + nx + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(25 + nx - 2 + nx4 + a, 25 + ny + 2 + ny4 + a);

		glEnd();
		nx = 14; ny = 21;
		glBegin(GL_LINE_STRIP);

		glVertex2f(13 + nx + 1 + nx4 + a, 28 + ny - 1 + ny4 + a);
		glVertex2f(15 + nx + 1 + nx4 + a, 25 + ny + 2 + ny4 + a);
		glVertex2f(20 + nx - 2 + nx4 + a, 25 + ny + 2 + ny4 + a);
		glEnd();
	}

	char str[] = "PRESS m/M TO CONTINUE";
	glColor3f(1, 0, 0);
	glRasterPos2f(30, 5);
	for (i = 0; i<strlen(str); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);

	}
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1440, 900);
	glutInitWindowPosition(0, 0);
	a = glutCreateWindow("Graphics Project ");
	glutDisplayFunc(mydisplay);
	myinit();
	glutMainLoop();
}

