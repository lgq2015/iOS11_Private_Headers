/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetActionPerformer : NSObject {
    unsigned long long  _actionType;
    NSArray * _assets;
    NSDictionary * _assetsByAssetCollection;
    id /* block */  _completionHandler;
    <PUAssetActionPerformerDelegate> * _delegate;
    UIViewController * _presentedViewController;
    unsigned long long  _state;
}

@property (nonatomic, readonly) unsigned long long actionType;
@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly, copy) NSDictionary *assetsByAssetCollection;
@property (nonatomic) <PUAssetActionPerformerDelegate> *delegate;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (void)_completeStateWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_completeUnlockTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleStepFinished:(unsigned long long)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)_performUnlockIfNeeded;
- (bool)_requiresUnlockedDevice;
- (void)_transitionToState:(unsigned long long)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (unsigned long long)actionType;
- (id)assets;
- (id)assetsByAssetCollection;
- (void)completeBackgroundTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (void)completeUserInteractionTaskWithSuccess:(bool)arg1 error:(id)arg2;
- (id)delegate;
- (bool)dismissViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (bool)presentViewController:(id)arg1;
- (id)presentedViewController;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;

@end
