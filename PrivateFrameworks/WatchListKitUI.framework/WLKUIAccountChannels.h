/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIAccountChannels : IKJSObject <WLKUIAccountChannelsInterface> {
    VSAccountStore * _accountStore;
}

@property (nonatomic, retain) VSAccountStore *accountStore;

- (void).cxx_destruct;
- (void)_sendVideoSubscriberChangedNotificationToTheJavaScript;
- (id)accountStore;
- (void)dealloc;
- (void)fetchMSOProviderStatus:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (void)setAccountStore:(id)arg1;

@end
