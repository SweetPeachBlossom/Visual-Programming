object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1058#1077#1090#1088#1080#1089' '#1082#1074#1072#1076#1088#1072#1090#1085#1099#1081
  ClientHeight = 511
  ClientWidth = 437
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 200
    Width = 43
    Height = 13
    Caption = #1059#1088#1086#1074#1077#1085#1100
  end
  object Label2: TLabel
    Left = 16
    Top = 256
    Width = 31
    Height = 13
    Caption = #1051#1080#1085#1080#1080
  end
  object Label3: TLabel
    Left = 16
    Top = 320
    Width = 26
    Height = 13
    Caption = #1054#1095#1082#1080
  end
  object Label4: TLabel
    Left = 332
    Top = 76
    Width = 58
    Height = 13
    Caption = #1059#1076#1077#1088#1078#1072#1085#1080#1077
  end
  object Label5: TLabel
    Left = 332
    Top = 216
    Width = 62
    Height = 13
    Caption = #1057#1083#1077#1076#1091#1102#1097#1080#1081
  end
  object Label6: TLabel
    Left = 332
    Top = 360
    Width = 37
    Height = 13
    Caption = #1056#1077#1082#1086#1088#1076
  end
  object StringGrid1: TStringGrid
    Left = 332
    Top = 95
    Width = 87
    Height = 87
    ColCount = 4
    DefaultColWidth = 20
    DefaultRowHeight = 20
    FixedCols = 0
    RowCount = 4
    FixedRows = 0
    TabOrder = 0
  end
  object StringGrid2: TStringGrid
    Left = 332
    Top = 233
    Width = 87
    Height = 87
    ColCount = 4
    DefaultColWidth = 20
    DefaultRowHeight = 20
    FixedCols = 0
    RowCount = 4
    FixedRows = 0
    TabOrder = 1
  end
  object Edit1: TEdit
    Left = 332
    Top = 379
    Width = 90
    Height = 21
    TabOrder = 2
  end
  object Edit2: TEdit
    Left = 16
    Top = 339
    Width = 74
    Height = 21
    TabOrder = 3
  end
  object Edit3: TEdit
    Left = 16
    Top = 275
    Width = 74
    Height = 21
    TabOrder = 4
  end
  object Edit4: TEdit
    Left = 16
    Top = 219
    Width = 74
    Height = 21
    TabOrder = 5
  end
  object StringGrid3: TStringGrid
    Left = 96
    Top = 24
    Width = 217
    Height = 425
    ColCount = 10
    DefaultColWidth = 20
    DefaultRowHeight = 20
    FixedCols = 0
    RowCount = 20
    FixedRows = 0
    TabOrder = 6
    OnDrawCell = StringGrid3DrawCell
    OnSelectCell = StringGrid3SelectCell
  end
  object MainMenu1: TMainMenu
    Left = 352
    Top = 65520
    object N1: TMenuItem
      Caption = #1048#1075#1088#1072
      object N3: TMenuItem
        Caption = #1055#1072#1091#1079#1072
      end
      object N5: TMenuItem
        Caption = #1053#1086#1074#1072#1103' '#1080#1075#1088#1072
        OnClick = N5Click
      end
    end
    object N2: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object N6: TMenuItem
        Caption = #1055#1088#1072#1074#1080#1083#1072
        OnClick = N6Click
      end
      object N7: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
        OnClick = N7Click
      end
    end
    object N4: TMenuItem
      Caption = #1042#1099#1093#1086#1076
      OnClick = N4Click
    end
  end
end
