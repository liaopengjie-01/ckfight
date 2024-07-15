#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int a=1000,b=10000,c,c1=10,c2=15,c3=20,c4=100,cd2=0,cd3=0,cd4=0,cd6=0,cd7=0;
int my=0,gm,w=1,Q,zz,ll=1,zhqs=1;
//商品（下） 
int sp1,sp2,sp3,sp4,sp5; 
bool p=0,kz=0;
//成就
bool ax=false,fuck=false;
int buy,ad,zr,sth,zha,bqb,zd,qcz; 
string d;
int main(){
	srand(time(0));
	cd2--;
	cd3--;
	cd4--;
	cout<<"欢迎游玩大战才坤！按任意键+enter开始游戏"<<endl;
	cin>>d;
	cout<<"请选择难度等级（1-3）"<<endl;
	double dp;
	cin>>dp;
	if(dp==1){
		b=300;
		a=150;
		Q=1;
	}else{
		 
	if(dp==2){
		b=3600;
		a=320;
		Q=2;
	}else{
	if(dp==3){
		b=10000;
		a=1000;
		Q=3;
	}else{
	
	if(dp==4){
		cout<<"已启动地狱模式"<<endl;
		a=100;
		b=10200;
		Q=4;
	}else{
		if(dp==5){
			cout<<"已启动阎王模式"<<endl; 
			a=10;
			b=15000;
			Q=5; 
			qcz++;
		}else{
			
		
		    a=100*dp;
		    b=1000*dp;
			
	
	}}}}}
	while(a>0&b>0){
		cd3--;
		cd2--;
		cd4--;
		cd7--;
		cout<<"当前血量："<<a<<endl<<"你的马内："<<my<<endl; 
		cout<<"你的技能："<<endl<<"1、漫画：伤害10"<<endl<<"2、铅笔：伤害15"<<endl<<"3、跳舞：伤害20"<<endl<<"4、殴打：伤害100"<<endl;
		
		cout<<"5、军备竞赛：伤害1-老师当前血量/2"<<endl; 
		cout<<"6、撒币：消耗"<<my<<"coin,造成"<<my<<"点伤害"<<endl;
		cout<<"7、无畏战士：我方无畏战士已出动！造成3iewkfdijijtk点伤害"<<endl;
		if(zz){
			cout<<"20、稳定の针剂：???????"<<endl; 
		} 
		if(p){
			cout<<"8、adioq8jewujgrugruegun4luwgkgoj：伤害？？？"<<endl; 
		}
		cout<<"对方血量："<<b<<endl; 
		cout<<"请输入技能编号……(按0打开商店)(按-1检视道具)"<<endl; 
		cin>>c;
		if(kz==true){
			kz==false;
			cout<<"你正在被罚站！！！"; 
		}else{
		if(c==-2){
			cout<<"当前成就进度:"<<endl;
			cout<<"1、殴打老师次数"<<ad<<endl;
			cout<<"2、购买物品次数"<<buy<<endl;
			cout<<"3、吸食孜然次数"<<zr<<endl;
			cout<<"4、使用撒币对才坤造成的伤害"<<sth<<endl;
			cout<<"5、扎针后获得正面效果次数"<<zha<<endl;
			cout<<"6、使用章鱼哥次数"<<bqb<<endl;
			cout<<"7、使用手抓饭次数"<<zd<<endl;
			cout<<"请输入技能编号……(按0打开商店)(按-1检视道具)"<<endl; 
			cin>>c;
			 
		}
		if(c==0){
			cout<<"欢迎光顾'莱昂哈德'小店！你可以购买一些好~东~西~"<<endl;
			cout<<"商品列表："<<endl<<"1、感情牌鲨鱼干：力量+1，血量+1   售价：1coin"<<endl<<"2、子然牌孜然：血量+114  售价:100coin"<<endl<<"3、手抓饭：额外追加2点毒素伤害，持续3回合 售价：10coin"<<endl<<"4、章鱼哥：限制一回合对手行动 售价：35coin"<<endl<<"5、作者自己：额外追加400点伤害 售价：400coin"<<endl<<"6、军备大套装：允许使用军备竞赛（随只因对老师造成伤害） 售价:"<<b/4<<"coin"<<endl<<"7、不稳定针剂:??? 售价：1coin"<<endl<<"8、染血的装甲:??? 售价:"<<zhqs<<"coin"<<endl;
			cout<<"请输入商品编号……"<<endl;
			while(1){
			cin>>gm;
			if(rand()%20+1==1){
				cout<<"莱昂哈德念在你如此帅气多金,送了你一张机密文件"<<endl;
				w=2456; 
			}
			if(rand()%20+1==1){
				cout<<"牢玩家:fyhfjvjrrd3okuftkycxluyekxu!!!(牢玩家给你喂了21993913774384204832038820瓶牛磺酸，你感觉充满了力量！！！！！！)"<<endl;
				cd2=cd3=cd4=cd6=cd7=0; 
			}
			if(gm==1&&my-1>=0){
				my-=1;
				sp1++;
				buy++;
			}else{
			    if(gm==2&&my>=100){
				    my-=100;
				    sp2++;
				buy++;
			    }else{
					 
			        if(gm==3&&my>=10){
				        my-=10;
				        sp3+=3;
				buy++;
			        }else{
			            if(gm==4&&my>=35){
				            my-=35;
				            sp4++;
				buy++;
			            }else{
						    if(gm==5&&my>=400){
							    my-=400;
							    sp5++;
				buy++;
						    }else{
								if(gm==6&&my>=b/4){
									my-=b/4;
									cd6--;
								}else{
									if(gm==7&&my>=1){
										zz++;
										my-=1;
									}else{
									    if(gm==8&&my>=zhqs){
											if(zhqs>8192){
												cout<<"姬子温柔地注视着你，不再言语。"<<endl;
												continue; 
											}
											cout<<"一部分未知的力量来到了你的身体之中……"<<endl;
											ll++;
											my-=zhqs; 
											zhqs*=2;
									    }
				                     cout<<"店主大大：你看这个彬彬就是逊拉！" <<endl;
								     break;	
									}	
								}
								
						    } 
							
			            }
						
			        }
			    }
			}
				}
		    cout<<"请输入技能编号……"<<endl;
			cin>>c;  
		}
		if(c==-1){
			cout<<"当前道具:"<<endl;
			cout<<"  感情牌鲨鱼干：×"<<sp1<<endl;
			cout<<"  子然牌孜然：×"<<sp2<<endl;
			cout<<"  手抓饭：×"<<sp3<<endl;
			cout<<"  章鱼哥：×"<<sp4<<endl;
			cout<<"  PoTatO：×"<<sp5<<endl;
			cout<<"  军备大套装：×"<<cd6<<endl;
			cout<<"  不稳定针剂：×"<<zz<<"强化等级："<<ll<<endl<<endl<<endl;
		    cout<<"请输入技能编号……"<<endl;
			cin>>c; 
			
		} 
		if(c==1){
			cout<<"你使用了漫画并对才坤造成了 10 伤害!"<<endl;
			b-=(10*ll);
			my+=10;
		}
		if(c==2&&cd2<=0){
			cout<<"你使用了铅笔并对才坤造成了 15 伤害!"<<endl;
			b=b-(15*ll);
			my+=15;
			cd2=1;
		}else{
			cout<<"cd2:"<<cd2<<endl;
		}
		if(c==3&&cd3<=0){
			cout<<"你使用了跳舞并对才坤造成了 20 伤害!"<<endl;
			b=b-(20*ll);
			my+=20;
			cd3=3;
			if(sp3){
				sp3--;
				cout<<"感情牌鲨鱼干 庇佑了你！"<<endl;
				b-=1;
				a+=1; 
			}
		}else{
			cout<<"cd3:"<<cd3<<endl;
		}
		if(c==4&&cd4<=0){
			cout<<"你使用了殴打并对才坤造成了 100 伤害!"<<endl;
			if(sp2){
				sp2--;
				cout<<"你使用了 子然牌孜然！"<<endl;
				zr++; 
				a+=114;
			}
			ad++;
			b=b-(100*ll);
			my+=100;
			cd4=5;
		}else{
			cout<<"cd4:"<<cd4<<endl;
		}
		if(c==8&&(p)){
			cout<<"你把老师登了"<<endl;
			fuck=true;
			b-=114514; 
		}
		if(c==5&&cd6<=0){
			cout<<"你从裤裆里掏出了一把枪(但你也不知道是什么枪)！！！！！！！"<<endl;
			int s=rand()%(b/2)+1;
			cout<<"你造成了"<<s*ll<<"伤害！"<<endl;
			b-=(s*ll);
			my+=s; 
			cd6++; 
		}
		if(c==6){
			cout<<"你撒币了！！！"<<endl;
			b-=my;
			sth+=my;
			my-=my;
			 
		}
		if(c==7){
			cout<<"我方无畏战士已出动！！！"<<endl;
			b-=w*ll;
			cd7=15; 
		}
		if(c==20&&zz){
			if(rand()%5+1==1){
				cout<<"感——觉——好——极——了!!!!!!!!"<<endl;
				zha++;
				a*=2;
				ll++; 
				zz--;
			}else{
				zz--;
				cout<<"感——觉——好——你——妈!!!!!!!!"<<endl;
				a=rand()%4+1; 
			}
		} }
		if(c==114514){
			cout<<"按1打开作弊，按0关闭"<<endl;
			cin>>p; 
		}
		if(sp3){
			sp3--;
			cout<<"老师中毒了！";
			zd++;
			b-=2; 
		}
		if(sp5){
			sp5--;
			cout<<"老师被作者的力量攻击了！"<<endl;
			b-=400; 
	    }
	    if(sp4){
        sp4--;
			cout<<"老师被章鱼哥袭击了！"<<endl;
			bqb++; 
	    }else{
			int gz=rand()%8+1;
			if(gz==1){
				cout<<"老师使用了火力压制！"<<endl; 
				int rz=rand()%5+1;
				if(rz>=1&&rz<=4){
					cout<<"老师使用了左轮手枪!"<<endl;
					for(int i=1;i<=rand()%6+1;i++){
					    a-=5;
						
					}
				}else{
					int gj=rand()%2+1;
					if(gj==1){
						cout<<"老师掏出了AX50!!!!"<<endl;
						ax=true;
						a-=499;
					}else{
						cout<<"老师打出了空包弹!!"<<endl; 
					}
				}
			}
			if(gz==2){
				cout<<"老师使用了三角函数!!"<<endl;
				a-=7;
			}
			if(gz==3){
				cout<<"老师使用了写检查!!"<<endl;
				a-=13;
			}
			if(gz==4){
				cout<<"老师使用了劝导!!"<<endl;
				a-=1;
			}
			if(gz==5){
				cout<<"老师使用了处分!!"<<endl;
				a-=20;
			}
			if(gz==6){
				cout<<"老师使用了上课！！"<<endl;
				a-=35; 
			}
			if(gz==7){
				cout<<"老师使用了保肾药水！！！！"<<endl;
				b+=rand()%b+1; 
			} 
	    }
	 
	}
	if(a<=0){
		cout<<"你被老师打爆了"<<endl; 
	}else{
		cout<<"你把老师打爆了"<<endl; 
		
	}
	cout<<"成就"<<endl;
	if(ax){
		cout<<"铁头功：用头接一发AX50"<<endl;
		
	}
	if(fuck){
		cout<<"杰哥：登老师"<<endl; 
	}
	if(ad>10){
		cout<<"校霸：殴打老师超过10次"<<endl; 
		qcz++;
	}
	if(buy>15){
		cout<<"购买力大师：购买物品15次以上"<<endl; 
		qcz++;
	}
	if(zr>15){
		cout<<"孜然热爱者：吸食孜然15次以上"<<endl;
		qcz++; 
	}
	if(sth>23000){
		cout<<"大撒币：使用撒币对才坤造成的伤害大于23000"<<endl;
		qcz++; 
	}
	if(zha>3){
		cout<<"欧皇：扎针后获得正面效果大于三次"<<endl; 
		qcz++;
	}
	if(bqb>7){
		cout<<"比奇堡战神：使用章鱼哥超过七次"<<endl;
		qcz++;
	}
	if(zd>5){
		cout<<"绝命毒师：使用手抓饭超过五次"<<endl;
		qcz++;
	}
	if(qcz==9){
		cout<<"战神：达成全成就！！！"<<endl;
		cout<<"作者：真的有人能打到这一步啊，很好，很好。"<<endl;
		cout<<"          那么，面对我呢？？？"<<endl;
		a=300;
		b=30000;
		int rd; 
		while(a>0&b>0){
		cd3--;
		cd2--;
		cd4--;
		cd7--;
		cout<<"round "<<++rd<<endl<<endl;
		cout<<"当前血量："<<a<<endl<<"你的马内："<<my<<endl; 
		cout<<"你的技能："<<endl<<"1、漫画：伤害10"<<endl<<"2、铅笔：伤害15"<<endl<<"3、跳舞：伤害20"<<endl<<"4、殴打：伤害100"<<endl;
		
		cout<<"5、军备竞赛：伤害1-老师当前血量/2"<<endl; 
		cout<<"6、撒币：消耗"<<my<<"coin,造成"<<my<<"点伤害"<<endl;
		cout<<"7、无畏战士：我方无畏战士已出动！造成3iewkfdijijtk点伤害"<<endl;
		if(zz){
			cout<<"20、稳定の针剂：???????"<<endl; 
		} 
		if(p){
			cout<<"8、adioq8jewujgrugruegun4luwgkgoj：伤害？？？"<<endl; 
		}
		cout<<"对方血量："<<b<<endl; 
		cout<<"请输入技能编号……(按0打开商店)(按-1检视道具)"<<endl; 
		cin>>c;
		if(kz==true){
			kz==false;
			cout<<"你正在被罚站！！！"; 
		}else{
		
		if(c==0){
			cout<<"欢迎光顾'莱昂哈德'小店！你可以购买一些好~东~西~"<<endl;
			cout<<"商品列表："<<endl<<"1、感情牌鲨鱼干：力量+1，血量+1   售价：1coin"<<endl<<"2、子然牌孜然：血量+114  售价:100coin"<<endl<<"3、手抓饭：额外追加2点毒素伤害，持续3回合 售价：10coin"<<endl<<"4、章鱼哥：限制一回合对手行动 售价：35coin"<<endl<<"5、作者自己：额外追加400点伤害 售价：400coin"<<endl<<"6、军备大套装：允许使用军备竞赛（随只因对老师造成伤害） 售价:"<<b/4<<"coin"<<endl<<"7、不稳定针剂:??? 售价：1coin"<<endl;
			cout<<"请输入商品编号……"<<endl;
			while(1){
			cin>>gm;
			if(rand()%20+1==1){
				cout<<"莱昂哈德念在你如此帅气多金,送了你一张机密文件"<<endl;
				w=2456; 
			}
			if(rand()%20+1==1){
				cout<<"牢玩家:fyhfjvjrrd3okuftkycxluyekxu!!!(牢玩家给你喂了21993913774384204832038820瓶牛磺酸，你感觉充满了力量！！！！！！)"<<endl;
				cd2=cd3=cd4=cd6=cd7=0; 
			}
			if(gm==1&&my-1>=0){
				my-=1;
				sp1++;
				buy++;
			}else{
			    if(gm==2&&my>=100){
				    my-=100;
				    sp2++;
				buy++;
			    }else{
					 
			        if(gm==3&&my>=10){
				        my-=10;
				        sp3+=3;
				buy++;
			        }else{
			            if(gm==4&&my>=35){
				            my-=35;
				            sp4++;
				buy++;
			            }else{
						    if(gm==5&&my>=400){
							    my-=400;
							    sp5++;
				buy++;
						    }else{
								if(gm==6&&my>=b/4){
									my-=b/4;
									cd6--;
								}else{
									if(gm==7&&my>=1){
										zz++;
										my-=1;
									}else{
									
				                     cout<<"店主大大：你看这个彬彬就是逊拉！" <<endl;
								     break;	
									}	
								}
								
						    } 
							
			            }
						
			        }
			    }
			}
				}
		    cout<<"请输入技能编号……"<<endl;
			cin>>c;  
		}
		if(c==-1){
			cout<<"当前道具:"<<endl;
			cout<<"  感情牌鲨鱼干：×"<<sp1<<endl;
			cout<<"  子然牌孜然：×"<<sp2<<endl;
			cout<<"  手抓饭：×"<<sp3<<endl;
			cout<<"  章鱼哥：×"<<sp4<<endl;
			cout<<"  PoTatO：×"<<sp5<<endl;
			cout<<"  军备大套装：×"<<cd6<<endl;
			cout<<"  不稳定针剂：×"<<zz<<endl<<endl<<endl;
		    cout<<"请输入技能编号……"<<endl;
			cin>>c; 
			
		} 
		if(c==1){
			cout<<"你使用了漫画并对作者造成了 10 伤害!"<<endl;
			b-=(10*ll);
			my+=10;
		}
		if(c==2&&cd2<=0){
			cout<<"你使用了铅笔并对作者造成了 15 伤害!"<<endl;
			b=b-(15*ll);
			my+=15;
			cd2=1;
		}else{
			cout<<"cd2:"<<cd2<<endl;
		}
		if(c==3&&cd3<=0){
			cout<<"你使用了跳舞并对作者造成了 20 伤害!"<<endl;
			b=b-(20*ll);
			my+=20;
			cd3=3;
			if(sp3){
				sp3--;
				cout<<"感情牌鲨鱼干 庇佑了你！"<<endl;
				b-=1;
				a+=1; 
			}
		}else{
			cout<<"cd3:"<<cd3<<endl;
		}
		if(c==4&&cd4<=0){
			cout<<"你使用了殴打并对作者造成了 100 伤害!"<<endl;
			if(sp2){
				sp2--;
				cout<<"你使用了 子然牌孜然！"<<endl;
				zr++; 
				a+=114;
			}
			ad++;
			b=b-(100*ll);
			my+=100;
			cd4=5;
		}else{
			cout<<"cd4:"<<cd4<<endl;
		}
		if(c==8&&(p)){
			cout<<"你把老师登了"<<endl;
			fuck=true;
			b-=114514; 
		}
		if(c==5&&cd6<=0){
			cout<<"你从裤裆里掏出了一把枪(但你也不知道是什么枪)！！！！！！！"<<endl;
			int s=rand()%(b/4)+1;
			cout<<"你造成了"<<s*ll<<"伤害！"<<endl;
			b-=(s*ll);
			my+=s; 
			cd6++; 
		}
		if(c==6){
			cout<<"你撒币了！！！"<<endl;
			b-=my/2;
			sth+=my;
			my-=my;
			 
		}
		if(c==7){
			cout<<"我方无畏战士已出动！！！"<<endl;
			b-=w*ll/2;
			cd7=30; 
		}
		if(c==20&&zz){
			if(rand()%5+1==1){
				cout<<"感——觉——好——极——了!!!!!!!!"<<endl;
				zha++;
				a*=2;
				ll++; 
				zz--;
			}else{
				
				cout<<"感——觉——好——你——妈!!!!!!!!"<<endl;
				a=rand()%2+1;
				zz--; 
			}
		} }
		if(c==114514){
			cout<<"禁止作弊"<<endl;
			a=0;
			break; 
		}
		if(sp3){
			sp3--;
			cout<<"老师中毒了！";
			zd++;
			b-=2; 
		}
		if(sp5){
			sp5--;
			cout<<"老师被作者的力量攻击了！"<<endl;
			b-=400; 
	    }
	    if(sp4){
        sp4--;
			cout<<"老师被章鱼哥袭击了！"<<endl;
			bqb++; 
	    }else{
			int gz=rand()%8;
			if(gz==1){
				cout<<"老师使用了火力压制！"<<endl; 
				int rz=rand()%5+1;
				if(rz>=1&&rz<=4){
					cout<<"老师使用了左轮手枪!"<<endl;
					for(int i=1;i<=rand()%6+1;i++){
					    a-25;
						
					}
				}else{
					int gj=rand()%1+1;
					if(gj==1){
						cout<<"老师掏出了AX50!!!!"<<endl;
						ax=true;
						a-=4990;
					}else{
						cout<<"作者打出了空包弹!!"<<endl; 
					}
				}
			}
			if(gz==2){
				cout<<"作者使用了三角函数!!"<<endl;
				a-=17;
			}
			if(gz==3){
				cout<<"作者使用了写检查!!"<<endl;
				a-=33;
			}
			if(gz==4){
				cout<<"作者使用了劝导!!"<<endl;
				a-=100;
			}
			if(gz==5){
				cout<<"作者使用了处分!!"<<endl;
				a-=60;
			}
			if(gz==6){
				cout<<"作者使用了上课！！"<<endl;
				a-=105; 
			}
			if(gz==7){
				cout<<"作者使用了保肾药水！！！！"<<endl;
				b+=rand()%b+1; 
			} 
	    }
	 
	}
	if(a<=0){
		cout<<"你被作者打爆了"<<endl; 
	}else{
		cout<<"你把作者打爆了"<<endl; 
		
	}
	}
	} 
	/*
	鸣谢：
	CSPwinner:1.2.0.9优化版制作者
	范：原型，我的恩师 */
