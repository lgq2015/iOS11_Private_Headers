/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {
    NSDate * _captureDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    UIImage * _imageWellImage;
    NSURL * _localPersistenceURL;
    NSString * _persistenceUUID;
    UIImage * _previewImage;
    long long  _reason;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillDisplayTime;
    NSString * _stillPersistenceUUID;
    double  _videoZoomFactor;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) NSDate *captureDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *imageWellImage;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly, copy) NSURL *localPersistenceURL;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillDisplayTime;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (nonatomic, readonly, copy) NSString *stillPersistenceUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) double videoZoomFactor;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (id)captureDate;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)imageWellImage;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 captureDate:(id)arg4 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 stillPersistenceUUID:(id)arg6 stillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 reason:(long long)arg8 videoZoomFactor:(double)arg9 imageWellImage:(id)arg10 previewImage:(id)arg11;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (bool)isExpectingPairedVideo;
- (id)localPersistenceURL;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (unsigned long long)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)persistenceUUID;
- (id)placeholderImage;
- (id)previewImage;
- (long long)reason;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillDisplayTime;
- (id)stillImageMetadata;
- (id)stillPersistenceUUID;
- (id)uuid;
- (double)videoZoomFactor;

@end
