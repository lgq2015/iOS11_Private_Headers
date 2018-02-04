/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudResourceManager : NSObject {
    int  _currentRequestID;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _requestsById;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_synchronized:(id /* block */)arg1;
- (void)_updateCloudResourceDownloadStatesOnConnectionLostNotification:(id)arg1;
- (void)_updateCloudResourceDownloadStatesOnStatusDidChangeNotification:(id)arg1;
- (void)cancelRequest:(int)arg1;
- (void)dealloc;
- (id)init;
- (int)requestCloudResourceType:(unsigned long long)arg1 forAssetWithObjectID:(id)arg2 downloadIsTransient:(bool)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;

@end
