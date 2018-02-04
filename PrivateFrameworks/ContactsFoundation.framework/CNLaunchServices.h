/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNLaunchServices : NSObject {
    <CNLaunchServicesAdapter> * _adapter;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) <CNLaunchServicesAdapter> *adapter;
@property (nonatomic, retain) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)adapter;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)init;
- (id)initWithAdapter:(id)arg1;
- (id)log;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAdapter:(id)arg1;
- (void)setLog:(id)arg1;

@end
