//-------------------------------------------------------------------------
/*
Copyright (C) 2010-2019 EDuke32 developers and contributors
Copyright (C) 2019 Nuke.YKT

This file is part of NBlood.

NBlood is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License version 2
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
//-------------------------------------------------------------------------
#include "compat.h"
#include "common.h"
#include "blood.h"
#include "dude.h"

DUDEINFO dudeInfo[kDudeMax-kDudeBase] = 
{
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4096, //seqStartId
        40, // startHp
        70, // mass
        1200, // ???
        48, // clipdist
        41, // eye height
        20, // aim height
        10240, // hear dist
        51200, // see dist
        512, // periphery
        0, // melee distance
        10, // flee health
        8, // hinder damage
        256, // change target chance
        16, // change target chance to same type
        32768, // alert chance
        1, // lockout
        46603, // front speed
        34952, // side speed
        13981, // back speed
        256, // ang speed
        15, -1, -1, // gib type
        256, 256, 96, 256, 256, 256, 192, // start damage
        0, 0, 0, 0, 0, 0, 0, // real damage
        0, // ???
        0 // ???
    },
    {
        11520,
        40,
        70,
        1200,
        48,
        41,
        20,
        10240,
        51200,
        512,
        0,
        10,
        5,
        256,
        16,
        32768,
        1,
        34952,
        34952,
        13981,
        256,
        15, -1, -1,
        256, 256, 128, 256, 256, 256, 192,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4352,
        60,
        70,
        1200,
        48,
        46,
        20,
        10240,
        51200,
        512,
        0,
        10,
        15,
        256,
        16,
        32768,
        1,
        58254,
        46603,
        34952,
        384,
        15, -1, -1,
        256, 256, 112, 256, 256, 256, 160,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4608,
        80,
        200,
        1200,
        48,
        128,
        20,
        10240,
        51200,
        512,
        0,
        10,
        15,
        256,
        16,
        32768,
        1,
        23301,
        23301,
        13981,
        256,
        15, -1, -1,
        256, 256, 32, 128, 256, 64, 128,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4352,
        60,
        70,
        1200,
        48,
        46,
        20,
        5120,
        0,
        341,
        0,
        10,
        15,
        256,
        16,
        32768,
        1,
        58254,
        46603,
        34952,
        384,
        15, -1, -1,
        256, 256, 112, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4864,
        110,
        120,
        1200,
        64,
        13,
        5,
        10240,
        51200,
        512,
        0,
        10,
        25,
        256,
        16,
        32768,
        1,
        46603,
        34952,
        23301,
        384,
        30, -1, -1,
        0, 128, 48, 208, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        5120,
        200,
        200,
        1200,
        84,
        13,
        5,
        10240,
        51200,
        512,
        0,
        10,
        20,
        256,
        16,
        32768,
        1,
        46603,
        34952,
        23301,
        256,
        19, -1, -1,
        0, 0, 10, 10, 0, 128, 64,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        11008,
        100,
        200,
        1200,
        64,
        13,
        5,
        2048,
        5120,
        512,
        0,
        10,
        15,
        256,
        16,
        32768,
        0,
        0,
        0,
        0,
        0,
        -1, -1, -1,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        11264,
        100,
        200,
        1200,
        64,
        13,
        5,
        2048,
        5120,
        512,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        0,
        0,
        0,
        0,
        -1, -1, -1,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        5376,
        100,
        70,
        1200,
        64,
        25,
        15,
        10240,
        51200,
        341,
        0,
        10,
        10,
        256,
        0,
        32768,
        1,
        58254,
        46603,
        34952,
        384,
        -1, -1, -1,
        0, 0, 48, 0, 0, 16, 0,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        5632,
        70,
        120,
        1200,
        80,
        6,
        0,
        10240,
        51200,
        682,
        0,
        10,
        20,
        256,
        16,
        32768,
        0,
        116508,
        81555,
        69905,
        384,
        29, -1, -1,
        48, 0, 48, 48, 256, 128, 192,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        5888,
        10,
        70,
        1200,
        32,
        0,
        0,
        5120,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        58254,
        46603,
        34952,
        384,
        7, -1, -1,
        64, 256, 256, 256, 0, 64, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        6144,
        10,
        5,
        1200,
        32,
        -5,
        -5,
        5120,
        51200,
        682,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        58254,
        46603,
        34952,
        384,
        7, -1, -1,
        64, 256, 256, 96, 256, 64, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        6400,
        25,
        10,
        1200,
        32,
        -5,
        -5,
        5120,
        51200,
        682,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        58254,
        46603,
        34952,
        384,
        7, -1, -1,
        64, 128, 256, 96, 256, 64, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        6656,
        75,
        20,
        1200,
        32,
        -5,
        -5,
        5120,
        51200,
        682,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        58254,
        46603,
        34952,
        384,
        7, -1, -1,
        128, 256, 256, 96, 256, 64, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        6912,
        100,
        40,
        1200,
        32,
        -5,
        -5,
        5120,
        51200,
        682,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        58254,
        46603,
        34952,
        384,
        7, -1, -1,
        32, 16, 16, 16, 32, 32, 32,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        7168,
        50,
        200,
        1200,
        64,
        37,
        20,
        5120,
        51200,
        682,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        58254,
        46603,
        34952,
        384,
        7, -1, -1,
        48, 80, 64, 128, 0, 128, 48,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        7424,
        25,
        30,
        1200,
        32,
        4,
        0,
        5120,
        51200,
        512,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        34952,
        23301,
        23301,
        128,
        7, -1, -1,
        256, 256, 256, 256, 0, 256, 192,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        7680,
        10,
        5,
        1200,
        32,
        2,
        0,
        10240,
        25600,
        512,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        23301,
        23301,
        13981,
        384,
        7, -1, -1,
        256, 256, 256, 256, 256, 64, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        7936,
        10,
        5,
        1200,
        32,
        3,
        0,
        12800,
        51200,
        512,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        58254,
        46603,
        34952,
        384,
        7, -1, -1,
        256, 256, 256, 256, 256, 128, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        8192,
        50,
        65535,
        1200,
        64,
        40,
        0,
        2048,
        11264,
        1024,
        0,
        10,
        10,
        256,
        0,
        32768,
        0,
        0,
        0,
        0,
        384,
        7, -1, -1,
        160, 160, 128, 160, 0, 0, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        8448,
        10,
        65535,
        1200,
        32,
        0,
        0,
        2048,
        5120,
        1024,
        0,
        10,
        10,
        256,
        0,
        32768,
        0,
        0,
        0,
        0,
        384,
        7, -1, -1,
        256, 256, 256, 80, 0, 0, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        8704,
        100,
        65535,
        1200,
        64,
        40,
        0,
        2048,
        15360,
        1024,
        0,
        10,
        10,
        256,
        0,
        32768,
        0,
        0,
        0,
        0,
        384,
        7, -1, -1,
        96, 0, 128, 64, 256, 64, 160,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        8960,
        20,
        65535,
        1200,
        32,
        0,
        0,
        2048,
        5120,
        1024,
        0,
        10,
        10,
        256,
        0,
        32768,
        0,
        0,
        0,
        0,
        384,
        7, -1, -1,
        128, 0, 128, 128, 0, 0, 128,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        9216,
        200,
        65535,
        1200,
        64,
        40,
        0,
        2048,
        51200,
        1024,
        0,
        10,
        10,
        256,
        0,
        32768,
        0,
        0,
        0,
        0,
        0,
        7, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        9472,
        50,
        65535,
        1200,
        32,
        0,
        0,
        2048,
        51200,
        1024,
        0,
        10,
        10,
        256,
        0,
        32768,
        0,
        0,
        0,
        0,
        0,
        7, -1, -1,
        256, 256, 128, 256, 128, 128, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        9728,
        200,
        1000,
        1200,
        64,
        29,
        10,
        40960,
        102400,
        682,
        0,
        10,
        10,
        256,
        0,
        32768,
        0,
        69905,
        58254,
        46603,
        384,
        7, -1, -1,
        16, 0, 16, 16, 0, 96, 48,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        9984,
        100,
        1000,
        1200,
        64,
        29,
        10,
        20480,
        51200,
        682,
        0,
        10,
        10,
        256,
        0,
        32768,
        0,
        58254,
        34952,
        25631,
        384,
        7, -1, -1,
        16, 0, 16, 16, 0, 96, 48,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        10240,
        32, // 800,
        1500,
        1200,
        128,
        0,
        0,
        25600,
        51200,
        512,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        58254,
        58254,
        34952,
        384,
        7, -1, -1,
        3, 1, 4, 4, 0, 4, 3,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4096,
        25,
        20,
        1200,
        32,
        0,
        0,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        58254,
        46603,
        34952,
        384,
        15, -1, -1,
        256, 256, 96, 256, 256, 256, 192,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12032,
        100,
        70,
        1200,
        48,
        0,
        16,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        0,
        0,
        0,
        64,
        15, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12032,
        100,
        70,
        1200,
        48,
        0,
        16,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        0,
        0,
        0,
        64,
        15, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12032,
        100,
        70,
        1200,
        48,
        0,
        16,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        0,
        0,
        0,
        64,
        15, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12032,
        100,
        70,
        1200,
        48,
        0,
        16,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        0,
        0,
        0,
        64,
        15, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12032,
        100,
        70,
        1200,
        48,
        0,
        16,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        0,
        0,
        0,
        64,
        15, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12032,
        100,
        70,
        1200,
        48,
        0,
        16,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        0,
        0,
        0,
        64,
        15, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12032,
        100,
        70,
        1200,
        48,
        0,
        16,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        0,
        0,
        0,
        64,
        15, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12032,
        100,
        70,
        1200,
        48,
        0,
        16,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        0,
        0,
        0,
        64,
        15, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12544,
        25,
        70,
        1200,
        48,
        41,
        20,
        10240,
        51200,
        341,
        0,
        100,
        100,
        0,
        0,
        32768,
        0,
        0,
        0,
        0,
        160,
        7, 5, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4096,
        30,
        70,
        1200,
        48,
        41,
        20,
        10240,
        51200,
        341,
        0,
        100,
        100,
        0,
        0,
        32768,
        0,
        46603,
        34952,
        13981,
        160,
        7, 5, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4352,
        12,
        70,
        1200,
        48,
        46,
        20,
        10240,
        51200,
        341,
        0,
        10,
        15,
        256,
        16,
        32768,
        0,
        58254,
        46603,
        34952,
        160,
        7, 5, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4352,
        25,
        120,
        1200,
        48,
        44,
        20,
        10240,
        51200,
        341,
        0,
        10,
        15,
        256,
        16,
        32768,
        0,
        39612,
        27962,
        13981,
        100,
        7, 5, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4096,
        100,
        70,
        1200,
        64,
        38,
        20,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        0,
        0,
        0,
        64,
        15, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        4352,
        60,
        70,
        1200,
        48,
        46,
        20,
        5120,
        0,
        341,
        0,
        10,
        15,
        256,
        16,
        32768,
        1,
        58254,
        46603,
        34952,
        384,
        15, -1, -1,
        256, 256, 112, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12544,
        50,
        70,
        1200,
        48,
        46,
        20,
        2560,
        0,
        341,
        0,
        10,
        8,
        256,
        16,
        32768,
        1,
        58254,
        46603,
        34952,
        384,
        15, -1, -1,
        288, 288, 288, 288, 288, 288, 288,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        11520,
        25,
        70,
        1200,
        32,
        -5,
        0,
        2048,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        0,
        0,
        0,
        64,
        7, 5, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        12800,
        40,
        70,
        1200,
        48,
        41,
        20,
        10240,
        51200,
        512,
        0,
        10,
        8,
        256,
        16,
        32768,
        1,
        46603,
        34952,
        13981,
        256,
        15, -1, -1,
        256, 256, 96, 160, 256, 256, 12,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        13056,
        40,
        70,
        1200,
        48,
        41,
        20,
        10240,
        51200,
        512,
        0,
        10,
        8,
        256,
        16,
        32768,
        1,
        46603,
        34952,
        13981,
        256,
        15, -1, -1,
        256, 160, 96, 64, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        13312,
        40,
        70,
        1200,
        48,
        41,
        20,
        10240,
        51200,
        512,
        0,
        10,
        12,
        256,
        16,
        32768,
        1,
        46603,
        34952,
        13981,
        256,
        15, -1, -1,
        128, 128, 16, 16, 0, 64, 48,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        13568,
        10,
        5,
        1200,
        32,
        3,
        0,
        12800,
        51200,
        512,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        58254,
        46603,
        34952,
        384,
        7, -1, -1,
        160, 160, 160, 160, 256, 128, 288,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        10752,
        120,
        70,
        1200,
        48,
        41,
        20,
        12800,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        116508,
        81555,
        69905,
        384,
        7, -1, -1,
        5, 5, 15, 8, 0, 15, 15,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        13568,
        10,
        5,
        1200,
        32,
        3,
        0,
        12800,
        51200,
        512,
        0,
        10,
        10,
        256,
        16,
        32768,
        0,
        58254,
        46603,
        34952,
        384,
        7, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    {
        10752,
        25,
        70,
        1200,
        48,
        41,
        20,
        12800,
        51200,
        341,
        0,
        10,
        10,
        256,
        16,
        32768,
        1,
        116508,
        81555,
        69905,
        384,
        7, -1, -1,
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    //254 -  kDudeModernCustom
    {
        11520,		                        // start sequence ID
        85,		                            // start health
        75,			                        // mass
        120,
        48,			                        // clip distance
        48,			                        // eye above z
        20,
        10240,		                        // hear distance
        51200,	                            // seeing distance
        kAng120,	                        // vision periphery
        //			    0,
        618,                                // melee distance
        5,			                        // flee health
        5,			                        // hinder damage
        0x0000,		                        // change target chance
        0x0000,		                        // change target to kin chance
        0x8000,		                        // alertChance
        0,		                            // lockout
        46603,		                        // frontSpeed
        34952,		                        // sideSpeed
        13981,		                        // backSpeed
        256,		                        // angSpeed
        //			    0,
        7,	-1, 18,	                        // nGibType
        128, 150, 128, 256, 128, 128, 128,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },
    //255 -  kDudeModernCustomBurning
    {
        4096,		// start sequence ID
        25,			// start health
        5,			// mass
        120,
        48,			// clip distance
        41,			// eye above z
        20,
        12800,		// hear distance
        51200,		// seeing distance
        kAng60,	// vision periphery
        //						0,
        0,			// melee distance
        10,			// flee health
        10,			// hinder damage
        0x0100,		// change target chance
        0x0010,		// change target to kin chance
        0x8000,		// alertChance
        true,		// lockout
        58254,			// frontSpeed
        46603,			// sideSpeed
        34952,			// backSpeed
        384,			// angSpeed
        //              0,
        7,	-1, -1,		// nGibType
        256, 256, 256, 256, 256, 256, 256,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    }
};

DUDEINFO gPlayerTemplate[4] = 
{
    // normal human
    {
        0x2f00,
        100,
        70,
        1200,
        0x30,
        0,
        0x10,
        0x800,
        0xc800,
        0x155,
        0,
        10,
        10,
        0x100,
        0x10,
        0x8000,
        0x1,
        0,
        0,
        0,
        0x40,
        15, -1, -1,
        0x100, 0x100, 0x100, 0x100, 0x100, 0x100, 0x120,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },

    // normal beast
    {
        0x2900,
        100,
        70,
        1200,
        0x30,
        0,
        0x14,
        0x800,
        0xc800,
        0x155,
        0,
        10,
        10,
        0x100,
        0x10,
        0x8000,
        0x1,
        0,
        0,
        0,
        0x40,
        7, -1, -1,
        0x100, 0x100, 0x100, 0x100, 0x100, 0x100, 0x120,
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },

    // shrink human
    {
        12032,
        100,
        10, // mass
        1200,
        16, // clipdist
        0,
        0x10,
        0x800,
        0xc800,
        0x155,
        0,
        10,
        10,
        0x100,
        0x10,
        0x8000,
        0x1,
        0,
        0,
        0,
        0x40,
        15, -1, -1, // gib type
        1024, 1024, 1024, 1024, 256, 1024, 1024, //damage shift
        0, 0, 0, 0, 0, 0, 0,
        0,
        0
    },

     // grown human
     {
         12032,
         100,
         1100, // mass
         1200,
         100, // clipdist
         0,
         0x10,
         0x800,
         0xc800,
         0x155,
         0,
         10,
         10,
         0x100,
         0x10,
         0x8000,
         0x1,
         0,
         0,
         0,
         0x40,
         15, 7, 7, // gib type
         64, 64, 64, 64, 256, 64, 64, // damage shift
         0, 0, 0, 0, 0, 0, 0,
         0,
         0
     },
};

DUDEINFO fakeDudeInfo = {};
