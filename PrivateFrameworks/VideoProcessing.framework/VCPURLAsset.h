/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPURLAsset : VCPAsset {
    NSDictionary * _cachedExif;
    NSURL * _imageURL;
    long long  _onceExif;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
}

+ (id)imageAssetWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)exif;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1;
- (id)initWithImageURL:(id)arg1;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;

@end
