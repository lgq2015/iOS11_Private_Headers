/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNodeRunner : NSObject {
    NSOperationQueue * _operationQueue;
}

@property long long maxConcurrentRunNodeCount;
@property long long qualityOfService;

- (void).cxx_destruct;
- (void)_processRunGraph:(struct NSArray { Class x1; }*)arg1;
- (id)init;
- (long long)maxConcurrentRunNodeCount;
- (void)processGraphForRunNode:(id)arg1;
- (long long)qualityOfService;
- (void)setMaxConcurrentRunNodeCount:(long long)arg1;
- (void)setQualityOfService:(long long)arg1;

@end
