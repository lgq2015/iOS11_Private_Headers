/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXRestoringDemotedAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithUserDataPromise, IXUserInitiatedCoordinator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUserDataPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;
+ (void)enumerateCoordinatorsUsingBlock:(id /* block */)arg1;
+ (bool)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;

- (bool)hasUserDataPromise;
- (bool)isUserInitiated;
- (bool)setUserDataPromise:(id)arg1 error:(id*)arg2;
- (void)setUserInitiated:(bool)arg1;
- (id)userDataPromiseWithError:(id*)arg1;
- (id)userDataRestoreShouldBegin:(bool*)arg1;
- (id)validInstallTypes;

@end
