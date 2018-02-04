/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAsyncDirectoryEnumerator : NSObject {
    long long  _batchSize;
    int  _error;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isRecursive;
    BRCRelativePath * _rootPath;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic, readonly) BRCRelativePath *rootPath;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(bool)arg2 batchSize:(long long)arg3 targetQueue:(id)arg4;
- (id)rootPath;
- (void)scheduleWithProcessBlock:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
