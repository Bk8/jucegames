/***********************************************************************
* This is a JUCE based computer realization of the Hangman game.       *
* 17-28 June 2016                                                      *
* Copyright (C) 2016 by Andrey N. Kuznetsov, Almaty, Kazakhstan.       *
* E-mail: linmedsoft@gmail.com                                         *
*                                                                      *
* This programme is free software; you can redistribute it and/or      *
* modify it under the terms of the GNU General Public License          *
* as published by the Free Software Foundation; either version 2       *
* of the named License, or any later version.                          *
*                                                                      *
* This program is distributed in the hope that it will be useful,      *
* but WITHOUT ANY WARRANTY; without even the implied warranty of       *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the         *
* GNU General Public License for more details.                         *
*                                                                      *
* You should have received a copy of the GNU General Public License    *
* along with this program; if not, write to the Free Software          *
* Foundation, Inc., 59 Temple Place, Suite 330, Boston,                *
* MA 02111-1307, USA                                                   *
************************************************************************/
#ifndef _TThemeComboBox_h_
#define _TThemeComboBox_h_
//---------------------------------------------------------------------
#include "../JuceLibraryCode/JuceHeader.h"
//---------------------------------------------------------------------
class TThemeComboBox : public ToolbarItemComponent,
                       public ComboBoxListener
{
public:
    TThemeComboBox(const int iToolbarItemId);
    ~TThemeComboBox();

    bool getToolbarItemSizes(int, bool, int&, int&, int&);
    void paintButtonArea(Graphics&, int, int, bool, bool);
    void contentAreaChanged(const Rectangle<int>&);

    void comboBoxChanged(ComboBox*);
    
    void SetTheme(int);
    int iGetImageNumber();
    
    void LanguageChange(LocalisedStrings&);
    
    Image Background_Image;
    
private:
    ComboBox ThemeComboBox;
    
    Array<Image> Images;
    
    int iImageNumber;
};
//---------------------------------------------------------------------
#endif
