/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPTheme : NSObject {
    UIColor * _backgroundColor;
    LPCaptionBarStyle * _captionBar;
    UIColor * _highlightColor;
    LPPointUnit * _maximumIntrinsicHeight;
    LPPointUnit * _maximumWidth;
    UIColor * _mediaBackgroundColor;
    LPCaptionBarStyle * _mediaBottomCaptionBar;
    LPImageViewStyle * _mediaImage;
    LPCaptionBarStyle * _mediaTopCaptionBar;
    LPVideoViewStyle * _mediaVideo;
    LPTextViewStyle * _quotedText;
    LPTapToLoadViewStyle * _tapToLoad;
    double  _widthFractionForTallMedia;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) LPCaptionBarStyle *captionBar;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) LPPointUnit *maximumIntrinsicHeight;
@property (nonatomic, retain) LPPointUnit *maximumWidth;
@property (nonatomic, retain) UIColor *mediaBackgroundColor;
@property (nonatomic, readonly) LPCaptionBarStyle *mediaBottomCaptionBar;
@property (nonatomic, readonly) LPImageViewStyle *mediaImage;
@property (nonatomic, readonly) LPCaptionBarStyle *mediaTopCaptionBar;
@property (nonatomic, readonly) LPVideoViewStyle *mediaVideo;
@property (nonatomic, readonly) LPTextViewStyle *quotedText;
@property (nonatomic, readonly) LPTapToLoadViewStyle *tapToLoad;
@property (nonatomic) double widthFractionForTallMedia;

+ (void)addClient:(id)arg1;
+ (id)regularTheme;
+ (id)themeWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3;

- (void).cxx_destruct;
- (id)CSSCustomPropertiesForThemePropertiesInSet:(id)arg1;
- (id)CSSTextForThemeProperty:(id)arg1;
- (id)backgroundColor;
- (id)captionBar;
- (id)highlightColor;
- (id)initWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3;
- (id)maximumIntrinsicHeight;
- (id)maximumWidth;
- (id)mediaBackgroundColor;
- (id)mediaBottomCaptionBar;
- (id)mediaImage;
- (id)mediaTopCaptionBar;
- (id)mediaVideo;
- (id)quotedText;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setMaximumIntrinsicHeight:(id)arg1;
- (void)setMaximumWidth:(id)arg1;
- (void)setMediaBackgroundColor:(id)arg1;
- (void)setWidthFractionForTallMedia:(double)arg1;
- (id)tapToLoad;
- (id)valueForUndefinedKey:(id)arg1;
- (double)widthFractionForTallMedia;

@end
