/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPAsset : NSObject

@property (nonatomic, readonly) NSDictionary *exif;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;

+ (void)unimplementedExceptionForMethodName:(id)arg1;

- (id)exif;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;

@end
