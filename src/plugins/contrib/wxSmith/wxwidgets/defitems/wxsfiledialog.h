/** \file wxsfiledialog.h
*
* This file is part of wxSmith plugin for Code::Blocks Studio
* Copyright (C) 2007  Bartlomiej Swiecki
*
* wxSmith is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
*
* wxSmith is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with wxSmith. If not, see <http://www.gnu.org/licenses/>.
*
* $Revision: 7109 $
* $Id: wxsfiledialog.h 7109 2011-04-15 11:53:16Z mortenmacfly $
* $HeadURL: svn://svn.code.sf.net/p/codeblocks/code/branches/release-20.xx/src/plugins/contrib/wxSmith/wxwidgets/defitems/wxsfiledialog.h $
*/

#ifndef WXSFILEDIALOG_H
#define WXSFILEDIALOG_H

#include "../wxstool.h"

class wxsFileDialog: public wxsTool
{
    public:

        wxsFileDialog(wxsItemResData* Data);

    private:

        virtual void OnBuildCreatingCode();
        virtual void OnEnumToolProperties(long Flags);

        wxString m_Message;
        wxString m_DefaultDir;
        wxString m_DefaultFile;
        wxString m_Wildcard;
};

#endif