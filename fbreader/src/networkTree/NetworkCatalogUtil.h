/*
 * Copyright (C) 2009-2010 Geometer Plus <contact@geometerplus.com>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef __NETWORKCATALOGUTIL_H__
#define __NETWORKCATALOGUTIL_H__

#include <string>

#include <shared_ptr.h>

class ZLImage;

class NetworkCatalogUtil {

public:
	static shared_ptr<ZLImage> getImageByUrl(const std::string &url);

private:
	static shared_ptr<ZLImage> getImageByNetworkUrl(const std::string &url, const std::string &prefix);
	static shared_ptr<ZLImage> getImageByFileUrl(const std::string &url);
	static shared_ptr<ZLImage> getImageByDataUrl(const std::string &url);

private:
	NetworkCatalogUtil();
};

#endif /* __NETWORKCATALOGUTIL_H__ */
