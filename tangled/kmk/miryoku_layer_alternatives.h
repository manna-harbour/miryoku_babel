// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: kmk

#pragma once


#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
KC.A,              KC.Z,              KC.E,              KC.R,              KC.T,              KC.Y,              KC.U,              KC.I,              KC.O,              KC.P,              \
U_MT(KC.Q,KC.LGUI),U_MT(KC.S,KC.LALT),U_MT(KC.D,KC.LCTL),U_MT(KC.F,KC.LSFT),KC.G,              KC.H,              U_MT(KC.J,KC.LSFT),U_MT(KC.K,KC.LCTL),U_MT(KC.L,KC.LALT),U_MT(KC.M,KC.LGUI),\
U_LT(U_BUTTON,KC.W),U_MT(KC.X,KC.RALT),KC.C,              KC.V,              KC.B,              KC.N,              KC.COMM,           KC.DOT,            U_MT(KC.SLSH,KC.RALT),U_LT(U_BUTTON,KC.QUOT),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
KC.Q,              KC.H,              KC.O,              KC.U,              KC.X,              KC.G,              KC.C,              KC.R,              KC.F,              KC.Z,              \
U_MT(KC.Y,KC.LGUI),U_MT(KC.I,KC.LALT),U_MT(KC.E,KC.LCTL),U_MT(KC.A,KC.LSFT),KC.DOT,            KC.D,              U_MT(KC.S,KC.LSFT),U_MT(KC.T,KC.LCTL),U_MT(KC.N,KC.LALT),U_MT(KC.B,KC.LGUI),\
U_LT(U_BUTTON,KC.J),U_MT(KC.SLSH,KC.RALT),KC.COMM,           KC.K,              KC.QUOT,           KC.W,              KC.M,              KC.L,              U_MT(KC.P,KC.RALT),U_LT(U_BUTTON,KC.V),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.G,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
U_MT(KC.A,KC.LGUI),U_MT(KC.R,KC.LALT),U_MT(KC.S,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.D,              KC.H,              U_MT(KC.N,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.I,KC.LALT),U_MT(KC.O,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.C,              KC.V,              KC.B,              KC.K,              KC.M,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.B,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
U_MT(KC.A,KC.LGUI),U_MT(KC.R,KC.LALT),U_MT(KC.S,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.G,              KC.M,              U_MT(KC.N,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.I,KC.LALT),U_MT(KC.O,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.C,              KC.D,              KC.V,              KC.K,              KC.H,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.B,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
U_MT(KC.A,KC.LGUI),U_MT(KC.R,KC.LALT),U_MT(KC.S,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.G,              KC.K,              U_MT(KC.N,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.I,KC.LALT),U_MT(KC.O,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.C,              KC.D,              KC.V,              KC.M,              KC.H,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
KC.QUOT,           KC.COMM,           KC.DOT,            KC.P,              KC.Y,              KC.F,              KC.G,              KC.C,              KC.R,              KC.L,              \
U_MT(KC.A,KC.LGUI),U_MT(KC.O,KC.LALT),U_MT(KC.E,KC.LCTL),U_MT(KC.U,KC.LSFT),KC.I,              KC.D,              U_MT(KC.H,KC.LSFT),U_MT(KC.T,KC.LCTL),U_MT(KC.N,KC.LALT),U_MT(KC.S,KC.LGUI),\
U_LT(U_BUTTON,KC.SLSH),U_MT(KC.Q,KC.RALT),KC.J,              KC.K,              KC.X,              KC.B,              KC.M,              KC.W,              U_MT(KC.V,KC.RALT),U_LT(U_BUTTON,KC.Z),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
KC.W,              KC.L,              KC.R,              KC.B,              KC.Z,              KC.QUOT,           KC.Q,              KC.U,              KC.D,              KC.J,              \
U_MT(KC.S,KC.LGUI),U_MT(KC.H,KC.LALT),U_MT(KC.N,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.COMM,           KC.DOT,            U_MT(KC.A,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.O,KC.LALT),U_MT(KC.I,KC.LGUI),\
U_LT(U_BUTTON,KC.F),U_MT(KC.M,KC.RALT),KC.V,              KC.C,              KC.SLSH,           KC.G,              KC.P,              KC.X,              U_MT(KC.K,KC.RALT),U_LT(U_BUTTON,KC.Y),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
KC.Q,              KC.D,              KC.R,              KC.W,              KC.B,              KC.J,              KC.F,              KC.U,              KC.P,              KC.QUOT,           \
U_MT(KC.A,KC.LGUI),U_MT(KC.S,KC.LALT),U_MT(KC.H,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.G,              KC.Y,              U_MT(KC.N,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.O,KC.LALT),U_MT(KC.I,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.M,              KC.C,              KC.V,              KC.K,              KC.L,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
KC.Q,              KC.W,              KC.E,              KC.R,              KC.T,              KC.Y,              KC.U,              KC.I,              KC.O,              KC.P,              \
U_MT(KC.A,KC.LGUI),U_MT(KC.S,KC.LALT),U_MT(KC.D,KC.LCTL),U_MT(KC.F,KC.LSFT),KC.G,              KC.H,              U_MT(KC.J,KC.LSFT),U_MT(KC.K,KC.LCTL),U_MT(KC.L,KC.LALT),U_MT(KC.QUOT,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.C,              KC.V,              KC.B,              KC.N,              KC.M,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
KC.Q,              KC.W,              KC.E,              KC.R,              KC.T,              KC.Z,              KC.U,              KC.I,              KC.O,              KC.P,              \
U_MT(KC.A,KC.LGUI),U_MT(KC.S,KC.LALT),U_MT(KC.D,KC.LCTL),U_MT(KC.F,KC.LSFT),KC.G,              KC.H,              U_MT(KC.J,KC.LSFT),U_MT(KC.K,KC.LCTL),U_MT(KC.L,KC.LALT),U_MT(KC.QUOT,KC.LGUI),\
U_LT(U_BUTTON,KC.Y),U_MT(KC.X,KC.RALT),KC.C,              KC.V,              KC.B,              KC.N,              KC.M,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_FUN,KC.DEL),U_LT(U_NUM,KC.BSPC),U_LT(U_SYM,KC.ENT),U_LT(U_MOUSE,KC.TAB),U_LT(U_NAV,KC.SPC),U_LT(U_MEDIA,KC.ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
KC.A,              KC.Z,              KC.E,              KC.R,              KC.T,              KC.Y,              KC.U,              KC.I,              KC.O,              KC.P,              \
U_MT(KC.Q,KC.LGUI),U_MT(KC.S,KC.LALT),U_MT(KC.D,KC.LCTL),U_MT(KC.F,KC.LSFT),KC.G,              KC.H,              U_MT(KC.J,KC.LSFT),U_MT(KC.K,KC.LCTL),U_MT(KC.L,KC.LALT),U_MT(KC.M,KC.LGUI),\
U_LT(U_BUTTON,KC.W),U_MT(KC.X,KC.RALT),KC.C,              KC.V,              KC.B,              KC.N,              KC.COMM,           KC.DOT,            U_MT(KC.SLSH,KC.RALT),U_LT(U_BUTTON,KC.QUOT),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
KC.Q,              KC.H,              KC.O,              KC.U,              KC.X,              KC.G,              KC.C,              KC.R,              KC.F,              KC.Z,              \
U_MT(KC.Y,KC.LGUI),U_MT(KC.I,KC.LALT),U_MT(KC.E,KC.LCTL),U_MT(KC.A,KC.LSFT),KC.DOT,            KC.D,              U_MT(KC.S,KC.LSFT),U_MT(KC.T,KC.LCTL),U_MT(KC.N,KC.LALT),U_MT(KC.B,KC.LGUI),\
U_LT(U_BUTTON,KC.J),U_MT(KC.SLSH,KC.RALT),KC.COMM,           KC.K,              KC.QUOT,           KC.W,              KC.M,              KC.L,              U_MT(KC.P,KC.RALT),U_LT(U_BUTTON,KC.V),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.G,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
U_MT(KC.A,KC.LGUI),U_MT(KC.R,KC.LALT),U_MT(KC.S,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.D,              KC.H,              U_MT(KC.N,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.I,KC.LALT),U_MT(KC.O,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.C,              KC.V,              KC.B,              KC.K,              KC.M,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.B,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
U_MT(KC.A,KC.LGUI),U_MT(KC.R,KC.LALT),U_MT(KC.S,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.G,              KC.M,              U_MT(KC.N,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.I,KC.LALT),U_MT(KC.O,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.C,              KC.D,              KC.V,              KC.K,              KC.H,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.B,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
U_MT(KC.A,KC.LGUI),U_MT(KC.R,KC.LALT),U_MT(KC.S,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.G,              KC.K,              U_MT(KC.N,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.I,KC.LALT),U_MT(KC.O,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.C,              KC.D,              KC.V,              KC.M,              KC.H,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
KC.QUOT,           KC.COMM,           KC.DOT,            KC.P,              KC.Y,              KC.F,              KC.G,              KC.C,              KC.R,              KC.L,              \
U_MT(KC.A,KC.LGUI),U_MT(KC.O,KC.LALT),U_MT(KC.E,KC.LCTL),U_MT(KC.U,KC.LSFT),KC.I,              KC.D,              U_MT(KC.H,KC.LSFT),U_MT(KC.T,KC.LCTL),U_MT(KC.N,KC.LALT),U_MT(KC.S,KC.LGUI),\
U_LT(U_BUTTON,KC.SLSH),U_MT(KC.Q,KC.RALT),KC.J,              KC.K,              KC.X,              KC.B,              KC.M,              KC.W,              U_MT(KC.V,KC.RALT),U_LT(U_BUTTON,KC.Z),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
KC.W,              KC.L,              KC.R,              KC.B,              KC.Z,              KC.QUOT,           KC.Q,              KC.U,              KC.D,              KC.J,              \
U_MT(KC.S,KC.LGUI),U_MT(KC.H,KC.LALT),U_MT(KC.N,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.COMM,           KC.DOT,            U_MT(KC.A,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.O,KC.LALT),U_MT(KC.I,KC.LGUI),\
U_LT(U_BUTTON,KC.F),U_MT(KC.M,KC.RALT),KC.V,              KC.C,              KC.SLSH,           KC.G,              KC.P,              KC.X,              U_MT(KC.K,KC.RALT),U_LT(U_BUTTON,KC.Y),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
KC.Q,              KC.D,              KC.R,              KC.W,              KC.B,              KC.J,              KC.F,              KC.U,              KC.P,              KC.QUOT,           \
U_MT(KC.A,KC.LGUI),U_MT(KC.S,KC.LALT),U_MT(KC.H,KC.LCTL),U_MT(KC.T,KC.LSFT),KC.G,              KC.Y,              U_MT(KC.N,KC.LSFT),U_MT(KC.E,KC.LCTL),U_MT(KC.O,KC.LALT),U_MT(KC.I,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.M,              KC.C,              KC.V,              KC.K,              KC.L,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
KC.Q,              KC.W,              KC.E,              KC.R,              KC.T,              KC.Y,              KC.U,              KC.I,              KC.O,              KC.P,              \
U_MT(KC.A,KC.LGUI),U_MT(KC.S,KC.LALT),U_MT(KC.D,KC.LCTL),U_MT(KC.F,KC.LSFT),KC.G,              KC.H,              U_MT(KC.J,KC.LSFT),U_MT(KC.K,KC.LCTL),U_MT(KC.L,KC.LALT),U_MT(KC.QUOT,KC.LGUI),\
U_LT(U_BUTTON,KC.Z),U_MT(KC.X,KC.RALT),KC.C,              KC.V,              KC.B,              KC.N,              KC.M,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
KC.Q,              KC.W,              KC.E,              KC.R,              KC.T,              KC.Z,              KC.U,              KC.I,              KC.O,              KC.P,              \
U_MT(KC.A,KC.LGUI),U_MT(KC.S,KC.LALT),U_MT(KC.D,KC.LCTL),U_MT(KC.F,KC.LSFT),KC.G,              KC.H,              U_MT(KC.J,KC.LSFT),U_MT(KC.K,KC.LCTL),U_MT(KC.L,KC.LALT),U_MT(KC.QUOT,KC.LGUI),\
U_LT(U_BUTTON,KC.Y),U_MT(KC.X,KC.RALT),KC.C,              KC.V,              KC.B,              KC.N,              KC.M,              KC.COMM,           U_MT(KC.DOT,KC.RALT),U_LT(U_BUTTON,KC.SLSH),\
U_NP,              U_NP,              U_LT(U_MEDIA,KC.ESC),U_LT(U_NAV,KC.SPC),U_LT(U_MOUSE,KC.TAB),U_LT(U_SYM,KC.ENT),U_LT(U_NUM,KC.BSPC),U_LT(U_FUN,KC.DEL),U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
KC.A,              KC.Z,              KC.E,              KC.R,              KC.T,              KC.Y,              KC.U,              KC.I,              KC.O,              KC.P,              \
KC.Q,              KC.S,              KC.D,              KC.F,              KC.G,              KC.H,              KC.J,              KC.K,              KC.L,              KC.M,              \
KC.W,              KC.X,              KC.C,              KC.V,              KC.B,              KC.N,              KC.COMM,           KC.DOT,            KC.SLSH,           KC.QUOT,           \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
KC.Q,              KC.H,              KC.O,              KC.U,              KC.X,              KC.G,              KC.C,              KC.R,              KC.F,              KC.Z,              \
KC.Y,              KC.I,              KC.E,              KC.A,              KC.DOT,            KC.D,              KC.S,              KC.T,              KC.N,              KC.B,              \
KC.J,              KC.SLSH,           KC.COMM,           KC.K,              KC.QUOT,           KC.W,              KC.M,              KC.L,              KC.P,              KC.V,              \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.G,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
KC.A,              KC.R,              KC.S,              KC.T,              KC.D,              KC.H,              KC.N,              KC.E,              KC.I,              KC.O,              \
KC.Z,              KC.X,              KC.C,              KC.V,              KC.B,              KC.K,              KC.M,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.B,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
KC.A,              KC.R,              KC.S,              KC.T,              KC.G,              KC.M,              KC.N,              KC.E,              KC.I,              KC.O,              \
KC.Z,              KC.X,              KC.C,              KC.D,              KC.V,              KC.K,              KC.H,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.B,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
KC.A,              KC.R,              KC.S,              KC.T,              KC.G,              KC.K,              KC.N,              KC.E,              KC.I,              KC.O,              \
KC.Z,              KC.X,              KC.C,              KC.D,              KC.V,              KC.M,              KC.H,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
KC.QUOT,           KC.COMM,           KC.DOT,            KC.P,              KC.Y,              KC.F,              KC.G,              KC.C,              KC.R,              KC.L,              \
KC.A,              KC.O,              KC.E,              KC.U,              KC.I,              KC.D,              KC.H,              KC.T,              KC.N,              KC.S,              \
KC.SLSH,           KC.Q,              KC.J,              KC.K,              KC.X,              KC.B,              KC.M,              KC.W,              KC.V,              KC.Z,              \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
KC.W,              KC.L,              KC.R,              KC.B,              KC.Z,              KC.QUOT,           KC.Q,              KC.U,              KC.D,              KC.J,              \
KC.S,              KC.H,              KC.N,              KC.T,              KC.COMM,           KC.DOT,            KC.A,              KC.E,              KC.O,              KC.I,              \
KC.F,              KC.M,              KC.V,              KC.C,              KC.SLSH,           KC.G,              KC.P,              KC.X,              KC.K,              KC.Y,              \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
KC.Q,              KC.D,              KC.R,              KC.W,              KC.B,              KC.J,              KC.F,              KC.U,              KC.P,              KC.QUOT,           \
KC.A,              KC.S,              KC.H,              KC.T,              KC.G,              KC.Y,              KC.N,              KC.E,              KC.O,              KC.I,              \
KC.Z,              KC.X,              KC.M,              KC.C,              KC.V,              KC.K,              KC.L,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
KC.Q,              KC.W,              KC.E,              KC.R,              KC.T,              KC.Y,              KC.U,              KC.I,              KC.O,              KC.P,              \
KC.A,              KC.S,              KC.D,              KC.F,              KC.G,              KC.H,              KC.J,              KC.K,              KC.L,              KC.QUOT,           \
KC.Z,              KC.X,              KC.C,              KC.V,              KC.B,              KC.N,              KC.M,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
KC.Q,              KC.W,              KC.E,              KC.R,              KC.T,              KC.Z,              KC.U,              KC.I,              KC.O,              KC.P,              \
KC.A,              KC.S,              KC.D,              KC.F,              KC.G,              KC.H,              KC.J,              KC.K,              KC.L,              KC.QUOT,           \
KC.Y,              KC.X,              KC.C,              KC.V,              KC.B,              KC.N,              KC.M,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            KC.TAB,            KC.SPC,            KC.ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
KC.A,              KC.Z,              KC.E,              KC.R,              KC.T,              KC.Y,              KC.U,              KC.I,              KC.O,              KC.P,              \
KC.Q,              KC.S,              KC.D,              KC.F,              KC.G,              KC.H,              KC.J,              KC.K,              KC.L,              KC.M,              \
KC.W,              KC.X,              KC.C,              KC.V,              KC.B,              KC.N,              KC.COMM,           KC.DOT,            KC.SLSH,           KC.QUOT,           \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
KC.Q,              KC.H,              KC.O,              KC.U,              KC.X,              KC.G,              KC.C,              KC.R,              KC.F,              KC.Z,              \
KC.Y,              KC.I,              KC.E,              KC.A,              KC.DOT,            KC.D,              KC.S,              KC.T,              KC.N,              KC.B,              \
KC.J,              KC.SLSH,           KC.COMM,           KC.K,              KC.QUOT,           KC.W,              KC.M,              KC.L,              KC.P,              KC.V,              \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.G,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
KC.A,              KC.R,              KC.S,              KC.T,              KC.D,              KC.H,              KC.N,              KC.E,              KC.I,              KC.O,              \
KC.Z,              KC.X,              KC.C,              KC.V,              KC.B,              KC.K,              KC.M,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.B,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
KC.A,              KC.R,              KC.S,              KC.T,              KC.G,              KC.M,              KC.N,              KC.E,              KC.I,              KC.O,              \
KC.Z,              KC.X,              KC.C,              KC.D,              KC.V,              KC.K,              KC.H,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
KC.Q,              KC.W,              KC.F,              KC.P,              KC.B,              KC.J,              KC.L,              KC.U,              KC.Y,              KC.QUOT,           \
KC.A,              KC.R,              KC.S,              KC.T,              KC.G,              KC.K,              KC.N,              KC.E,              KC.I,              KC.O,              \
KC.Z,              KC.X,              KC.C,              KC.D,              KC.V,              KC.M,              KC.H,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
KC.QUOT,           KC.COMM,           KC.DOT,            KC.P,              KC.Y,              KC.F,              KC.G,              KC.C,              KC.R,              KC.L,              \
KC.A,              KC.O,              KC.E,              KC.U,              KC.I,              KC.D,              KC.H,              KC.T,              KC.N,              KC.S,              \
KC.SLSH,           KC.Q,              KC.J,              KC.K,              KC.X,              KC.B,              KC.M,              KC.W,              KC.V,              KC.Z,              \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
KC.W,              KC.L,              KC.R,              KC.B,              KC.Z,              KC.QUOT,           KC.Q,              KC.U,              KC.D,              KC.J,              \
KC.S,              KC.H,              KC.N,              KC.T,              KC.COMM,           KC.DOT,            KC.A,              KC.E,              KC.O,              KC.I,              \
KC.F,              KC.M,              KC.V,              KC.C,              KC.SLSH,           KC.G,              KC.P,              KC.X,              KC.K,              KC.Y,              \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
KC.Q,              KC.D,              KC.R,              KC.W,              KC.B,              KC.J,              KC.F,              KC.U,              KC.P,              KC.QUOT,           \
KC.A,              KC.S,              KC.H,              KC.T,              KC.G,              KC.Y,              KC.N,              KC.E,              KC.O,              KC.I,              \
KC.Z,              KC.X,              KC.M,              KC.C,              KC.V,              KC.K,              KC.L,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
KC.Q,              KC.W,              KC.E,              KC.R,              KC.T,              KC.Y,              KC.U,              KC.I,              KC.O,              KC.P,              \
KC.A,              KC.S,              KC.D,              KC.F,              KC.G,              KC.H,              KC.J,              KC.K,              KC.L,              KC.QUOT,           \
KC.Z,              KC.X,              KC.C,              KC.V,              KC.B,              KC.N,              KC.M,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
KC.Q,              KC.W,              KC.E,              KC.R,              KC.T,              KC.Z,              KC.U,              KC.I,              KC.O,              KC.P,              \
KC.A,              KC.S,              KC.D,              KC.F,              KC.G,              KC.H,              KC.J,              KC.K,              KC.L,              KC.QUOT,           \
KC.Y,              KC.X,              KC.C,              KC.V,              KC.B,              KC.N,              KC.M,              KC.COMM,           KC.DOT,            KC.SLSH,           \
U_NP,              U_NP,              KC.ESC,            KC.SPC,            KC.TAB,            KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
KC.PGUP,           KC.HOME,           KC.UP,             KC.END,            KC.INS,            U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_BOOT,            \
KC.PGDN,           KC.LEFT,           KC.DOWN,           KC.RGHT,           U_CW,              U_NA,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              U_DF(U_NAV),       U_DF(U_NUM),       KC.RALT,           U_NA,              \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_FLIP \
KC.HOME,           KC.PGDN,           KC.PGUP,           KC.END,            KC.INS,            U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_BOOT,            \
KC.LEFT,           KC.DOWN,           KC.UP,             KC.RGHT,           U_CW,              U_NA,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              U_DF(U_NAV),       U_DF(U_NUM),       KC.RALT,           U_NA,              \
U_NP,              U_NP,              KC.DEL,            KC.BSPC,           KC.ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              KC.INS,            KC.HOME,           KC.UP,             KC.END,            KC.PGUP,           \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              U_CW,              KC.LEFT,           KC.DOWN,           KC.RGHT,           KC.PGDN,           \
U_NA,              KC.RALT,           U_DF(U_NUM),       U_DF(U_NAV),       U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              KC.LEFT,           KC.DOWN,           KC.UP,             KC.RGHT,           U_CW,              \
U_NA,              KC.RALT,           U_DF(U_NUM),       U_DF(U_NAV),       U_NA,              KC.HOME,           KC.PGDN,           KC.PGUP,           KC.END,            KC.INS,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              U_CW,              KC.LEFT,           KC.DOWN,           KC.UP,             KC.RGHT,           \
U_NA,              KC.RALT,           U_DF(U_NUM),       U_DF(U_NAV),       U_NA,              KC.INS,            KC.HOME,           KC.PGDN,           KC.PGUP,           KC.END,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.ENT,            KC.BSPC,           KC.DEL,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
KC.MW_UP,          U_NU,              KC.MS_UP,          U_NU,              U_NU,              U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_BOOT,            \
KC.MW_DN,          KC.MS_LT,          KC.MS_DN,          KC.MS_RT,          U_NU,              U_NA,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              U_DF(U_MOUSE),     U_DF(U_SYM),       KC.RALT,           U_NA,              \
U_NP,              U_NP,              KC.MB_MMB,         KC.MB_LMB,         KC.MB_RMB,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
U_NU,              KC.MW_DN,          KC.MW_UP,          U_NU,              U_NU,              U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_BOOT,            \
KC.MS_LT,          KC.MS_DN,          KC.MS_UP,          KC.MS_RT,          U_NU,              U_NA,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              U_DF(U_MOUSE),     U_DF(U_SYM),       KC.RALT,           U_NA,              \
U_NP,              U_NP,              KC.MB_MMB,         KC.MB_LMB,         KC.MB_RMB,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              U_NU,              U_NU,              KC.MS_UP,          U_NU,              KC.MW_UP,          \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              U_NU,              KC.MS_LT,          KC.MS_DN,          KC.MS_RT,          KC.MW_DN,          \
U_NA,              KC.RALT,           U_DF(U_SYM),       U_DF(U_MOUSE),     U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.MB_RMB,         KC.MB_LMB,         KC.MB_MMB,         U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              KC.MS_LT,          KC.MS_DN,          KC.MS_UP,          KC.MS_RT,          U_NU,              \
U_NA,              KC.RALT,           U_DF(U_SYM),       U_DF(U_MOUSE),     U_NA,              U_NU,              KC.MW_DN,          KC.MW_UP,          U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.MB_RMB,         KC.MB_LMB,         KC.MB_MMB,         U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              U_NU,              KC.MS_LT,          KC.MS_DN,          KC.MS_UP,          KC.MS_RT,          \
U_NA,              KC.RALT,           U_DF(U_SYM),       U_DF(U_MOUSE),     U_NA,              U_NU,              U_NU,              KC.MW_DN,          KC.MW_UP,          U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.MB_RMB,         KC.MB_LMB,         KC.MB_MMB,         U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
U_RGB_HUI,         U_RGB_SAI,         KC.VOLU,           U_RGB_VAI,         U_RGB_TOG,         U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_BOOT,            \
U_RGB_MOD,         KC.MPRV,           KC.VOLD,           KC.MNXT,           KC.PS_TOG,         U_NA,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
U_NU,              U_NU,              U_NU,              U_NU,              KC.HID,            U_NA,              U_DF(U_MEDIA),     U_DF(U_FUN),       KC.RALT,           U_NA,              \
U_NP,              U_NP,              KC.MUTE,           KC.MPLY,           KC.MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
U_RGB_MOD,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_VAI,         U_RGB_TOG,         U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_BOOT,            \
KC.MPRV,           KC.VOLD,           KC.VOLU,           KC.MNXT,           KC.PS_TOG,         U_NA,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
U_NU,              U_NU,              U_NU,              U_NU,              KC.HID,            U_NA,              U_DF(U_MEDIA),     U_DF(U_FUN),       KC.RALT,           U_NA,              \
U_NP,              U_NP,              KC.MUTE,           KC.MPLY,           KC.MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              U_RGB_TOG,         U_RGB_MOD,         KC.VOLU,           U_RGB_HUI,         U_RGB_SAI,         \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              KC.PS_TOG,         KC.MPRV,           KC.VOLD,           KC.MNXT,           U_RGB_VAI,         \
U_NA,              KC.RALT,           U_DF(U_FUN),       U_DF(U_MEDIA),     U_NA,              KC.HID,            U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.MSTP,           KC.MPLY,           KC.MUTE,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              U_RGB_MOD,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_VAI,         U_RGB_TOG,         \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              KC.MPRV,           KC.VOLD,           KC.VOLU,           KC.MNXT,           KC.PS_TOG,         \
U_NA,              KC.RALT,           U_DF(U_FUN),       U_DF(U_MEDIA),     U_NA,              U_NU,              U_NU,              U_NU,              U_NU,              KC.HID,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.MSTP,           KC.MPLY,           KC.MUTE,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              U_RGB_TOG,         U_RGB_MOD,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_VAI,         \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              KC.PS_TOG,         KC.MPRV,           KC.VOLD,           KC.VOLU,           KC.MNXT,           \
U_NA,              KC.RALT,           U_DF(U_FUN),       U_DF(U_MEDIA),     U_NA,              KC.HID,            U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.MSTP,           KC.MPLY,           KC.MUTE,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              KC.LBRC,           KC.N7,             KC.N8,             KC.N9,             KC.RBRC,           \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              KC.EQL,            KC.N4,             KC.N5,             KC.N6,             KC.SCLN,           \
U_NA,              KC.RALT,           U_DF(U_NAV),       U_DF(U_NUM),       U_NA,              KC.BSLS,           KC.N1,             KC.N2,             KC.N3,             KC.GRV,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.MINS,           KC.N0,             KC.DOT,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
KC.LBRC,           KC.N7,             KC.N8,             KC.N9,             KC.RBRC,           U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_BOOT,            \
KC.SCLN,           KC.N4,             KC.N5,             KC.N6,             KC.EQL,            U_NA,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
KC.GRV,            KC.N1,             KC.N2,             KC.N3,             KC.BSLS,           U_NA,              U_DF(U_NUM),       U_DF(U_NAV),       KC.RALT,           U_NA,              \
U_NP,              U_NP,              KC.DOT,            KC.N0,             KC.MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              KC.LCBR,           KC.AMPR,           KC.ASTR,           KC.LPRN,           KC.RCBR,           \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              KC.PLUS,           KC.DLR,            KC.PERC,           KC.CIRC,           KC.COLN,           \
U_NA,              KC.RALT,           U_DF(U_MOUSE),     U_DF(U_SYM),       U_NA,              KC.PIPE,           KC.EXLM,           KC.AT,             KC.HASH,           KC.TILD,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.UNDS,           KC.LPRN,           KC.RPRN,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
KC.LCBR,           KC.AMPR,           KC.ASTR,           KC.LPRN,           KC.RCBR,           U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_BOOT,            \
KC.COLN,           KC.DLR,            KC.PERC,           KC.CIRC,           KC.PLUS,           U_NA,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
KC.TILD,           KC.EXLM,           KC.AT,             KC.HASH,           KC.PIPE,           U_NA,              U_DF(U_SYM),       U_DF(U_MOUSE),     KC.RALT,           U_NA,              \
U_NP,              U_NP,              KC.LPRN,           KC.RPRN,           KC.UNDS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
U_BOOT,            U_DF(U_TAP),       U_DF(U_EXTRA),     U_DF(U_BASE),      U_NA,              KC.PSCR,           KC.F7,             KC.F8,             KC.F9,             KC.F12,            \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NA,              KC.SLCK,           KC.F4,             KC.F5,             KC.F6,             KC.F11,            \
U_NA,              KC.RALT,           U_DF(U_MEDIA),     U_DF(U_FUN),       U_NA,              KC.PAUS,           KC.F1,             KC.F2,             KC.F3,             KC.F10,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC.TAB,            KC.SPC,            KC.APP,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
KC.F12,            KC.F7,             KC.F8,             KC.F9,             KC.PSCR,           U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_BOOT,            \
KC.F11,            KC.F4,             KC.F5,             KC.F6,             KC.SLCK,           U_NA,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
KC.F10,            KC.F1,             KC.F2,             KC.F3,             KC.PAUS,           U_NA,              U_DF(U_FUN),       U_DF(U_MEDIA),     KC.RALT,           U_NA,              \
U_NP,              U_NP,              KC.APP,            KC.SPC,            KC.TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC.LGUI,           KC.LALT,           KC.LCTL,           KC.LSFT,           U_NU,              U_NU,              KC.LSFT,           KC.LCTL,           KC.LALT,           KC.LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              KC.MB_MMB,         KC.MB_LMB,         KC.MB_RMB,         KC.MB_RMB,         KC.MB_LMB,         KC.MB_MMB,         U_NP,              U_NP
