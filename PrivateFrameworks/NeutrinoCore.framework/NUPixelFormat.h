/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUPixelFormat : NSObject {
    int  _CIFormat;
    unsigned int  _CVPixelFormat;
    long long  _bytesPerPixel;
    NSString * _name;
}

@property (nonatomic, readonly) int CIFormat;
@property (nonatomic, readonly) unsigned int CVPixelFormat;
@property (nonatomic, readonly) long long bytesPerPixel;
@property (nonatomic, readonly) NSString *name;

+ (id)A16;
+ (id)ARGB8;
+ (id)BGRA8;
+ (id)I8;
+ (id)RG16;
+ (id)RGBA16;
+ (id)RGBA8;
+ (id)RGBAf;
+ (id)RGBAh;
+ (id)XRSRGB10;
+ (id)XRSRGB10_A8;
+ (id)pixelFormatForCIFormat:(int)arg1;
+ (id)pixelFormatForCVPixelFormat:(unsigned int)arg1;
+ (id)sRGBA8;

- (void).cxx_destruct;
- (int)CIFormat;
- (unsigned int)CVPixelFormat;
- (long long)alignedRowBytesForWidth:(long long)arg1;
- (long long)bytesPerPixel;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPixelFormat:(id)arg1;
- (id)name;

@end
