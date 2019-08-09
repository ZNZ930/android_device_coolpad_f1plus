package com.cyanogenmod.settings.dexclam;

import android.app.Activity;
import android.util.Log;
import android.widget.Toast;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.IOException;

public class RootCmd {
    private Activity activity;
    private DataInputStream dis = null;
    private DataOutputStream dos = null;
    private String TAG = "RootCmd-----";

    public void isRoot() {
        if (SetCmd("reboot") == -1) {
            Log.i(TAG, "Root failed");
        } else {
            Log.i(TAG, "Root Success");
        }
    }

    public int SetCmd(String cmd) {
        int result = 0;
        try {
            Process process = Runtime.getRuntime().exec("su");
            dos = new DataOutputStream(process.getOutputStream());
            dis = new DataInputStream(process.getErrorStream());
            dos.writeBytes(cmd + "\n");
            dos.flush();
            dos.writeBytes("exit\n");
            dos.flush();
            Log.i(TAG, String.valueOf(process.exitValue()));
            result = process.exitValue();
            process.waitFor();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (InterruptedException e) {
            e.printStackTrace();
        } finally {

            try {
                if (dos != null) {
                    dos.close();
                }
                if (dis != null) {
                    dis.close();
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return result;
    }

    public String toString(String cmd) {
        String result = null;
        try {
            Process process = Runtime.getRuntime().exec("su");
            dos = new DataOutputStream(process.getOutputStream());
            dis = new DataInputStream(process.getInputStream());
            dos.writeBytes(cmd + "\n");
            dos.flush();
            dos.writeBytes("exit\n");
            dos.flush();
            String line = "";
            while ((line = dis.readLine()) != null) {
                result += line;
            }
            if (result == null)
            {
                Log.i(TAG,"");
            }
            process.waitFor();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (InterruptedException e) {
            e.printStackTrace();
        } finally {

            try {
                if (dos != null) {
                    dos.close();
                }
                if (dis != null) {
                    dis.close();
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return result;
    }
}
