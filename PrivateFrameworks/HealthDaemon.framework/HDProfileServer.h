/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDProfileServer : HDSubserver <HDProfileServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_deleteProfile:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_getAllProfilesWithCompletion:(id /* block */)arg1;
- (void)remote_setDisplayName:(id)arg1 completion:(id /* block */)arg2;

@end
