<?php

/**
 * smb Driver
 *
 * Driver that adds functionality to change the systems user password via
 * the 'smbpasswd' command.
 *
 * For installation instructions please read the README file.
 *
 * @version 2.0
 *
 * @author Andy Theuninck <gohanman@gmail.com)
 *
 * Based on chpasswd roundcubemail password driver by
 * @author Alex Cartwright <acartwright@mutinydesign.co.uk)
 * and smbpasswd horde passwd driver by
 * @author  Rene Lund Jensen <Rene@lundjensen.net>
 *
 * Configuration settings:
 * password_smb_host    => samba host (default: localhost)
 * password_smb_cmd => smbpasswd binary (default: /usr/bin/smbpasswd)
 *
 * Copyright (C) The Roundcube Dev Team
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see https://www.gnu.org/licenses/.
 */

class rcube_smb_password
{
    public function save($currpass, $newpass, $username)
    {
        $host = rcmail::get_instance()->config->get('password_smb_host', 'localhost');
        $bin = rcmail::get_instance()->config->get('password_smb_cmd', '/usr/bin/smbpasswd');
        $host = rcube_utils::parse_host($host);
        $tmpfile = tempnam(sys_get_temp_dir(), 'smb');
        $cmd = $bin . ' -r ' . escapeshellarg($host) . ' -s -U ' . escapeshellarg($username) . ' > ' . $tmpfile . ' 2>&1';
        $handle = @popen($cmd, 'w');

        fwrite($handle, $currpass . "\n");
        fwrite($handle, $newpass . "\n");
        fwrite($handle, $newpass . "\n");
        @pclose($handle);
        $res = file($tmpfile);
        unlink($tmpfile);

        if (strstr($res[count($res) - 1], 'Password changed for user') !== false) {
            return PASSWORD_SUCCESS;
        }

        rcube::raise_error("Password plugin: Unable to execute {$cmd}", true);

        return PASSWORD_ERROR;
    }
}
