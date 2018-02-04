/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLTBitmapFormat : NSObject <NSSecureCoding> {
    unsigned int  _bitmapInfo;
    unsigned long long  _bitsPerComponent;
    unsigned long long  _bitsPerPixel;
    unsigned long long  _bytesPerRow;
    struct CGColorSpace { } * _colorSpace;
    unsigned long long  _height;
    unsigned long long  _width;
}

@property unsigned int bitmapInfo;
@property unsigned long long bitsPerComponent;
@property unsigned long long bitsPerPixel;
@property unsigned long long bytesPerRow;
@property (retain) struct CGColorSpace { }*colorSpace;
@property unsigned long long height;
@property unsigned long long width;

+ (id)bitmapFormatWithBitmapImage:(struct CGImage { }*)arg1;
+ (bool)supportsSecureCoding;

- (unsigned int)bitmapInfo;
- (unsigned long long)bitsPerComponent;
- (unsigned long long)bitsPerPixel;
- (unsigned long long)bytesPerRow;
- (struct CGColorSpace { }*)colorSpace;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)height;
- (id)initWithCoder:(id)arg1;
- (void)setBitmapInfo:(unsigned int)arg1;
- (void)setBitsPerComponent:(unsigned long long)arg1;
- (void)setBitsPerPixel:(unsigned long long)arg1;
- (void)setBytesPerRow:(unsigned long long)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
