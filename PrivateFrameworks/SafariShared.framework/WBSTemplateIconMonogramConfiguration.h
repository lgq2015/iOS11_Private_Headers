/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTemplateIconMonogramConfiguration : NSObject {
    UIColor * _backgroundColor;
    double  _baselineOffset;
    double  _cornerRadius;
    double  _fontSize;
    long long  _fontWeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    bool  _skipMonogramGeneration;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) double baselineOffset;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic) bool skipMonogramGeneration;

+ (id)configurationWithBackgroundColor:(id)arg1;
+ (id)configurationWithIconSize:(struct CGSize { double x1; double x2; })arg1 fontSize:(double)arg2 fontWeight:(long long)arg3 baselineOffset:(double)arg4 backgroundColor:(id)arg5 cornerRadius:(double)arg6;

- (void).cxx_destruct;
- (id)backgroundColor;
- (double)baselineOffset;
- (double)cornerRadius;
- (double)fontSize;
- (long long)fontWeight;
- (struct CGSize { double x1; double x2; })iconSize;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaselineOffset:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontWeight:(long long)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSkipMonogramGeneration:(bool)arg1;
- (bool)skipMonogramGeneration;

@end
