object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 411
  ClientWidth = 675
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 330
    Top = 26
    Width = 48
    Height = 13
    Caption = 'Size of list'
  end
  object Label2: TLabel
    Left = 330
    Top = 124
    Width = 37
    Height = 13
    Caption = 'First list'
  end
  object Label3: TLabel
    Left = 528
    Top = 124
    Width = 51
    Height = 13
    Caption = 'Second list'
  end
  object Label4: TLabel
    Left = 120
    Top = 7
    Width = 16
    Height = 13
    Caption = 'List'
  end
  object Button1: TButton
    Left = 416
    Top = 368
    Width = 75
    Height = 25
    Caption = 'Spread'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 416
    Top = 58
    Width = 75
    Height = 25
    Caption = 'Generate'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 392
    Top = 23
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object Memo1: TMemo
    Left = 8
    Top = 26
    Width = 252
    Height = 377
    Lines.Strings = (
      'Memo1')
    TabOrder = 3
  end
  object Memo2: TMemo
    Left = 273
    Top = 143
    Width = 185
    Height = 201
    Lines.Strings = (
      'Memo2')
    TabOrder = 4
  end
  object Memo3: TMemo
    Left = 472
    Top = 143
    Width = 185
    Height = 201
    Lines.Strings = (
      'Memo3')
    TabOrder = 5
  end
end
