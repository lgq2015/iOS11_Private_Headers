/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRTransfersStatusManager : NSObject {
    NSMutableArray * _coordinators;
    NSProgress * _globalDownloadProgress;
    id  _globalProgressSubscriber;
    NSProgress * _globalUploadProgress;
    NSOperationQueue * _queue;
    unsigned long long  _shouldHideGlobalDownloadProgressCount;
    NSMutableArray * _transfers;
}

@property (readonly, copy) NSArray *transfers;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_progressSubscription;
- (void)_setGlobalProgress:(id)arg1 forIvar:(id*)arg2;
- (void)addTransfer:(id)arg1;
- (void)dealloc;
- (void)downloadAndObserveItemAtURL:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (void)insertTransfer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeTransfer:(id)arg1;
- (id)startObservingItemDownloadProgressAtURL:(id)arg1;
- (void)stopObservingItemDownloadProgress:(id)arg1;
- (id)transfers;

@end
