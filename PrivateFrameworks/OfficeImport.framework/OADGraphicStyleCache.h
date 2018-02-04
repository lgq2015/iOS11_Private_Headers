/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGraphicStyleCache : NSObject {
    OADGraphicFeatureCache * mChartIdCache;
    OADGraphicFeatureCache * mColorCache;
    OADGraphicFeatureCache * mDrawableStyleCacheArray;
    OADGraphicFeatureCache * mFillCacheArray;
    OADGraphicFeatureCache * mFontFaceCache;
    OADGraphicFeatureCache * mShadowCache;
    OADGraphicFeatureCache * mStrokeCache;
    OADGraphicFeatureCache * mTableIdCache;
    NSMutableDictionary * mTableStyleCache;
    OADGraphicFeatureCache * mTextStyleCache;
}

+ (int)fillCatagory:(id)arg1;

- (void)applyCachedDrawableStyle:(id)arg1 toGraphicProperties:(id)arg2;
- (void)applyCachedDrawableStyle:(id)arg1 toParagraphProperties:(id)arg2;
- (void)applyCachedDrawableStyle:(id)arg1 toTextBodyProperties:(id)arg2;
- (void)cacheChartStyleId:(int)arg1;
- (unsigned long long)cacheDrawablePropertiesOfCategory:(int)arg1 withFillCategory:(int)arg2 fillIndex:(unsigned long long)arg3 strokeIndex:(unsigned long long)arg4 shadowIndex:(unsigned long long)arg5 reflectionOpacity:(float)arg6 textStyleIndex:(unsigned long long)arg7;
- (unsigned long long)cacheDrawablePropertiesOfCategory:(int)arg1 withGraphicProperties:(id)arg2 textBodyProperties:(id)arg3 paragraphProperties:(id)arg4 characterProperties:(id)arg5 colorContext:(id)arg6;
- (unsigned long long)cacheFill:(id)arg1 returnCategory:(int*)arg2;
- (unsigned long long)cacheShadow:(id)arg1;
- (unsigned long long)cacheStroke:(id)arg1;
- (void)cacheTableStyle:(id)arg1;
- (id)cachedDrawableStylesOfCategory:(int)arg1;
- (id)chartStyleIds;
- (id)colorCache;
- (id)countedDrawableStyleOfCategory:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)fillsOfCategory:(int)arg1;
- (id)fontFaceCache;
- (id)init;
- (id)shadows;
- (id)strokes;
- (id)tableStyleForId:(id)arg1;
- (id)tableStyleIds;

@end
