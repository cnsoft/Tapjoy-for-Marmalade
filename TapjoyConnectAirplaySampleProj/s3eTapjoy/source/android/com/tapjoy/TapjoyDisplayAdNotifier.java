package com.tapjoy;

import android.view.View;

/**
 * 
 * Notifier class which sends callbacks whenever receiving Featured App data/response.
 *
 */
public interface TapjoyDisplayAdNotifier
{
	/**
	 * Callback containing Featured App data.
	 * @param featuredApObject			Object containing the Featured App data.
	 */
	public void getDisplayAdResponse(View adView);
	
	
	/**
	 * Callback when there is no Featured App data returned from the server. 
	 * This may be called when there are no Featured Apps available.
	 * @param error						Error message.
	 */
	public void getDisplayAdResponseFailed(String error);
}