//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#include <ctime>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
Queue<int> list;
Queue<int> list2;
Queue<int> list3;
using namespace std;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button1Click(TObject *Sender)
{
  Node<int> x;
  x = *list.head;
	int min = x.value;
	int max = x.value;
	int min_index=0;
	int max_index=0;
	Node<int> b;
	b = x;
	for(int i=0; i<list.GetSize(); i++)
	{
		Node<int> a;
		a = b;
		b = *a.next;
		if(a.value<min)
		{
			min=a.value;
			min_index=i;
		}
		if(a.value>max)
		{
			max=a.value;
			max_index=i;
		}
	}
	if (min_index>max_index) {
	   int y = min_index;
	   min_index = max_index;
	   max_index = y;
	}
	x = *list.head;
	b = x;
	for(int i=0; i<min_index; i++)
	{
		Node<int> a = *list.head;
		list.PopFront();
		list2.PushBack(a.value);
		Memo3->Lines->Add(a.value);
	}
	for(int i=min_index; i<max_index; i++)
	{
		Node<int> a = *list.head;
		list.PopFront();
		list2.PushBack(a.value);
		Memo2->Lines->Add(a.value);
	}
	for(int i=max_index; i<list.GetSize(); i++)
		{
			Node<int> a = *list.head;
			list.PopFront();
			list2.PushBack(a.value);
			Memo3->Lines->Add(a.value);
		}
	}
	else
	{
		while(max_index+1!=min_index)
		{
			ListBox1->Items->Delete(max_index+1);
			min_index--;
		}
		box1.InsertList(box2, max_index+1);
		for(int i=0; i<box2.GetSize(); i++)
		{
			ListBox1->Items->Insert(max_index+1+i, IntToStr(box2[i]));
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
	Memo1->Lines->Clear();
	Memo2->Lines->Clear();
	Memo3->Lines->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	int siz = StrToInt(Edit1->Text);
	srand(time(NULL));
	int x;
	Memo1->Lines->Clear();
	for (int i = 0; i < siz; i++)
	{
		x = rand();
		Memo1->Lines->Add(x);
		list.PushBack(x);
	}
}
//---------------------------------------------------------------------------

