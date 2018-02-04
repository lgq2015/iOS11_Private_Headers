/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureResult : NSObject {
    NSArray * _adjustmentFilters;
    NSDate * _captureDate;
    AVCapturePhoto * _capturePhoto;
    CAMStillImageCaptureCoordinationInfo * _coordinationInfo;
    NSError * _error;
    bool  _expectingPairedVideo;
    NSDictionary * _metadata;
    NSString * _persistenceUUID;
    bool  _shouldPersistEffectFilterName;
    struct __IOSurface { } * _stillImageFilteredPreviewSurface;
    struct __IOSurface { } * _stillImageFullsizeSurface;
    unsigned long long  _stillImageFullsizeSurfaceSize;
    struct __IOSurface { } * _stillImageUnfilteredPreviewSurface;
}

@property (nonatomic, readonly) NSArray *adjustmentFilters;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) AVCapturePhoto *capturePhoto;
@property (nonatomic, readonly) NSDictionary *compactMetadata;
@property (nonatomic, readonly) CAMStillImageCaptureCoordinationInfo *coordinationInfo;
@property (nonatomic, readonly) NSError *error;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (nonatomic, readonly, copy) NSString *imageGroupIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) bool shouldPersistEffectFilterName;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageFilteredPreviewSurface;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageFullsizeSurface;
@property (nonatomic, readonly) unsigned long long stillImageFullsizeSurfaceSize;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageUnfilteredPreviewSurface;

- (void).cxx_destruct;
- (id)_captureDateFromMetadata:(id)arg1;
- (id)adjustmentFilters;
- (id)captureDate;
- (id)capturePhoto;
- (id)compactMetadata;
- (id)coordinationInfo;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)imageGroupIdentifier;
- (id)initWithCapturePhoto:(id)arg1 expectingPairedVideo:(bool)arg2 adjustmentFilters:(id)arg3 filteredPreviewSurface:(struct __IOSurface { }*)arg4 shouldPersistEffectFilterName:(bool)arg5 persistenceUUID:(id)arg6 coordinationInfo:(id)arg7 error:(id)arg8;
- (id)initWithFullsizeSurface:(struct __IOSurface { }*)arg1 size:(unsigned long long)arg2 unfilteredPreviewSurface:(struct __IOSurface { }*)arg3 filteredPreviewSurface:(struct __IOSurface { }*)arg4 metadata:(id)arg5 expectingPairedVideo:(bool)arg6 shouldPersistEffectFilterName:(bool)arg7 adjustmentFilters:(id)arg8 persistenceUUID:(id)arg9 coordinationInfo:(id)arg10 error:(id)arg11;
- (bool)isExpectingPairedVideo;
- (id)metadata;
- (id)persistenceUUID;
- (bool)shouldPersistEffectFilterName;
- (struct __IOSurface { }*)stillImageFilteredPreviewSurface;
- (struct __IOSurface { }*)stillImageFullsizeSurface;
- (unsigned long long)stillImageFullsizeSurfaceSize;
- (struct __IOSurface { }*)stillImageUnfilteredPreviewSurface;

@end
