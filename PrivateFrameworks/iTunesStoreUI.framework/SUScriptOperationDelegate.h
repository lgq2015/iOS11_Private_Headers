/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptOperationDelegate : NSObject <ISOperationDelegate> {
    NSLock * _lock;
    NSMutableArray * _operations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_removeOperation:(id)arg1;
- (void)cancelAllOperations;
- (void)dealloc;
- (void)enqueueOperation:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;

@end
