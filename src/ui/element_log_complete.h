// rTorrent - BitTorrent client
// Copyright (C) 2005, Jari Sundell
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// Contact:  Jari Sundell <jaris@ifi.uio.no>
//
//           Skomakerveien 33
//           3185 Skoppum, NORWAY

#ifndef RTORRENT_UI_ELEMENT_LOG_COMPLETE_H
#define RTORRENT_UI_ELEMENT_LOG_COMPLETE_H

#include "core/log.h"

#include "element_base.h"

namespace display {
  class WindowLogComplete;
}

namespace ui {

class Control;

class ElementLogComplete : public ElementBase {
public:
  typedef display::WindowLogComplete    WLogComplete;

  ElementLogComplete(core::Log* l);

  void                activate(Control* c, MItr mItr);
  void                disable(Control* c);

private:
  WLogComplete*       m_window;
  
  core::Log*          m_log;
};

}

#endif