package com.cyanogenmod.settings.dexclam;

import android.content.Context;
import android.preference.CheckBoxPreference;
import android.preference.Preference;
import android.preference.PreferenceActivity;
import android.os.Bundle;
import android.widget.Toast;

import java.io.File;

public class MainActivity extends PreferenceActivity implements Preference.OnPreferenceClickListener {

    private static final String TAG = "ZNZ930";
    private Preference designal;
    private Preference resignal;
    private static final boolean NOROOT = false;
    private static final boolean ROOT = true;
    private Context context;
    private RootCmd rootCmd;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        addPreferencesFromResource(R.xml.designal);
        context = this;
        rootCmd = new RootCmd();
        initPreference();
    }

    private void initPreference()
    {
        designal = (Preference)findPreference("designal");
        resignal = (Preference)findPreference("resignal");
        designal.setOnPreferenceClickListener(this);
        resignal.setOnPreferenceClickListener(this);
    }
    private boolean hasRoot()
    {
        File file = new File("/system/build.prop");
        boolean hasroot = file.exists();
        return hasroot;
    }

    private void  DeSignal()
    {
        if (hasRoot() == NOROOT)
        {
            Toast.makeText(context,R.string.main_noroot,Toast.LENGTH_SHORT).show();
        }
        else
        {
            rootCmd.toString("settings put global captive_portal_detection_enabled 0");
            Toast.makeText(context,R.string.main_disenable,Toast.LENGTH_SHORT).show();
        }
    }

    private void  ReSignal()
    {
        if (hasRoot() == ROOT)
        {
            rootCmd.toString("settings put global captive_portal_detection_enabled 1");
            Toast.makeText(context,R.string.main_enable,Toast.LENGTH_SHORT).show();
        }
    }

    @Override
    public boolean onPreferenceClick(Preference preference) {
        switch (preference.getKey())
        {
            case "designal":
                DeSignal();
                break;
            case  "resignal":
                ReSignal();
                break;
        }
        return true;
    }
}
