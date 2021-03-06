/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionResult : NSObject <NSSecureCoding> {
    NSNumber * _appliedImageOrientation;
    NSString * _detectedFeatureDescription;
    NSString * _detectedTextDescription;
    NSArray * _features;
    CIImage * _image;
}

@property (nonatomic, retain) NSNumber *appliedImageOrientation;
@property (nonatomic, readonly) AXMVisionFeature *assetMetadataFeature;
@property (nonatomic, readonly) AXMVisionFeature *colorInfoFeature;
@property (nonatomic, retain) NSString *detectedFeatureDescription;
@property (nonatomic, retain) NSString *detectedTextDescription;
@property (nonatomic, readonly) AXMLanguage *detectedTextLanguage;
@property (nonatomic, retain) NSArray *features;
@property (nonatomic, retain) CIImage *image;
@property (nonatomic, readonly) NSString *localizedDetectedTextHint;

+ (id)resultWithFeatures:(id)arg1 orientation:(id)arg2;
+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)appliedImageOrientation;
- (id)assetMetadataFeature;
- (id)colorInfoFeature;
- (id)description;
- (id)detectedFeatureDescription;
- (id)detectedTextDescription;
- (id)detectedTextLanguage;
- (void)encodeWithCoder:(id)arg1;
- (id)features;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)localizedDetectedTextHint;
- (id)localizedStringFormatterForExpression:(id)arg1;
- (void)setAppliedImageOrientation:(id)arg1;
- (void)setDetectedFeatureDescription:(id)arg1;
- (void)setDetectedTextDescription:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setImage:(id)arg1;
- (id)sortedFeatures;
- (id)speakableDescription;
- (bool)speakableDescriptionContainsDiscoveredText;

@end
