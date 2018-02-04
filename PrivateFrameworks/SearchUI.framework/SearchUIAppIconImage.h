/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIconImage : SearchUIImage <NSSecureCoding> {
    NSString * _bundleID;
    unsigned long long  _variant;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) unsigned long long variant;

+ (double)cornerRadiusForHomeScreenIcons;
+ (double)cornerRadiusForSmallSpotlightIcons;
+ (struct CGSize { double x1; double x2; })homeScreenIconSize;
+ (double)iconCornerRadiusForFormat:(int)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrameForHomeScreenIcons;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrameForSmallSpotlightIcons;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrameForTinyIcons;

- (void).cxx_destruct;
- (id)bundleID;
- (id)generateImageWithFormat:(int)arg1;
- (id)initWithBundleID:(id)arg1 variant:(unsigned long long)arg2;
- (id)loadImage;
- (void)setBundleID:(id)arg1;
- (void)setSize;
- (void)setVariant:(unsigned long long)arg1;
- (unsigned long long)variant;

@end
