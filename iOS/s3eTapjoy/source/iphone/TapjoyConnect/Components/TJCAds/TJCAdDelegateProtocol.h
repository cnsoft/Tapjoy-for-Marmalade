/*
 *  TJCAdDelegateProtocol.h
 *
 *  Created by Tapjoy.
 *  Copyright 2010 Tapjoy. All rights reserved.
 *
 */

#import <UIKit/UIKit.h>

@class TJCAdView;


/*!	\protocol TJCAdDelegate
 *	\brief The Tapjoy Ad Delegate Protocol.
 */
@protocol TJCAdDelegate <NSObject>

@required

/*!	\fn didRecieveAd:(TJCAdView*)adView
 *	\brief This method is invoked when data for a Tapjoy Ad has successfully been retrieved.
 *
 * Once this method has been invoked, the Ad view can safely be set visible and on top of the view stack.
 *	\param adView The Tapjoy Ad view.
 *	\return n/a
 */
- (void) didRecieveAd:(TJCAdView*)adView;

/*!	\fn didFailWithMessage:(NSString*)msg
 *	\brief When this is invoked, it most likely means that this app does not have any Tapjoy Ads associated with it.
 *
 *	\param msg A string containing a description of the fail error.
 *	\return n/a
 */
- (void) didFailWithMessage:(NSString*)msg;

/*!	\fn adContentSize
 *	\brief The request for the Ad requires a content size parameter, which needs to be provided here.
 *
 *	\param n/a
 *	\return Must return one of #TJC_AD_BANNERSIZE_320X50 or #TJC_AD_BANNERSIZE_640X100 or #TJC_AD_BANNERSIZE_768x90.
 */
- (NSString*) adContentSize;

/*!	\fn shouldRefreshAd
 *	\brief This method will indicate whether to refresh the Ad periodically. When this method returns YES, Ads are automatically refreshed every 15 seconds.
 *
 *	\param n/a
 *	\return YES will indicate that Ads should be automatically refreshed every 15 seconds, NO for no refreshing. 
 */
- (BOOL) shouldRefreshAd;

@end
