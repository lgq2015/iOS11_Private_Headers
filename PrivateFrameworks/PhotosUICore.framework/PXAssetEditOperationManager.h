/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetEditOperationManager : NSObject {
    NSMapTable * _observersWithContexts;
    NSMutableDictionary * _operationStatusByAsset;
    NSMutableDictionary * _pendingPerformersByAsset;
    NSMutableArray * _predicateRecords;
}

@property (nonatomic, readonly) NSMapTable *observersWithContexts;
@property (nonatomic, readonly) NSMutableDictionary *operationStatusByAsset;
@property (nonatomic, readonly) NSMutableDictionary *pendingPerformersByAsset;
@property (nonatomic, readonly) NSMutableArray *predicateRecords;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addPendingPerformer:(id)arg1;
- (void)_enumerateObserversUsingBlock:(id /* block */)arg1;
- (void)_handleCompletionOfPerformer:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3 externalCompletionHandler:(id /* block */)arg4;
- (Class)_performerClassForEditOperationWithType:(id)arg1 onAsset:(id)arg2;
- (id)_performerForEditOperationWithType:(id)arg1 onAsset:(id)arg2;
- (void)_removePendingPerformer:(id)arg1;
- (void)_signalPendingPerformersChangeForAsset:(id)arg1;
- (void)_signalStatusChangeForAsset:(id)arg1;
- (void)_updateOperationStatusForAsset:(id)arg1;
- (bool)canPerformEditOperationWithType:(id)arg1 onAsset:(id)arg2;
- (long long)editOperationStatusForAsset:(id)arg1;
- (void)enumerateEditOperationsPerformedOnAsset:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)observersWithContexts;
- (id)operationStatusByAsset;
- (id)pendingPerformersByAsset;
- (id)performEditOperationWithType:(id)arg1 asset:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)performEditOperationWithType:(id)arg1 asset:(id)arg2 delay:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)predicateRecords;
- (void)registerObserver:(id)arg1 context:(void*)arg2;
- (void)registerPerformerClass:(Class)arg1 withPredicate:(id /* block */)arg2;
- (void)unregisterObserver:(id)arg1 context:(void*)arg2;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)registerAdditionalPerformers;

@end
