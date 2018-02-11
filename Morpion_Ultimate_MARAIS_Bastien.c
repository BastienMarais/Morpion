#include "graphics.h"
void placementCercleJ2 (int (*cases)[4]);
void placementCercleJ1(int (*cases)[4]);
int conditionsDeVictoire (int victoire, int (*cases)[4]);
int regle(int valmenu);

//variables :
	int cases[4][4]={};
	POINT p1;
	POINT p2;

int conditionsDeVictoire (int victoire, int (*cases)[4])
{

	
	//victoire J1
	
	//horizontale
	if (cases[1][1]==1 && cases[1][2]==1 && cases[1][3]==1)
	{
		victoire=1;
	}	
	else if (cases[2][1]==1 && cases[2][2]==1 && cases[2][3]==1)
	{	
		victoire=1;
	}
	else if (cases[3][1]==1 && cases[3][2]==1 && cases[3][3]==1)
	{
		victoire=1;
	}
	// verticale 
	else if (cases[1][1]==1 && cases[2][1]==1 && cases[3][1]==1)
	{
		victoire=1;
	}
	else if (cases[1][2]==1 && cases[2][2]==1 && cases[3][2]==1)
	{
		victoire=1;
	}
	else if (cases[1][3]==1 && cases[2][3]==1 && cases[3][3]==1)
	{
		victoire=1;
	}
	
	// diagonales 
	
	else if (cases[1][1]==1 && cases[2][2]==1 && cases[3][3]==1)
	{
		victoire=1;
	}
	else if (cases[1][3]==1 && cases[2][2]==1 && cases[3][1]==1)
	{
		victoire=1;
	}
	
	// victoire J2 
	
	//horizontale
	if (cases[1][1]==2 && cases[1][2]==2 && cases[1][3]==2)
	{
		victoire=2;
	}	
	else if (cases[2][1]==2 && cases[2][2]==2 && cases[2][3]==2)
	{	
		victoire=2;
	}
	else if (cases[3][1]==2 && cases[3][2]==2 && cases[3][3]==2)
	{
		victoire=2;
	}
	// verticale 
	else if (cases[1][1]==2 && cases[2][1]==2 && cases[3][1]==2)
	{
		victoire=2;
	}
	else if (cases[1][2]==2 && cases[2][2]==2 && cases[3][2]==2)
	{
		victoire=2;
	}
	else if (cases[1][3]==2 && cases[2][3]==2 && cases[3][3]==2)
	{
		victoire=2;
	}
	
	// diagonales 
	
	else if (cases[1][1]==2 && cases[2][2]==2 && cases[3][3]==2)
	{
		victoire=2;
	}
	else if (cases[1][3]==2 && cases[2][2]==2 && cases[3][1]==2)
	{
		victoire=2;
	}
	
	return victoire;
		
}
int alternanceJoueur ()
{
int cases[4][4]={};
	int victoire=-1;
//  boucle avec : tant que pas de condition de victoire pas respecter alterner les joueurs
while (victoire ==-1)
{
	if (cases[1][1]!=0 && cases[1][2]!=0 && cases[1][3]!=0 && cases[2][1]!=0 && cases[2][2]!=0 && cases[2][3]!=0 && cases[3][1]!=0 && cases[3][2]!=0 && cases[3][3]!=0)
	{
		return 0; // égalité
	}
	
	placementCercleJ1(cases);
	victoire=conditionsDeVictoire(victoire , cases);
	if(victoire==1) 
	{
		return victoire;
	}
	if (cases[1][1]!=0 && cases[1][2]!=0 && cases[1][3]!=0 && cases[2][1]!=0 && cases[2][2]!=0 && cases[2][3]!=0 && cases[3][1]!=0 && cases[3][2]!=0 && cases[3][3]!=0)
	{
		return 0;
	}
	placementCercleJ2(cases);
	victoire=conditionsDeVictoire(victoire , cases);
	
	
}
return victoire;
}
void placementCercleJ2 (int (*cases)[4])
{
// dispo case :  7 8 9
//               4 5 6
//               1 2 3    


p1 = wait_clic();


// Case : 1
if (p1.x>=250 && p1.x<=416 && p1.y>=50 && p1.y<=216 && cases[1][1]==0)
{
	p1.x=333;p1.y=133;
  draw_fill_circle(p1, 50, vert);
  cases[1][1]=2;
  
}
// Case : 2
else if (p1.x>416 && p1.x<584 && p1.y>=50 && p1.y<=216 && cases[1][2]==0)
{
	p1.x=500;p1.y=133;
  draw_fill_circle(p1, 50, vert);
  cases[1][2]=2;
}
// Case : 3
else if (p1.x>=584 && p1.x<=750 && p1.y>=50 && p1.y<=216 && cases[1][3]==0)
{
	p1.x=667;p1.y=133;
  draw_fill_circle(p1, 50, vert);

  cases[1][3]=2;
}
// Case : 4
else if (p1.x>250 && p1.x<=416 && p1.y>216 && p1.y<384 && cases[2][1]==0)
{
	p1.x=333;p1.y=300;
  draw_fill_circle(p1, 50, vert);
  
  cases[2][1]=2;
}
// Case : 5
else if (p1.x>416 && p1.x<584 && p1.y>216 && p1.y<384 && cases[2][2]==0)
{
	p1.x=500;p1.y=300;
  draw_fill_circle(p1, 50, vert);
  
  cases[2][2]=2;
}
// Case : 6
else if (p1.x>=584 && p1.x<=750 && p1.y>216 && p1.y<384 && cases[2][3]==0)
{
	p1.x=667;p1.y=300;
  draw_fill_circle(p1, 50, vert);
 
  cases[2][3]=2;
}
// Case : 7
else if (p1.x>=250 && p1.x<=416 && p1.y>=384 && p1.y<=550 && cases[3][1]==0)
{
	p1.x=333;p1.y=467;
  draw_fill_circle(p1,50, vert);
  
  cases[3][1]=2;
}
// Case : 8
else if (p1.x>416 && p1.x<584 && p1.y>=384 && p1.y<=550 && cases[3][2]==0)
{
	p1.x=500;p1.y=467;
  draw_fill_circle(p1,50, vert);
 
  cases[3][2]=2;
}
// Case : 9
else if  (p1.x>=584 && p1.x<=750 && p1.y>=384 && p1.y<=550 && cases[3][3]==0)
{
		p1.x=667;p1.y=467;
  draw_fill_circle(p1, 50, vert);
  
  cases[3][3]=2;
}
else
{
	placementCercleJ2(cases);
}
}
void placementCercleJ1(int (*cases)[4])
{
// dispo case :  7 8 9
//               4 5 6
//               1 2 3    


p1 = wait_clic();


// Case : 1
if (p1.x>=250 && p1.x<=416 && p1.y>=50 && p1.y<=216 && cases[1][1]==0)
{
	p1.x=333;p1.y=133;
  draw_fill_circle(p1, 50, bleu);
  cases[1][1]=1;
  
}
// Case : 2
else if (p1.x>416 && p1.x<584 && p1.y>=50 && p1.y<=216 && cases[1][2]==0)
{
	p1.x=500;p1.y=133;
  draw_fill_circle(p1, 50, bleu);
 
  cases[1][2]=1;
}
// Case : 3
else if (p1.x>=584 && p1.x<=750 && p1.y>=50 && p1.y<=216 && cases[1][3]==0)
{
	p1.x=667;p1.y=133;
  draw_fill_circle(p1, 50, bleu);
 
  cases[1][3]=1;
}
// Case : 4
else if (p1.x>250 && p1.x<=416 && p1.y>216 && p1.y<384 && cases[2][1]==0)
{
	p1.x=333;p1.y=300;
  draw_fill_circle(p1, 50, bleu);
 
  cases[2][1]=1;
}
// Case : 5
else if (p1.x>416 && p1.x<584 && p1.y>216 && p1.y<384 && cases[2][2]==0)
{
	p1.x=500;p1.y=300;
  draw_fill_circle(p1, 50, bleu);
 
  cases[2][2]=1;
}
// Case : 6
else if (p1.x>=584 && p1.x<=750 && p1.y>216 && p1.y<384 && cases[2][3]==0)
{
	p1.x=667;p1.y=300;
  draw_fill_circle(p1, 50, bleu);

  cases[2][3]=1;
}
// Case : 7
else if (p1.x>=250 && p1.x<=416 && p1.y>=384 && p1.y<=550 && cases[3][1]==0)
{
	p1.x=333;p1.y=467;
  draw_fill_circle(p1,50, bleu);

  cases[3][1]=1;
}
// Case : 8
else if (p1.x>416 && p1.x<584 && p1.y>=384 && p1.y<=550 && cases[3][2]==0)
{
	p1.x=500;p1.y=467;
  draw_fill_circle(p1,50, bleu);

  cases[3][2]=1;
}
// Case : 9
else if  (p1.x>=584 && p1.x<=750 && p1.y>=384 && p1.y<=550 && cases[3][3]==0)
{
		p1.x=667;p1.y=467;
  draw_fill_circle(p1, 50, bleu);
 cases[3][3]=1;
}
else
{
	placementCercleJ1(cases);
}

}
void quadrillage(void)
{
	init_graphics(1000,600);



//cadre :
p1.x =  250; p1.y =50;
p2.x = 750; p2.y = 50;
draw_line(p1,p2,vert);

p1.x =  250; p1.y =50;
p2.x = 250; p2.y = 550;
draw_line(p1,p2,vert);

p1.x =  250; p1.y =550;
p2.x = 750; p2.y = 550;
draw_line(p1,p2,vert);

p1.x =  750; p1.y =550;
p2.x = 750; p2.y = 50;
draw_line(p1,p2,vert);

//morpion horizontales

p1.x =250  ; p1.y = 216;
p2.x =  750 ; p2.y = 216;
draw_line(p1,p2,vert);

p1.x =  250; p1.y =384;
p2.x = 750; p2.y = 384;
draw_line(p1,p2,vert);

//morpion verticale

p1.x =  416; p1.y =50;
p2.x = 416; p2.y = 550;
draw_line(p1,p2,vert);

p1.x =  584; p1.y =50;
p2.x = 584; p2.y = 550;
draw_line(p1,p2,vert);
}

