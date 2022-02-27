package org.qtproject.example;

import android.content.Intent;
import android.content.Context;
import android.content.BroadcastReceiver;

public class QtWrapperBroadcastReceiver extends BroadcastReceiver
{
    private long m_id;

    private native void receive(long id, Context context, Intent intent);

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
