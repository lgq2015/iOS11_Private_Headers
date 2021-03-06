/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVURLImageLoader : NSObject <ISURLOperationDelegate, TVImageLoader> {
    bool  _imageRotationEnabled;
    ISOperationQueue * imageLoadQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isImageRotationEnabled, nonatomic) bool imageRotationEnabled;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cancelLoad:(id)arg1;
- (id)imageKeyForObject:(id)arg1;
- (id)init;
- (bool)isImageRotationEnabled;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)setImageRotationEnabled:(bool)arg1;

@end
