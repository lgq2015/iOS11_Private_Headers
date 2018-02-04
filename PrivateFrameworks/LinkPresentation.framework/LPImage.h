/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPImage : NSObject <NSSecureCoding> {
    NSString * _MIMEType;
    NSObject<OS_dispatch_group> * _asynchronousLoadGroup;
    NSData * _data;
    NSURL * _fileURL;
    UIImage * _originalPlatformImage;
    bool  _placeholderIcon;
    UIImage * _platformImage;
    LPImageProperties * _properties;
    NSArray * _remoteURLsForEmailCompatibleOutput;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly) unsigned long long _encodedSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _pixelSize;
@property (getter=_isPlaceholderIcon, nonatomic) bool _placeholderIcon;
@property (nonatomic, retain) NSArray *_remoteURLsForEmailCompatibleOutput;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) UIImage *platformImage;
@property (nonatomic, readonly, copy) LPImageProperties *properties;

+ (id)_PNGImageNamed:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (void)_createDataFromPlatformImage;
- (unsigned long long)_encodedSize;
- (id)_initWithImage:(id)arg1;
- (id)_initWithPlatformImageGenerator:(id /* block */)arg1;
- (bool)_isPlaceholderIcon;
- (void)_mapDataFromFileURL;
- (struct CGSize { double x1; double x2; })_pixelSize;
- (void)_preparePlatformImageWithCompletionHandler:(id /* block */)arg1;
- (id)_remoteURLsForEmailCompatibleOutput;
- (bool)_shouldEncodeData;
- (void)_waitForAsynchronouslyLoadedImageIfNeeded;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)init;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithPlatformImage:(id)arg1;
- (id)initWithPlatformImage:(id)arg1 properties:(id)arg2;
- (id)platformImage;
- (id)properties;
- (void)setFileURL:(id)arg1;
- (void)setPlatformImage:(id)arg1;
- (void)set_placeholderIcon:(bool)arg1;
- (void)set_remoteURLsForEmailCompatibleOutput:(id)arg1;

@end
