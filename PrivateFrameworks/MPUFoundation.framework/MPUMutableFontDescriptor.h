/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUMutableFontDescriptor : MPUFontDescriptor

@property (nonatomic) double defaultPointSizeAdjustment;
@property (nonatomic) long long leadingAdjustment;
@property (nonatomic) double systemFontSize;
@property (nonatomic) long long textStyle;
@property (nonatomic) bool usesCondensedMetrics;
@property (nonatomic) bool usesItalic;
@property (nonatomic) bool wantsMonospaceNumbers;
@property (nonatomic) long long weight;

- (id)_copyAllowingGlobalCacheLookup:(bool)arg1;
- (void)_resetToDefaultValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDefaultPointSizeAdjustment:(double)arg1;
- (void)setLeadingAdjustment:(long long)arg1;
- (void)setSystemFontSize:(double)arg1;
- (void)setTextStyle:(long long)arg1;
- (void)setUsesCondensedMetrics:(bool)arg1;
- (void)setUsesItalic:(bool)arg1;
- (void)setWantsMonospaceNumbers:(bool)arg1;
- (void)setWeight:(long long)arg1;

@end
