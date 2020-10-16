/*
 * Copyright 2015
 * Daniel Dinu, Dmitry Khovratovich, Jean-Philippe Aumasson, and Samuel Neves
 *
 * You may use this work under the terms of a Creative Commons CC0 1.0
 * License/Waiver or the Apache Public License 2.0, at your option. The terms of
 * these licenses can be found at:
 *
 * - CC0 1.0 Universal : https://creativecommons.org/publicdomain/zero/1.0
 * - Apache 2.0        : https://www.apache.org/licenses/LICENSE-2.0
 *
 * You should have received a copy of both of these licenses along with this
 * software. If not, they may be obtained at the above URLs.
 */

#ifndef ALG_ARGON2_ENCODING_H
#define ALG_ARGON2_ENCODING_H

#include <stdint.h>

size_t argon2_encode64 (char *dst, size_t dst_len, const uint8_t *src,
                        size_t src_len);
const char *argon2_decode64 (uint8_t *dst, size_t *dst_len, const char *src);

#endif