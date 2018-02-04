/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleUtilities : NSObject

+ (void)breakUpFontName:(id)arg1 isBold:(bool*)arg2 isItalic:(bool*)arg3;
+ (id)chartsNullShadowToDefaultDisabledShadow:(id)arg1;
+ (void)convertToSimpleTSDFillsInProperties:(id)arg1 inMap:(id)arg2 context:(id)arg3;
+ (id)fullyPopulatedStyleFromStyle:(id)arg1 context:(id)arg2;
+ (id)fullyPopulatedStylesFromArray:(id)arg1 context:(id)arg2 styleClass:(Class)arg3;
+ (bool)hasNoFill:(id)arg1;
+ (bool)hasShadow:(id)arg1;
+ (bool)isNullFill:(id)arg1;
+ (id)nullFill;
+ (id)nullShadow;
+ (void)p_adjustTrendlineSaturation:(double*)arg1 brightness:(double*)arg2;
+ (bool)p_hasShadow:(id)arg1;
+ (id)shadowToChartsNullShadow:(id)arg1;
+ (id)stylesheetOfStyles:(id)arg1 nilAllowed:(bool)arg2;
+ (id)trendlineColorFromCGColor:(struct CGColor { }*)arg1;
+ (void)updateStyleState:(id)arg1 forMutationsPerStyleOwner:(id)arg2;
+ (void)updateStyleState:(id)arg1 forPropertyMutationTuples:(id)arg2;
+ (void)upgradeAlignmentInParagraphStyles:(id)arg1 willModifyBlock:(id /* block */)arg2;
+ (bool)upgradeShadowProperties:(id)arg1 inMap:(id)arg2;
+ (id)upgradedShadowPropertyForParagraphStyle:(id)arg1;
+ (bool)upgradedShadowPropertyFromShadow:(id)arg1 outUpgraded:(id*)arg2;

@end
