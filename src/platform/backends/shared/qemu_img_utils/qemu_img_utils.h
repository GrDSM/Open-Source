/*
 * Copyright (C) Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MULTIPASS_QEMU_IMG_UTILS_H
#define MULTIPASS_QEMU_IMG_UTILS_H

#include <multipass/path.h>
#include <multipass/platform.h>

namespace multipass
{
class MemorySize;
class QemuImgProcessSpec;

namespace backend
{
Process::UPtr checked_exec_qemu_img(std::unique_ptr<QemuImgProcessSpec> spec,
                                    const std::string& custom_error_prefix = "Internal error");
void resize_instance_image(const MemorySize& disk_space, const multipass::Path& image_path);
Path convert_to_qcow_if_necessary(const Path& image_path);
bool instance_image_has_snapshot(const Path& image_path, QString snapshot_tag);

} // namespace backend
} // namespace multipass
#endif // MULTIPASS_QEMU_IMG_UTILS_H
