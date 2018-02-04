/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface _IXSimpleInstallerDelegate : NSObject <IXAppInstallCoordinatorObserver> {
    NSString * _bundleID;
    id /* block */  _completion;
    IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> * _coordinator;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleID;
- (id /* block */)completion;
- (id)coordinator;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCoordinator:(id)arg1;

@end
