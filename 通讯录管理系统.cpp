#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

struct Person{
	//���� 
	string m_Name;
	//�Ա�
	int m_Sex;
	//����
	int m_Age;
	//�绰 
	string m_Phone;
	//סַ
	string m_Addr; 
};
struct Addressbooks{
	struct Person personArray[MAX];
	int m_Size;
};
//1.�����ϵ�� 
void addPerson(Addressbooks * abs){
	//�ж�ͨѶ¼�Ƿ�����,������˲��������
	if(abs->m_Size==MAX){
		cout<<"ͨѶ¼����,�޷����!"<<endl;
		return;
	}else{
		//��Ӿ�����ϵ��
		//���� 
		string name;
		cout<<"����������: "<<endl;
		cin>> name;
		abs->personArray[abs->m_Size].m_Name=name;
		//�Ա�
		cout<<"�������Ա�: "<<endl; 
		cout<<"1 --- ��"<<endl;
		cout<<"2 --- Ů"<< endl; 
		int sex=0;
		while(true){
			//����������1��2�����˳�ѭ��
			//�����������,�������� 
			cin>>sex;
			if(sex==1 || sex==2){
			abs->personArray[abs->m_Size].m_Sex=sex;
			break;
			}else{
				cout<<"��������,����������"<<endl; 
			}
		}
		//����
		cout<<"����������: "<<endl; 
		int age=0;
		cin>>age;
		abs->personArray[abs->m_Size].m_Age=age;
		//�绰
		cout<<"��������ϵ�绰"<<endl; 
		string phone;
		cin>>phone;
		abs->personArray[abs->m_Size].m_Phone=phone;
		//סַ
		cout<<"�������ͥסַ"<<endl;
		string address;
		cin>>address;
		abs->personArray[abs->m_Size].m_Addr=address; 
		
		//����ͨѶ¼����
		abs->m_Size++; 
		
		cout<<"��ӳɹ�"<<endl; 
		system("pause"); //�밴��������� 
		system("cls"); //�������� 
	}
}

//2.��ʾ��ϵ��
void showPerson(Addressbooks* abs){
	//�ж�ͨѶ¼�������Ƿ�Ϊ0,���Ϊ0,��ʾ��¼Ϊ��
	//�����Ϊ0 ,��ʾ��¼����ϵ����Ϣ
	if(abs->m_Size==0){
		cout<<"��ǰ��¼Ϊ��"<<endl;
	} else{
		for(int i=0;i<abs->m_Size;i++){
			cout<<"����: "<<abs->personArray[i].m_Name<<"\t";
			cout<<"�Ա�: "<<(abs->personArray[i].m_Sex==1?"��":"Ů")<<"\t";
			cout<<"����: "<<abs->personArray[i].m_Age<<"\t";
			cout<<"�绰: "<<abs->personArray[i].m_Phone<<"\t";
			cout<<"סַ: "<<abs->personArray[i].m_Addr<<endl;
		}	
	}
	system("pause");
	system("cls");
} 

void showMenu(){
	cout<<"**********************"<<endl;
	cout<<"*****1.�����ϵ��*****"<<endl;
	cout<<"*****2.��ʾ��ϵ��*****"<<endl;
	cout<<"*****3.ɾ����ϵ��*****"<<endl;
	cout<<"*****4.������ϵ��*****"<<endl;
	cout<<"*****5.�޸���ϵ��*****"<<endl;
	cout<<"*****6.�����ϵ��*****"<<endl;
	cout<<"*****0.�˳�ͨѶ¼*****"<<endl;
	cout<<"**********************"<<endl;
} 


int main(){
	//����ͨѶ¼�ṹ����� 
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size=0; 
	
	int select=0;//�����û�ѡ������ı���
	 
	while(true){
		showMenu(); //�˵����� 
		cin>>select;
		switch(select){
			case 1://1.�����ϵ��
				addPerson(&abs);//���õ�ַ����,��������ʵ�� 
				break;
			case 2://2.��ʾ��ϵ��
				showPerson(&abs);
				break;
			case 3://3.ɾ����ϵ��
				break;
			case 4://4.������ϵ��
				break;
			case 5://5.�޸���ϵ��
				break;
			case 6://6.�����ϵ��
				break;
			case 0://0.�˳�ͨѶ¼
				cout<<"��ӭ�´�ʹ��"<<endl;
				return 0;
				break;
			default:
				break;
		}
	}
} 
