// Copyright (c) 2017-2020 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#ifndef LAO_AUTOMATA_H
#define LAO_AUTOMATA_H

#include "automatabase.h"
#include <QLocale>

class LaoAutomata: public AutomataBase
{

public:
    LaoAutomata()
    {
        addNumberKeys();
        addNormalKeys();
        addShiftedKeys();
        addAltKeysForHID();
    }

    void setPreedit(const QString &preeditString, int cursorPos)
    {
        Q_UNUSED(cursorPos);
        m_surroundingText = preeditString;
    }

    bool isPredictionSupported()
    {
        return false;
    }

    static AutomataBase* create()
    {
        return new LaoAutomata();
    }

private:
    void addNumberKeys()
    {
        m_keymap.insert(0x60,QString(0x22));
        m_keymap.insert(0x31,QString(0x0EA2));
        m_keymap.insert(0x32,QString(0x0E9F));
        m_keymap.insert(0x33,QString(0x0EC2));
        m_keymap.insert(0x34,QString(0x0E96));
        m_keymap.insert(0x35,QString(0x0EB8));
        m_keymap.insert(0x36,QString(0x0EB9));
        m_keymap.insert(0x37,QString(0x0E84));
        m_keymap.insert(0x38,QString(0x0E95));
        m_keymap.insert(0x39,QString(0x0E88));
        m_keymap.insert(0x30,QString(0x0E82));
        m_keymap.insert(0x2D,QString(0x0E8A));
        m_keymap.insert(0x3D,QString(0x0ECD));
    }

    void addNormalKeys()
    {
        m_keymap.insert(0x71,QString(0x0EBB));
        m_keymap.insert(0x77,QString(0x0EC4));
        m_keymap.insert(0x65,QString(0x0EB3));
        m_keymap.insert(0x72,QString(0x0E9E));
        m_keymap.insert(0x74,QString(0x0EB0));
        m_keymap.insert(0x79,QString(0x0EB4));
        m_keymap.insert(0x75,QString(0x0EB5));
        m_keymap.insert(0x69,QString(0x0EAE));
        m_keymap.insert(0x6F,QString(0x0E99));
        m_keymap.insert(0x70,QString(0x0E8D));
        m_keymap.insert(0x5B,QString(0X0E9A));
        m_keymap.insert(0x5D,QString(0X0EA5));
        m_keymap.insert(0x5C,QString(0X002F));
        m_keymap.insert(0x61,QString(0x0EB1));
        m_keymap.insert(0x73,QString(0x0EAB));
        m_keymap.insert(0x64,QString(0x0E81));
        m_keymap.insert(0x66,QString(0x0E94));
        m_keymap.insert(0x67,QString(0x0EC0));
        m_keymap.insert(0x68,QString(0x0EC9));
        m_keymap.insert(0x6A,QString(0x0EC8));
        m_keymap.insert(0x6B,QString(0x0EB2));
        m_keymap.insert(0x6C,QString(0x0EAA));
        m_keymap.insert(0x3B,QString(0x0EA7));
        m_keymap.insert(0x27,QString(0x0E87));
        m_keymap.insert(0x7A,QString(0x0E9C));
        m_keymap.insert(0x78,QString(0x0E9B));
        m_keymap.insert(0x63,QString(0x0EC1));
        m_keymap.insert(0x76,QString(0x0EAD));
        m_keymap.insert(0x62,QString(0x0EB6));
        m_keymap.insert(0x6E,QString(0x0EB7));
        m_keymap.insert(0x6D,QString(0x0E97));
        m_keymap.insert(0x2C,QString(0x0EA1));
        m_keymap.insert(0x2E,QString(0x0EC3));
        m_keymap.insert(0x2F,QString(0x0E9D));
        m_keymap.insert(0x20,QString(0x20));
    }

    void addShiftedKeys()
    {
        m_keymap.insert(0x7E,QString(0x27));
        m_keymap.insert(0x21,QString(0x0031));
        m_keymap.insert(0x40,QString(0x0032));
        m_keymap.insert(0x23,QString(0x0033));
        m_keymap.insert(0x24,QString(0x0034));
        m_keymap.insert(0x25,QString(0x0ECC));
        m_keymap.insert(0x5E,QString(0x0EBC));
        m_keymap.insert(0x26,QString(0x0035));
        m_keymap.insert(0x2A,QString(0x0036));
        m_keymap.insert(0x28,QString(0x0037));
        m_keymap.insert(0x29,QString(0x0038));
        m_keymap.insert(0x5F,QString(0x0039));
        m_keymap.insert(0x2B,QString("\u0ecd\u0ec8"));
        m_keymap.insert(0x51,QString("\u0ebb\u0ec9"));
        m_keymap.insert(0x57,QString(0x0030));
        m_keymap.insert(0x45,QString(0x002A));
        m_keymap.insert(0x52,QString(0x005F));
        m_keymap.insert(0x54,QString(0x002B));
        m_keymap.insert(0x59,QString("\u0eb4\u0ec9"));
        m_keymap.insert(0x55,QString("\u0eb5\u0ec9"));
        m_keymap.insert(0x49,QString(0x0EA3));
        m_keymap.insert(0x4F,QString(0x0EDC));
        m_keymap.insert(0x50,QString(0x0EBD));
        m_keymap.insert(0x7B,QString(0x002D));
        m_keymap.insert(0x7D,QString("\u0eab\u0ebc"));
        m_keymap.insert(0x41,QString("\u0eb1\u0ec9"));
        m_keymap.insert(0x53,QString(0x003B));
        m_keymap.insert(0x44,QString(0x002E));
        m_keymap.insert(0x46,QString(0x002C));
        m_keymap.insert(0x47,QString(0x003A));
        m_keymap.insert(0x48,QString(0x0ECA));
        m_keymap.insert(0x4A,QString(0x0ECB));
        m_keymap.insert(0x4B,QString(0x0021));
        m_keymap.insert(0x4C,QString(0x003F));
        m_keymap.insert(0x3A,QString(0x0025));
        m_keymap.insert(0x22,QString(0x003D));
        m_keymap.insert(0x7C,QString(0x005C));
        m_keymap.insert(0x5A,QString(0x20ad));
        m_keymap.insert(0x58,QString(0x0028));
        m_keymap.insert(0x43,QString(0x0eaf));
        m_keymap.insert(0x56,QString(0x0078));
        m_keymap.insert(0x42,QString("\u0eb6\u0ec9"));
        m_keymap.insert(0x4E,QString("\u0eb7\u0ec9"));
        m_keymap.insert(0x4D,QString(0x0EC6));
        m_keymap.insert(0x3C,QString(0x0EDD));
        m_keymap.insert(0x3E,QString(0x0024));
        m_keymap.insert(0x3F,QString(0x0029));
    }

    void addAltKeysForHID()
    {
      m_keymap.insert(0xA0,QString(0x0ED1));
      m_keymap.insert(0xA1,QString(0x0ED2));
      m_keymap.insert(0xA2,QString(0x0ED3));
      m_keymap.insert(0xA3,QString(0x0ED4));
      m_keymap.insert(0xA4,QString(0x0ED5));
      m_keymap.insert(0xA5,QString(0x0ED6));
      m_keymap.insert(0xA6,QString(0x0ED7));
      m_keymap.insert(0xA7,QString(0x0ED8));
      m_keymap.insert(0xA8,QString(0x0ED9));
      m_keymap.insert(0xA9,QString(0x0ED0));
    }
};

#endif // LAO_AUTOMATA_H
