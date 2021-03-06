/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying> {
    long long  _imageHeight;
    long long  _imageWidth;
    unsigned long long  _pixelType;
}

@property (readonly) unsigned long long imageHeight;
@property (readonly) unsigned long long imageWidth;
@property (readonly) unsigned int osType;
@property (nonatomic, readonly) unsigned int pixelFormatType;
@property (readonly) unsigned long long pixelType;
@property (nonatomic, readonly) long long pixelsHigh;
@property (nonatomic, readonly) long long pixelsWide;

+ (id)_stringForOSType:(unsigned int)arg1;
+ (id)constraintForBGRImageWithWidth:(long long)arg1 height:(long long)arg2;
+ (id)constraintForGrayImageWithWidth:(long long)arg1 height:(long long)arg2;
+ (id)constraintForRGBImageWithWidth:(long long)arg1 height:(long long)arg2;
+ (id)constraintWithWidth:(long long)arg1 height:(long long)arg2 osType:(unsigned int)arg3;
+ (bool)osType:(unsigned int)arg1 isAcceptedForPixelType:(unsigned long long)arg2;

- (id)_stringForAllowedOSTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)imageHeight;
- (unsigned long long)imageWidth;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 pixelType:(unsigned long long)arg3;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (unsigned int)osType;
- (unsigned int)pixelFormatType;
- (unsigned long long)pixelType;
- (long long)pixelsHigh;
- (long long)pixelsWide;

@end
