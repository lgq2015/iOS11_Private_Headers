/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundlePath;
    long long  _format;
    NSData * _imageData;
    NSString * _imageName;
    NSString * _imagePath;
    bool  _precomposed;
}

@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic) long long format;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *imagePath;
@property (getter=isPrecomposed, nonatomic) bool precomposed;

+ (id)_variantWithFormat:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)variantWithFormat:(long long)arg1 imageData:(id)arg2;
+ (id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundle:(id)arg3;
+ (id)variantWithFormat:(long long)arg1 imagePath:(id)arg2;

- (void).cxx_destruct;
- (id)bundlePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)format;
- (unsigned long long)hash;
- (id)imageData;
- (id)imageName;
- (id)imagePath;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrecomposed;
- (void)setBundlePath:(id)arg1;
- (void)setFormat:(long long)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setImagePath:(id)arg1;
- (void)setPrecomposed:(bool)arg1;

@end
