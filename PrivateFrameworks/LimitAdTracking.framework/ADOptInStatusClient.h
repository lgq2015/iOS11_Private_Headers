/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LimitAdTracking.framework/LimitAdTracking
 */

@interface ADOptInStatusClient : NSObject

+ (id)sharedInstance;

- (void)advertisingIdentifierChanged:(id /* block */)arg1;
- (void)refreshOptInStatus;
- (void)refreshOptInStatusRefreshingWeakToken:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setOptInStatus:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
