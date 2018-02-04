/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKImage : NSObject <NSCopying, NSSecureCoding> {
    UIImage * _image;
    NSData * _imageData;
    NSString * _imageName;
}

@property (retain) UIImage *image;
@property (retain) NSData *imageData;
@property (retain) NSString *imageName;

+ (id)imageWithImage:(id)arg1;
+ (id)imageWithImageData:(id)arg1;
+ (id)imageWithImageName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)imageData;
- (id)imageName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageName:(id)arg1;

@end
