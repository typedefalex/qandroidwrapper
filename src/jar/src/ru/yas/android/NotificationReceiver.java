package org.qtproject.example;

import android.app.Service;
import android.os.IBinder;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.widget.Toast;
import 	android.os.Handler;
import	android.os.Looper;

import android.app.Notification;
import android.app.NotificationManager;
import android.content.Context;
import android.graphics.BitmapFactory;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;

public class QtWrapperBroadcastReceiver extends BroadcastReceiver
{
    private long m_id;

    public static native void receive(long id, Context context, Intent intent);

    public QtWrapperBroadcastReceiver(long id)
    {
        m_id = id;
    }

    public void setId(long id)
    {
        synchronized(this)
        {
            m_id = id;
        }
    }

    @Override
    public void onReceive(Context context, Intent intent)
    {
        synchronized(this)
        {
            receive(m_id, context, intent);
        }
    }
}
