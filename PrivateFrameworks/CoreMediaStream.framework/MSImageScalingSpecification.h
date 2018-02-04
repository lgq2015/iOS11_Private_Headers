/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSImageScalingSpecification : NSObject {
    int  _assetTypeFlags;
    double  _maximumLongSideLength;
    double  _minimumLongSideLength;
    double  _nominalShortSideLength;
}

@property (nonatomic) int assetTypeFlags;
@property (nonatomic) double maximumLongSideLength;
@property (nonatomic) double minimumLongSideLength;
@property (nonatomic) double nominalShortSideLength;

+ (id)assetsToGenerateFromImageWithInputSize:(struct CGSize { double x1; double x2; })arg1 toConformToSpecifications:(id)arg2;
+ (id)specificationWithSharedAlbumSpecificationString:(id)arg1;

- (int)assetTypeFlags;
- (id)description;
- (double)maximumLongSideLength;
- (double)minimumLongSideLength;
- (double)nominalShortSideLength;
- (double)scaleFactorForInputSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAssetTypeFlags:(int)arg1;
- (void)setMaximumLongSideLength:(double)arg1;
- (void)setMinimumLongSideLength:(double)arg1;
- (void)setNominalShortSideLength:(double)arg1;

@end
