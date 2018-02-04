/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADOptInManager : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate> {
    ADAdSheetConnection * _connection;
}

@property (nonatomic, retain) ADAdSheetConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void)adSheetConnectionInterrupted;
- (id)adSheetMachServiceName;
- (id)additionalAdSheetLaunchOptions;
- (void)configureConnection:(id)arg1;
- (id)connection;
- (void)dealloc;
- (void)getiAdIDsWithCompletionHandler:(id /* block */)arg1;
- (void)handleAccountChange;
- (void)handlePushNotification:(id)arg1;
- (id)init;
- (void)primeAdSheetDataStore;
- (void)refreshOptInStatus;
- (void)refreshOptInStatusRefreshingWeakToken:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setOptInStatus:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)shouldLaunchAdSheet;

@end
