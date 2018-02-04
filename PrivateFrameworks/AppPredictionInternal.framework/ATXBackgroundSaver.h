/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXBackgroundSaver : NSObject {
    id /* block */  _block;
    bool  _paused;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)_cancelSaveTimer;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (void)scheduleSave;
- (void)scheduleSaveImmediately;

@end