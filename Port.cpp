/**
 * =============================================================
 * @file        Port.cpp
 * @author      kinketsu patron (https://kinketsu-patron.com)
 * @brief       ポート設定
 * @version     1.0
 * @date        2024-06-08
 * =============================================================
 */

// =======================================================
// ヘッダインクルード
// =======================================================
#include "inc/Port.h"

/**
 * =======================================================
 * @fn         Port_Init
 * @brief      ポートの初期設定を行う
 * @date       2024-06-08
 * =======================================================
 */
void Port_Init( void )
{
        pinMode( IN_PIN, INPUT );         // 6番ピンを"IN"信号の入力モードに設定する
        pinMode( OUT_PIN, INPUT );        // 5番ピンを"OUT"信号の入力モードに設定する
        pinMode( RB_PIN, INPUT );         // 4番ピンを"RB"信号の入力モードに設定する
        pinMode( BB_PIN, INPUT );         // 3番ピンを"BB"信号の入力モードに設定する
}