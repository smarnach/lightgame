// Copyright 2019 by Thomas Köppe
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "game_keygrabber.h"

#include <QtGui/QKeyEvent>

namespace tkware::lightgame {

bool KeyGrabber::eventFilter(QObject* obj, QEvent* event) {
  if (event->type() == QEvent::KeyPress) {
    QKeyEvent* key_event = static_cast<QKeyEvent*>(event);
    if (key_event->modifiers() == Qt::NoModifier &&
        Qt::Key_Left <= key_event->key() && key_event->key() <= Qt::Key_Down) {
      emit gameChanged(3, key_event->key(), 0);
      return true;
    }
  }
  return QObject::eventFilter(obj, event);
}

}  //  namespace tkware::lightgame
