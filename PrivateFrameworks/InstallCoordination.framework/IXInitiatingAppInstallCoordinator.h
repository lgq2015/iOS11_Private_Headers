/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXInitiatingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithAutoEnablingExtensionTypes, IXCoordinatorWithInitialODRAssetPromises, IXCoordinatorWithInstallOptions, IXUserInitiatedCoordinator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppAssetPromise;
@property (nonatomic, readonly) bool hasAutoEnabledExtensionTypes;
@property (nonatomic, readonly) bool hasInitialODRAssetPromises;
@property (nonatomic, readonly) bool hasInstallOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;
+ (void)enumerateCoordinatorsUsingBlock:(id /* block */)arg1;
+ (bool)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;

- (bool)appAssetPromiseHasBegunFulfillment:(bool*)arg1 error:(id*)arg2;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id*)arg1;
- (id)appAssetPromiseWithError:(id*)arg1;
- (bool)hasAppAssetPromise;
- (bool)hasAutoEnabledExtensionTypes;
- (bool)hasInitialODRAssetPromises;
- (bool)hasInstallOptions;
- (id)initialODRAssetPromisesWithError:(id*)arg1;
- (bool)isUserInitiated;
- (bool)setAppAssetPromise:(id)arg1 error:(id*)arg2;
- (bool)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setAutoEnabledExtensionTypes:(id)arg1 error:(id*)arg2;
- (bool)setInitialODRAssetPromises:(id)arg1 error:(id*)arg2;
- (bool)setInstallOptions:(id)arg1 error:(id*)arg2;
- (void)setUserInitiated:(bool)arg1;
- (id)validInstallTypes;

@end