void menu(void)
{
	init_graphics(500,500);
	
// Debut du code
int valmenu=0;

//"JEU"

// J
	p1.x =  155; p1.y =400;
	p2.x = 205; p2.y = 400;	
	draw_line(p1,p2,vert);

	p1.x = 180; p1.y =400;
	p2.x = 180; p2.y = 350;
	draw_line(p1,p2,vert);

	p1.x =155; p1.y =350;
	p2.x =180; p2.y =350;
	draw_line(p1,p2,vert);

// E
	p1.x =225; p1.y =400;
	p2.x =275; p2.y =400;
	draw_line(p1,p2,vert);

	p1.x =225; p1.y =375;
	p2.x =250; p2.y =375;
	draw_line(p1,p2,vert);

	p1.x =225; p1.y =350;
	p2.x =275; p2.y =350;
	draw_line(p1,p2,vert);

	p1.x =225; p1.y =400;
	p2.x =225; p2.y =350;
	draw_line(p1,p2,vert);

// U
	p1.x =295; p1.y =400;
	p2.x = 295; p2.y = 350;
	draw_line(p1,p2,vert);

	p1.x = 345; p1.y =400;
	p2.x = 345; p2.y = 350;
	draw_line(p1,p2,vert);

	p1.x =295; p1.y =350;
	p2.x =345; p2.y =350;
	draw_line(p1,p2,vert);

//"REGLES"

// R
	p1.x =50; p1.y =150;
	p2.x =50; p2.y =100;
	draw_line(p1,p2,vert);
	
	p1.x =100; p1.y =150;
	p2.x =100; p2.y =125;
	draw_line(p1,p2,vert);
	
	p1.x =50; p1.y =150;
	p2.x =100; p2.y =150;
	draw_line(p1,p2,vert);
	
	p1.x =50; p1.y =125;
	p2.x =100;p2.y =125;
	draw_line(p1,p2,vert);
	
	p1.x =50; p1.y =125;
	p2.x =100; p2.y =100;
	draw_line(p1,p2,vert);
	
// E
	p1.x =120; p1.y =150;
	p2.x =170; p2.y =150;
	draw_line(p1,p2,vert);
	
	p1.x =120; p1.y =125;
	p2.x =145; p2.y =125;
	draw_line(p1,p2,vert);
	
	p1.x =120; p1.y =100;
	p2.x =170; p2.y =100;
	draw_line(p1,p2,vert);
	
	p1.x =120; p1.y =150;
	p2.x =120; p2.y =100;
	draw_line(p1,p2,vert);
	
// G
	p1.x =190; p1.y =150;
	p2.x =240; p2.y =150;
	draw_line(p1,p2,vert);
	
	p1.x =215; p1.y =125;
	p2.x =240; p2.y =125;
	draw_line(p1,p2,vert);
	
	p1.x =190; p1.y =100;
	p2.x =240; p2.y =100;
	draw_line(p1,p2,vert);
	
	p1.x =190; p1.y =150;
	p2.x =190; p2.y =100;
	draw_line(p1,p2,vert);
	
	p1.x =240; p1.y =125;
	p2.x =240; p2.y =100;
	draw_line(p1,p2,vert);
	
// L
	p1.x =260; p1.y =150;
	p2.x =260; p2.y =100;
	draw_line(p1,p2,vert);
	
	p1.x =260; p1.y =100;
	p2.x =310; p2.y =100;
	draw_line(p1,p2,vert);

// E
	p1.x =330; p1.y =150;
	p2.x =380; p2.y =150;
	draw_line(p1,p2,vert);
	
	p1.x =330; p1.y =125;
	p2.x =355; p2.y =125;
	draw_line(p1,p2,vert);
	
	p1.x =330; p1.y =100;
	p2.x =380; p2.y =100;
	draw_line(p1,p2,vert);
	
	p1.x =330; p1.y =150;
	p2.x =330; p2.y =100;
	draw_line(p1,p2,vert);
	
// S
	p1.x =400; p1.y =150;
	p2.x =450; p2.y =150;
	draw_line(p1,p2,vert);
	
	p1.x =400; p1.y =125;
	p2.x =450; p2.y =125;
	draw_line(p1,p2,vert);
	
	p1.x =400; p1.y =100;
	p2.x =450; p2.y =100;
	draw_line(p1,p2,vert);
	
	p1.x =400; p1.y =150;
	p2.x =400; p2.y =125;
	draw_line(p1,p2,vert);
	
	p1.x =450; p1.y =125;
	p2.x =450; p2.y =100;
	draw_line(p1,p2,vert);
	
// case autour de JEU
	p1.x=145;p1.y=415;
	p2.x=360;p2.y=335;
	draw_rectangle(p1,p2,vert);
	
	p1.x=145;p1.y=335;
	p2.x=145;p2.y=500;
	draw_line(p1,p2,vert);
	
	p1.x=360;p1.y=335;
	p2.x=360;p2.y=500;
	draw_line(p1,p2,vert);

// case autour de REGLES
	p1.x=35;p1.y=85;
	p2.x=465;p2.y=165;
	draw_rectangle(p1,p2,vert);

	p1.x=0;p1.y=135;
	p2.x=35;p2.y=165;
	draw_line(p1,p2,vert);
	
	p1.x=0;p1.y=55;
	p2.x=35;p2.y=85;
	draw_line(p1,p2,vert);
	
	p1.x=465;p1.y=165;
	p2.x=500;p2.y=135;
	draw_line(p1,p2,vert);
	
	p1.x=465;p1.y=85;
	p2.x=500;p2.y=55;
	draw_line(p1,p2,vert);
	
// MORPION titre
// M
	p1.x =15; p1.y =280;
	p2.x =15; p2.y =230;
	draw_line(p1,p2,vert);
	
	p1.x =65; p1.y =280;
	p2.x =65; p2.y =230;
	draw_line(p1,p2,vert);
	
	p1.x =15; p1.y =280;
	p2.x =40; p2.y =255;
	draw_line(p1,p2,vert);
	
	p1.x =65; p1.y =280;
	p2.x =40; p2.y =255;
	draw_line(p1,p2,vert);
	
// premier O
	p1.x=85;p1.y=280;
	p2.x=135;p2.y=230;
	draw_rectangle(p1,p2,vert);

// R
	p1.x =155; p1.y =280;
	p2.x =155; p2.y =230;
	draw_line(p1,p2,vert);
	
	p1.x =205; p1.y =280;
	p2.x =205; p2.y =255;
	draw_line(p1,p2,vert);
	
	p1.x =155; p1.y =280;
	p2.x =205; p2.y =280;
	draw_line(p1,p2,vert);
	
	p1.x =155; p1.y =255;
	p2.x =205;p2.y =255;
	draw_line(p1,p2,vert);
	
	p1.x =155; p1.y =255;
	p2.x =205; p2.y =230;
	draw_line(p1,p2,vert);
// P
	p1.x =225; p1.y =280;
	p2.x =225; p2.y =230;
	draw_line(p1,p2,vert);
	
	p1.x =275; p1.y =280;
	p2.x =275; p2.y =255;
	draw_line(p1,p2,vert);
	
	p1.x =225; p1.y =280;
	p2.x =275; p2.y =280;
	draw_line(p1,p2,vert);
	
	p1.x =225; p1.y =255;
	p2.x =275;p2.y =255;
	draw_line(p1,p2,vert);
	
// I
	p1.x =320; p1.y =280;
	p2.x =320; p2.y =230;
	draw_line(p1,p2,vert);
	
	p1.x =295; p1.y =280;
	p2.x =345; p2.y =280;
	draw_line(p1,p2,vert);
	
	p1.x =295; p1.y =230;
	p2.x =345; p2.y =230;
	draw_line(p1,p2,vert);

// deuxième O
	p1.x=365;p1.y=280;
	p2.x=415;p2.y=230;
	draw_rectangle(p1,p2,vert);
	
// N
	p1.x =435; p1.y =280;
	p2.x =435; p2.y =230;
	draw_line(p1,p2,vert);
	
	p1.x =485; p1.y =280;
	p2.x =485; p2.y =230;
	draw_line(p1,p2,vert);
	
	p1.x =435; p1.y =280;
	p2.x =485; p2.y =230;
	draw_line(p1,p2,vert);
// decoration lignes
	p1.x =15; p1.y =290;
	p2.x =485; p2.y =290;
	draw_line(p1,p2,vert);
	
	p1.x =15; p1.y =220;
	p2.x =485; p2.y =220;
	draw_line(p1,p2,vert);
	
	p1.x =15; p1.y =220;
	p2.x =0; p2.y =205;
	draw_line(p1,p2,vert);
	
	p1.x =15; p1.y =290;
	p2.x =0; p2.y =275;
	draw_line(p1,p2,vert);
	
	p1.x =485; p1.y =220;
	p2.x =500; p2.y =205;
	draw_line(p1,p2,vert);
	
	p1.x =485; p1.y =290;
	p2.x =500; p2.y =275;
	draw_line(p1,p2,vert);
//QUITTER
p1.x= 452; p1.y=480;
aff_pol("QUITTER",10,p1,vert);
p1.x=450;p1.y=450;
p2.x=500;p2.y= 500;
draw_rectangle(p1,p2,vert);
// intéraction avec le joueur

do 
	{
		
p1=wait_clic();

//pour jouer
if (p1.x>=145 && p1.x<=360 && p1.y>=335 && p1.y<=415)
	{
		valmenu=1;
		quadrillage();
	}
// pour les règles
else if(p1.x>=35 && p1.x<=465 && p1.y>=85 && p1.y<=165)
		{
		valmenu=2;
		regle(valmenu);
		}
// pour quitter
else if (p1.x>=450 && p1.x<=500 && p1.y>=450 && p1.y<=500)
		{
				valmenu=4;
				exit(0);
		}
else
		{
			valmenu=0;
		}
			} while(valmenu==0);
		}

