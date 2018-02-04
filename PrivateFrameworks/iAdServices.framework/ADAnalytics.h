/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAnalytics : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate> {
    ADAdSheetConnection * _connection;
}

@property (nonatomic, retain) ADAdSheetConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)adSheetMachServiceName;
- (id)additionalAdSheetLaunchOptions;
- (void)configureConnection:(id)arg1;
- (id)connection;
- (id)init;
- (void)setConnection:(id)arg1;
- (bool)shouldLaunchAdSheet;

@end
