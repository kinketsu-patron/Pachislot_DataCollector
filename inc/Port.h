/**
 * =============================================================
 * @file        Port.h
 * @author      kinketsu patron (https://kinketsu-patron.com)
 * @brief       ポート設定ヘッダファイル
 * @version     1.0
 * @date        2024-06-08
 * =============================================================
 */

#ifndef __PORT_H__
#define __PORT_H__

// =======================================================
// ヘッダインクルード
// =======================================================
#include <Arduino.h>
#include "vtype.h"
#include "PinDefine.h"

// =======================================================
// 関数宣言
// =======================================================
extern void Port_Init( void );

#endif __PORT_H__