/*
 * ProFTPD - FTP server daemon
 * Copyright (c) 2016 The ProFTPD Project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA 02110-1335, USA.
 *
 * As a special exemption, The ProFTPD Project and other respective copyright
 * holders give permission to link this program with OpenSSL, and distribute
 * the resulting executable, without including the source code for OpenSSL in
 * the source distribution.
 */

/* FSIO API with error support */

#ifndef PR_FSIO_ERR_H
#define PR_FSIO_ERR_H

#include "fsio.h"
#include "error.h"

pr_fh_t *pr_fsio_open_with_error(pool *p, const char *path, int flags,
  pr_error_t **err);

int pr_fsio_close_with_error(pool *p, pr_fh_t *fh, pr_error_t **err);

int pr_fsio_read_with_error(pool *p, pr_fh_t *fh, char *buf, size_t sz,
  pr_error_t **err);

int pr_fsio_write_with_error(pool *p, pr_fh_t *fh, const char *buf, size_t sz,
  pr_error_t **err);

int pr_fsio_stat_with_error(pool *p, const char *path, struct stat *st,
  pr_error_t **err);

int pr_fsio_unlink_with_error(pool *p, const char *path, pr_error_t **err);

int pr_fsio_rename_with_error(pool *p, const char *from, const char *to,
  pr_error_t **err);

int pr_fsio_mkdir_with_error(pool *p, const char *path, mode_t mode,
  pr_error_t **err);

int pr_fsio_rmdir_with_error(pool *p, const char *path, pr_error_t **err);

#endif /* PR_FSIO_ERR_H */