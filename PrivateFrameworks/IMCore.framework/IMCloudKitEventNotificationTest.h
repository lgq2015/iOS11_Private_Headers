/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitEventNotificationTest : IMRuntimeTestCase <IMCloudKitEventHandler> {
    IMCloudKitHookTestSingleton * _cloudKitHooks;
}

@property (nonatomic, retain) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
- (id)cloudKitHooks;
- (void)setCloudKitHooks:(id)arg1;
- (void)setUp;
- (void)tearDown;

@end
