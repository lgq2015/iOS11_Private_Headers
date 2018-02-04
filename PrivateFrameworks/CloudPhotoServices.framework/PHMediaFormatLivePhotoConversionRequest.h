/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
 */

@interface PHMediaFormatLivePhotoConversionRequest : PHMediaFormatConversionCompositeRequest {
    PHMediaFormatConversionRequest * _imageConversionRequest;
    PHMediaFormatConversionRequest * _videoConversionRequest;
}

@property (retain) PHMediaFormatConversionRequest *imageConversionRequest;
@property (retain) PHMediaFormatConversionRequest *videoConversionRequest;

+ (id)requestForImageConversionRequest:(id)arg1 videoConversionRequest:(id)arg2 error:(id*)arg3;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)didPreflightSubrequest:(id)arg1;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(id /* block */)arg1;
- (id)imageConversionRequest;
- (void)setImageConversionRequest:(id)arg1;
- (void)setVideoConversionRequest:(id)arg1;
- (id)videoConversionRequest;

@end
