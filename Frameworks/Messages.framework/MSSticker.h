/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSSticker : NSObject <MSStickerPrivate> {
    CKImageData * __imageData;
    NSError * __stickerError;
    UIImage * __thumbnail;
    NSData * _data;
    NSURL * _imageFileURL;
    NSString * _localizedDescription;
}

@property (nonatomic, retain) CKImageData *_imageData;
@property (nonatomic, retain) NSError *_stickerError;
@property (nonatomic, retain) UIImage *_thumbnail;
@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *imageFileURL;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (readonly) Class superclass;

+ (id)MSStickerPreviewCacheKeyForSticker:(id)arg1;
+ (id)stickerWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_generateImageData;
- (void)_generateThumbnail;
- (id)_imageData;
- (id)_stickerError;
- (id)_thumbnail;
- (id)accessibilityLabel;
- (id)data;
- (id)description;
- (id)imageFileURL;
- (id)initWithContentsOfFileURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 data:(id)arg2 localizedDescription:(id)arg3 error:(id*)arg4;
- (id)initWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3;
- (id)localizedDescription;
- (void)set_imageData:(id)arg1;
- (void)set_stickerError:(id)arg1;
- (void)set_thumbnail:(id)arg1;

@end
