#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int a=1000,b=10000,c,c1=10,c2=15,c3=20,c4=100,cd2=0,cd3=0,cd4=0,cd6=0,cd7=0;
int my=0,gm,w=1,Q,zz,ll=1,zhqs=1;
//��Ʒ���£� 
int sp1,sp2,sp3,sp4,sp5; 
bool p=0,kz=0;
//�ɾ�
bool ax=false,fuck=false;
int buy,ad,zr,sth,zha,bqb,zd,qcz; 
string d;
int main(){
	srand(time(0));
	cd2--;
	cd3--;
	cd4--;
	cout<<"��ӭ�����ս�������������+enter��ʼ��Ϸ"<<endl;
	cin>>d;
	cout<<"��ѡ���Ѷȵȼ���1-3��"<<endl;
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
		cout<<"����������ģʽ"<<endl;
		a=100;
		b=10200;
		Q=4;
	}else{
		if(dp==5){
			cout<<"����������ģʽ"<<endl; 
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
		cout<<"��ǰѪ����"<<a<<endl<<"������ڣ�"<<my<<endl; 
		cout<<"��ļ��ܣ�"<<endl<<"1���������˺�10"<<endl<<"2��Ǧ�ʣ��˺�15"<<endl<<"3�����裺�˺�20"<<endl<<"4��Ź���˺�100"<<endl;
		
		cout<<"5�������������˺�1-��ʦ��ǰѪ��/2"<<endl; 
		cout<<"6�����ң�����"<<my<<"coin,���"<<my<<"���˺�"<<endl;
		cout<<"7����ηսʿ���ҷ���ηսʿ�ѳ��������3iewkfdijijtk���˺�"<<endl;
		if(zz){
			cout<<"20���ȶ��������???????"<<endl; 
		} 
		if(p){
			cout<<"8��adioq8jewujgrugruegun4luwgkgoj���˺�������"<<endl; 
		}
		cout<<"�Է�Ѫ����"<<b<<endl; 
		cout<<"�����뼼�ܱ�š���(��0���̵�)(��-1���ӵ���)"<<endl; 
		cin>>c;
		if(kz==true){
			kz==false;
			cout<<"�����ڱ���վ������"; 
		}else{
		if(c==-2){
			cout<<"��ǰ�ɾͽ���:"<<endl;
			cout<<"1��Ź����ʦ����"<<ad<<endl;
			cout<<"2��������Ʒ����"<<buy<<endl;
			cout<<"3����ʳ��Ȼ����"<<zr<<endl;
			cout<<"4��ʹ�����ҶԲ�����ɵ��˺�"<<sth<<endl;
			cout<<"5�������������Ч������"<<zha<<endl;
			cout<<"6��ʹ����������"<<bqb<<endl;
			cout<<"7��ʹ����ץ������"<<zd<<endl;
			cout<<"�����뼼�ܱ�š���(��0���̵�)(��-1���ӵ���)"<<endl; 
			cin>>c;
			 
		}
		if(c==0){
			cout<<"��ӭ���'��������'С�꣡����Թ���һЩ��~��~��~"<<endl;
			cout<<"��Ʒ�б�"<<endl<<"1������������ɣ�����+1��Ѫ��+1   �ۼۣ�1coin"<<endl<<"2����Ȼ����Ȼ��Ѫ��+114  �ۼ�:100coin"<<endl<<"3����ץ��������׷��2�㶾���˺�������3�غ� �ۼۣ�10coin"<<endl<<"4������磺����һ�غ϶����ж� �ۼۣ�35coin"<<endl<<"5�������Լ�������׷��400���˺� �ۼۣ�400coin"<<endl<<"6����������װ������ʹ�þ�����������ֻ�����ʦ����˺��� �ۼ�:"<<b/4<<"coin"<<endl<<"7�����ȶ����:??? �ۼۣ�1coin"<<endl<<"8��ȾѪ��װ��:??? �ۼ�:"<<zhqs<<"coin"<<endl;
			cout<<"��������Ʒ��š���"<<endl;
			while(1){
			cin>>gm;
			if(rand()%20+1==1){
				cout<<"�����������������˧�����,������һ�Ż����ļ�"<<endl;
				w=2456; 
			}
			if(rand()%20+1==1){
				cout<<"�����:fyhfjvjrrd3okuftkycxluyekxu!!!(����Ҹ���ι��21993913774384204832038820ƿţ���ᣬ��о�����������������������)"<<endl;
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
												cout<<"���������ע�����㣬�������"<<endl;
												continue; 
											}
											cout<<"һ����δ֪�������������������֮�С���"<<endl;
											ll++;
											my-=zhqs; 
											zhqs*=2;
									    }
				                     cout<<"��������㿴���������ѷ����" <<endl;
								     break;	
									}	
								}
								
						    } 
							
			            }
						
			        }
			    }
			}
				}
		    cout<<"�����뼼�ܱ�š���"<<endl;
			cin>>c;  
		}
		if(c==-1){
			cout<<"��ǰ����:"<<endl;
			cout<<"  ����������ɣ���"<<sp1<<endl;
			cout<<"  ��Ȼ����Ȼ����"<<sp2<<endl;
			cout<<"  ��ץ������"<<sp3<<endl;
			cout<<"  ����磺��"<<sp4<<endl;
			cout<<"  PoTatO����"<<sp5<<endl;
			cout<<"  ��������װ����"<<cd6<<endl;
			cout<<"  ���ȶ��������"<<zz<<"ǿ���ȼ���"<<ll<<endl<<endl<<endl;
		    cout<<"�����뼼�ܱ�š���"<<endl;
			cin>>c; 
			
		} 
		if(c==1){
			cout<<"��ʹ�����������Բ�������� 10 �˺�!"<<endl;
			b-=(10*ll);
			my+=10;
		}
		if(c==2&&cd2<=0){
			cout<<"��ʹ����Ǧ�ʲ��Բ�������� 15 �˺�!"<<endl;
			b=b-(15*ll);
			my+=15;
			cd2=1;
		}else{
			cout<<"cd2:"<<cd2<<endl;
		}
		if(c==3&&cd3<=0){
			cout<<"��ʹ�������貢�Բ�������� 20 �˺�!"<<endl;
			b=b-(20*ll);
			my+=20;
			cd3=3;
			if(sp3){
				sp3--;
				cout<<"����������� �������㣡"<<endl;
				b-=1;
				a+=1; 
			}
		}else{
			cout<<"cd3:"<<cd3<<endl;
		}
		if(c==4&&cd4<=0){
			cout<<"��ʹ����Ź�򲢶Բ�������� 100 �˺�!"<<endl;
			if(sp2){
				sp2--;
				cout<<"��ʹ���� ��Ȼ����Ȼ��"<<endl;
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
			cout<<"�����ʦ����"<<endl;
			fuck=true;
			b-=114514; 
		}
		if(c==5&&cd6<=0){
			cout<<"��ӿ������ͳ���һ��ǹ(����Ҳ��֪����ʲôǹ)��������������"<<endl;
			int s=rand()%(b/2)+1;
			cout<<"�������"<<s*ll<<"�˺���"<<endl;
			b-=(s*ll);
			my+=s; 
			cd6++; 
		}
		if(c==6){
			cout<<"�������ˣ�����"<<endl;
			b-=my;
			sth+=my;
			my-=my;
			 
		}
		if(c==7){
			cout<<"�ҷ���ηսʿ�ѳ���������"<<endl;
			b-=w*ll;
			cd7=15; 
		}
		if(c==20&&zz){
			if(rand()%5+1==1){
				cout<<"�С����������á�����������!!!!!!!!"<<endl;
				zha++;
				a*=2;
				ll++; 
				zz--;
			}else{
				zz--;
				cout<<"�С����������á����㡪����!!!!!!!!"<<endl;
				a=rand()%4+1; 
			}
		} }
		if(c==114514){
			cout<<"��1�����ף���0�ر�"<<endl;
			cin>>p; 
		}
		if(sp3){
			sp3--;
			cout<<"��ʦ�ж��ˣ�";
			zd++;
			b-=2; 
		}
		if(sp5){
			sp5--;
			cout<<"��ʦ�����ߵ����������ˣ�"<<endl;
			b-=400; 
	    }
	    if(sp4){
        sp4--;
			cout<<"��ʦ�������Ϯ���ˣ�"<<endl;
			bqb++; 
	    }else{
			int gz=rand()%8+1;
			if(gz==1){
				cout<<"��ʦʹ���˻���ѹ�ƣ�"<<endl; 
				int rz=rand()%5+1;
				if(rz>=1&&rz<=4){
					cout<<"��ʦʹ����������ǹ!"<<endl;
					for(int i=1;i<=rand()%6+1;i++){
					    a-=5;
						
					}
				}else{
					int gj=rand()%2+1;
					if(gj==1){
						cout<<"��ʦ�ͳ���AX50!!!!"<<endl;
						ax=true;
						a-=499;
					}else{
						cout<<"��ʦ����˿հ���!!"<<endl; 
					}
				}
			}
			if(gz==2){
				cout<<"��ʦʹ�������Ǻ���!!"<<endl;
				a-=7;
			}
			if(gz==3){
				cout<<"��ʦʹ����д���!!"<<endl;
				a-=13;
			}
			if(gz==4){
				cout<<"��ʦʹ����Ȱ��!!"<<endl;
				a-=1;
			}
			if(gz==5){
				cout<<"��ʦʹ���˴���!!"<<endl;
				a-=20;
			}
			if(gz==6){
				cout<<"��ʦʹ�����ϿΣ���"<<endl;
				a-=35; 
			}
			if(gz==7){
				cout<<"��ʦʹ���˱���ҩˮ��������"<<endl;
				b+=rand()%b+1; 
			} 
	    }
	 
	}
	if(a<=0){
		cout<<"�㱻��ʦ����"<<endl; 
	}else{
		cout<<"�����ʦ����"<<endl; 
		
	}
	cout<<"�ɾ�"<<endl;
	if(ax){
		cout<<"��ͷ������ͷ��һ��AX50"<<endl;
		
	}
	if(fuck){
		cout<<"�ܸ磺����ʦ"<<endl; 
	}
	if(ad>10){
		cout<<"У�ԣ�Ź����ʦ����10��"<<endl; 
		qcz++;
	}
	if(buy>15){
		cout<<"��������ʦ��������Ʒ15������"<<endl; 
		qcz++;
	}
	if(zr>15){
		cout<<"��Ȼ�Ȱ��ߣ���ʳ��Ȼ15������"<<endl;
		qcz++; 
	}
	if(sth>23000){
		cout<<"�����ң�ʹ�����ҶԲ�����ɵ��˺�����23000"<<endl;
		qcz++; 
	}
	if(zha>3){
		cout<<"ŷ�ʣ������������Ч����������"<<endl; 
		qcz++;
	}
	if(bqb>7){
		cout<<"���汤ս��ʹ������糬���ߴ�"<<endl;
		qcz++;
	}
	if(zd>5){
		cout<<"������ʦ��ʹ����ץ���������"<<endl;
		qcz++;
	}
	if(qcz==9){
		cout<<"ս�񣺴��ȫ�ɾͣ�����"<<endl;
		cout<<"���ߣ���������ܴ���һ�������ܺã��ܺá�"<<endl;
		cout<<"          ��ô��������أ�����"<<endl;
		a=300;
		b=30000;
		int rd; 
		while(a>0&b>0){
		cd3--;
		cd2--;
		cd4--;
		cd7--;
		cout<<"round "<<++rd<<endl<<endl;
		cout<<"��ǰѪ����"<<a<<endl<<"������ڣ�"<<my<<endl; 
		cout<<"��ļ��ܣ�"<<endl<<"1���������˺�10"<<endl<<"2��Ǧ�ʣ��˺�15"<<endl<<"3�����裺�˺�20"<<endl<<"4��Ź���˺�100"<<endl;
		
		cout<<"5�������������˺�1-��ʦ��ǰѪ��/2"<<endl; 
		cout<<"6�����ң�����"<<my<<"coin,���"<<my<<"���˺�"<<endl;
		cout<<"7����ηսʿ���ҷ���ηսʿ�ѳ��������3iewkfdijijtk���˺�"<<endl;
		if(zz){
			cout<<"20���ȶ��������???????"<<endl; 
		} 
		if(p){
			cout<<"8��adioq8jewujgrugruegun4luwgkgoj���˺�������"<<endl; 
		}
		cout<<"�Է�Ѫ����"<<b<<endl; 
		cout<<"�����뼼�ܱ�š���(��0���̵�)(��-1���ӵ���)"<<endl; 
		cin>>c;
		if(kz==true){
			kz==false;
			cout<<"�����ڱ���վ������"; 
		}else{
		
		if(c==0){
			cout<<"��ӭ���'��������'С�꣡����Թ���һЩ��~��~��~"<<endl;
			cout<<"��Ʒ�б�"<<endl<<"1������������ɣ�����+1��Ѫ��+1   �ۼۣ�1coin"<<endl<<"2����Ȼ����Ȼ��Ѫ��+114  �ۼ�:100coin"<<endl<<"3����ץ��������׷��2�㶾���˺�������3�غ� �ۼۣ�10coin"<<endl<<"4������磺����һ�غ϶����ж� �ۼۣ�35coin"<<endl<<"5�������Լ�������׷��400���˺� �ۼۣ�400coin"<<endl<<"6����������װ������ʹ�þ�����������ֻ�����ʦ����˺��� �ۼ�:"<<b/4<<"coin"<<endl<<"7�����ȶ����:??? �ۼۣ�1coin"<<endl;
			cout<<"��������Ʒ��š���"<<endl;
			while(1){
			cin>>gm;
			if(rand()%20+1==1){
				cout<<"�����������������˧�����,������һ�Ż����ļ�"<<endl;
				w=2456; 
			}
			if(rand()%20+1==1){
				cout<<"�����:fyhfjvjrrd3okuftkycxluyekxu!!!(����Ҹ���ι��21993913774384204832038820ƿţ���ᣬ��о�����������������������)"<<endl;
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
									
				                     cout<<"��������㿴���������ѷ����" <<endl;
								     break;	
									}	
								}
								
						    } 
							
			            }
						
			        }
			    }
			}
				}
		    cout<<"�����뼼�ܱ�š���"<<endl;
			cin>>c;  
		}
		if(c==-1){
			cout<<"��ǰ����:"<<endl;
			cout<<"  ����������ɣ���"<<sp1<<endl;
			cout<<"  ��Ȼ����Ȼ����"<<sp2<<endl;
			cout<<"  ��ץ������"<<sp3<<endl;
			cout<<"  ����磺��"<<sp4<<endl;
			cout<<"  PoTatO����"<<sp5<<endl;
			cout<<"  ��������װ����"<<cd6<<endl;
			cout<<"  ���ȶ��������"<<zz<<endl<<endl<<endl;
		    cout<<"�����뼼�ܱ�š���"<<endl;
			cin>>c; 
			
		} 
		if(c==1){
			cout<<"��ʹ��������������������� 10 �˺�!"<<endl;
			b-=(10*ll);
			my+=10;
		}
		if(c==2&&cd2<=0){
			cout<<"��ʹ����Ǧ�ʲ������������ 15 �˺�!"<<endl;
			b=b-(15*ll);
			my+=15;
			cd2=1;
		}else{
			cout<<"cd2:"<<cd2<<endl;
		}
		if(c==3&&cd3<=0){
			cout<<"��ʹ�������貢����������� 20 �˺�!"<<endl;
			b=b-(20*ll);
			my+=20;
			cd3=3;
			if(sp3){
				sp3--;
				cout<<"����������� �������㣡"<<endl;
				b-=1;
				a+=1; 
			}
		}else{
			cout<<"cd3:"<<cd3<<endl;
		}
		if(c==4&&cd4<=0){
			cout<<"��ʹ����Ź�򲢶���������� 100 �˺�!"<<endl;
			if(sp2){
				sp2--;
				cout<<"��ʹ���� ��Ȼ����Ȼ��"<<endl;
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
			cout<<"�����ʦ����"<<endl;
			fuck=true;
			b-=114514; 
		}
		if(c==5&&cd6<=0){
			cout<<"��ӿ������ͳ���һ��ǹ(����Ҳ��֪����ʲôǹ)��������������"<<endl;
			int s=rand()%(b/4)+1;
			cout<<"�������"<<s*ll<<"�˺���"<<endl;
			b-=(s*ll);
			my+=s; 
			cd6++; 
		}
		if(c==6){
			cout<<"�������ˣ�����"<<endl;
			b-=my/2;
			sth+=my;
			my-=my;
			 
		}
		if(c==7){
			cout<<"�ҷ���ηսʿ�ѳ���������"<<endl;
			b-=w*ll/2;
			cd7=30; 
		}
		if(c==20&&zz){
			if(rand()%5+1==1){
				cout<<"�С����������á�����������!!!!!!!!"<<endl;
				zha++;
				a*=2;
				ll++; 
				zz--;
			}else{
				
				cout<<"�С����������á����㡪����!!!!!!!!"<<endl;
				a=rand()%2+1;
				zz--; 
			}
		} }
		if(c==114514){
			cout<<"��ֹ����"<<endl;
			a=0;
			break; 
		}
		if(sp3){
			sp3--;
			cout<<"��ʦ�ж��ˣ�";
			zd++;
			b-=2; 
		}
		if(sp5){
			sp5--;
			cout<<"��ʦ�����ߵ����������ˣ�"<<endl;
			b-=400; 
	    }
	    if(sp4){
        sp4--;
			cout<<"��ʦ�������Ϯ���ˣ�"<<endl;
			bqb++; 
	    }else{
			int gz=rand()%8;
			if(gz==1){
				cout<<"��ʦʹ���˻���ѹ�ƣ�"<<endl; 
				int rz=rand()%5+1;
				if(rz>=1&&rz<=4){
					cout<<"��ʦʹ����������ǹ!"<<endl;
					for(int i=1;i<=rand()%6+1;i++){
					    a-25;
						
					}
				}else{
					int gj=rand()%1+1;
					if(gj==1){
						cout<<"��ʦ�ͳ���AX50!!!!"<<endl;
						ax=true;
						a-=4990;
					}else{
						cout<<"���ߴ���˿հ���!!"<<endl; 
					}
				}
			}
			if(gz==2){
				cout<<"����ʹ�������Ǻ���!!"<<endl;
				a-=17;
			}
			if(gz==3){
				cout<<"����ʹ����д���!!"<<endl;
				a-=33;
			}
			if(gz==4){
				cout<<"����ʹ����Ȱ��!!"<<endl;
				a-=100;
			}
			if(gz==5){
				cout<<"����ʹ���˴���!!"<<endl;
				a-=60;
			}
			if(gz==6){
				cout<<"����ʹ�����ϿΣ���"<<endl;
				a-=105; 
			}
			if(gz==7){
				cout<<"����ʹ���˱���ҩˮ��������"<<endl;
				b+=rand()%b+1; 
			} 
	    }
	 
	}
	if(a<=0){
		cout<<"�㱻���ߴ���"<<endl; 
	}else{
		cout<<"������ߴ���"<<endl; 
		
	}
	}
	} 
	/*
	��л��
	CSPwinner:1.2.0.9�Ż���������
	����ԭ�ͣ��ҵĶ�ʦ */
