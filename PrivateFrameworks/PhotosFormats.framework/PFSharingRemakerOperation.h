/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSharingRemakerOperation : NSObject {
    PFPhotoSharingOperation * __imageOperation;
    long long  __inputType;
    NSString * __uuid;
    PFVideoSharingOperation * __videoOperation;
    NSURL * _imageOutputURL;
    NSURL * _videoOutputURL;
}

@property (setter=_setImageOperation:, nonatomic, retain) PFPhotoSharingOperation *_imageOperation;
@property (setter=_setInputType:, nonatomic) long long _inputType;
@property (setter=_setUUID:, nonatomic, copy) NSString *_uuid;
@property (setter=_setVideoOperation:, nonatomic, retain) PFVideoSharingOperation *_videoOperation;
@property (setter=_setImageOutputURL:, nonatomic, copy) NSURL *imageOutputURL;
@property (setter=_setVideoOutputURL:, nonatomic, copy) NSURL *videoOutputURL;

+ (id)remakerOperationWithInputType:(long long)arg1 videoURL:(id)arg2 imageURL:(id)arg3 adjustmentData:(id)arg4;

- (void).cxx_destruct;
- (id)_imageOperation;
- (long long)_inputType;
- (void)_setImageOperation:(id)arg1;
- (void)_setImageOutputURL:(id)arg1;
- (void)_setInputType:(long long)arg1;
- (void)_setUUID:(id)arg1;
- (void)_setVideoOperation:(id)arg1;
- (void)_setVideoOutputURL:(id)arg1;
- (id)_uuid;
- (id)_videoOperation;
- (id)imageOutputURL;
- (id)init;
- (id)videoOutputURL;

@end
