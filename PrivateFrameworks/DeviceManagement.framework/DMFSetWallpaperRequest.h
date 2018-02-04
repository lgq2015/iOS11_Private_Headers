/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFSetWallpaperRequest : CATTaskRequest {
    NSFileHandle * _fileHandle;
    NSData * _imageData;
    NSURL * _imageURL;
    long long  _location;
}

@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic) long long location;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fileHandle;
- (id)imageData;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)location;
- (void)setFileHandle:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setLocation:(long long)arg1;

@end
