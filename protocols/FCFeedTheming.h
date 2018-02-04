/* made by EzioChiu.
 */

@protocol FCFeedTheming <NSObject, NSCopying>

@required

- (bool)allowCustomBottomStyle;
- (FCColor *)backgroundColor;
- (double)bannerImageBaselineOffsetPercentage;
- (FCTagBanner *)bannerImageForMask;
- (FCTagBanner *)bannerImageForThemeBackground;
- (FCTagBanner *)bannerImageForWhiteBackground;
- (double)bannerImageScale;
- (FCTagBanner *)compactBannerImage;
- (FCTagBanner *)defaultBannerImage;
- (FCHeadlineTemplate *)defaultHeadlineTemplate;
- (long long)feedType;
- (FCColor *)foregroundColor;
- (FCColor *)groupTitleColor;
- (FCTextInfo *)headlineBylineTextInfo;
- (FCTextInfo *)headlineExcerptTextInfo;
- (FCTextInfo *)headlineTitleTextInfo;
- (bool)isWhite;
- (NSArray *)loadableFonts;
- (FCAssetHandle *)logoImageAssetHandle;
- (NSString *)name;
- (FCAssetHandle *)nameImageAssetHandle;
- (FCAssetHandle *)nameImageCompactAssetHandle;
- (FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })nameImageForDarkBackgroundInsets;
- (struct CGSize { double x1; double x2; })nameImageForDarkBackgroundSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })nameImageInsets;
- (FCAssetHandle *)nameImageMaskAssetHandle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })nameImageMaskInsets;
- (struct CGSize { double x1; double x2; })nameImageMaskSize;
- (struct CGSize { double x1; double x2; })nameImageSize;

@end