int regle(int valmenu)
{
init_graphics(800,800);

p1.x= 50; p1.y=700;
aff_pol("Rappel des regles :",20,p1,vert);
p1.x= 50; p1.y=650;
aff_pol("Pour jouer au morpion il faut etre a deux.",20,p1,vert);
p1.x= 50; p1.y=600;
aff_pol("Chaque joueur va a tour de role cocher l une des 9 cases de la grille.",20,p1,vert);
p1.x= 50; p1.y=550;
aff_pol("Le gagnant est le premier a aligner trois symboles identiques",20,p1,vert);
p1.x= 50; p1.y=500;
aff_pol("Le Joueur 1 est bleu et le Joueur 2 est vert",20,p1,vert);
p1.x= 50; p1.y=450;
aff_pol("Bonne partie !",20,p1,vert);
p1.x= 300; p1.y=300;
aff_pol("MENU",50,p1,vert);
p1.x=285;p1.y=300;
p2.x=460;p2.y= 230;
draw_rectangle(p1,p2,vert);

int valregle=0;
do 
{
p1 = wait_clic();
if (p1.x>=285 && p1.x<=460 && p1.y>=230 && p1.y<=300)
{
valregle=1;
valmenu=0;

menu();
}
else
{
	valregle=0;
}
}while(valregle==0);
return valmenu;
}
void rejouer_quitter(void)
{
//REJOUER
p1.x= 0; p1.y=400;
aff_pol("REJOUER",20,p1,vert);
p1.x=0;p1.y=375;
p2.x=100;p2.y= 400;
draw_rectangle(p1,p2,vert);
//QUITTER
p1.x= 0; p1.y=300;
aff_pol("QUITTER",20,p1,vert);
p1.x=0;p1.y=270;
p2.x=100;p2.y= 300;
draw_rectangle(p1,p2,vert);

int valjeu=0;

do 
{
p1 = wait_clic();
if (p1.x>=0 && p1.x<=100 && p1.y>=375 && p1.y<=400)
{
valjeu=1;
quadrillage();
switch(alternanceJoueur())
{
	case 1: p1.x=0;p1.y=450; aff_pol("Le Joueur 1 gagne",20,p1,vert); rejouer_quitter();break;
	
	case 2: p1.x=0;p1.y=450; aff_pol("Le Joueur 2 gagne ",20,p1,vert);rejouer_quitter();break;
	
	default :p1.x=0;p1.y=450; aff_pol(" Pas de gagnant",20,p1,vert);rejouer_quitter();break;
}
}
else if (p1.x>=0 && p1.x<=100 && p1.y>=270 && p1.y<=300)
{
	valjeu=2;
	exit(0);
}
else
{
	valjeu=0;
}
}while(valjeu==0);
}


int main()
{

menu();
quadrillage();
switch(alternanceJoueur())
{
	case 1: p1.x=0;p1.y=450; aff_pol("Le Joueur 1 gagne",20,p1,vert); rejouer_quitter();break;
	
	case 2: p1.x=0;p1.y=450; aff_pol("Le Joueur 2 gagne ",20,p1,vert);rejouer_quitter();break;
	
	default :p1.x=0;p1.y=450; aff_pol(" Pas de gagnant",20,p1,vert);rejouer_quitter();break;
}
}
