/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIAutoLoopExportRequest : NUVideoExportRequest {
    NSURL * _destinationLongExposureURL;
    NSURL * _destinationMaskURL;
    NSString * _destinationUTI;
}

@property (readonly) NSURL *destinationLongExposureURL;
@property (readonly) NSURL *destinationMaskURL;
@property (readonly) NSString *destinationUTI;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationLongExposureURL;
- (id)destinationMaskURL;
- (id)destinationUTI;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1 stabilizedVideoURL:(id)arg2 longExposureDestinationURL:(id)arg3 maskDestinationURL:(id)arg4 destinationUTI:(id)arg5;
- (id)initWithRequest:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)submit:(id /* block */)arg1;

@end
