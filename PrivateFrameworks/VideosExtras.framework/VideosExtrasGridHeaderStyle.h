/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasGridHeaderStyle : NSObject {
    double  _bottomLabelDescender;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    bool  _showsImage;
    UIColor * _subtitleColor;
    NSDictionary * _subtitleDefaultFontAttributes;
    double  _subtitleLineHeight;
    NSString * _subtitleTextStyle;
    UIColor * _titleColor;
    NSDictionary * _titleDefaultFontAttributes;
    double  _titleLineHeight;
    NSString * _titleTextStyle;
}

@property (nonatomic) double bottomLabelDescender;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) bool showsImage;
@property (nonatomic, retain) UIColor *subtitleColor;
@property (nonatomic, retain) NSDictionary *subtitleDefaultFontAttributes;
@property (nonatomic) double subtitleLineHeight;
@property (nonatomic, retain) NSString *subtitleTextStyle;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) NSDictionary *titleDefaultFontAttributes;
@property (nonatomic) double titleLineHeight;
@property (nonatomic, retain) NSString *titleTextStyle;

- (void).cxx_destruct;
- (double)bottomLabelDescender;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (void)setBottomLabelDescender:(double)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsImage:(bool)arg1;
- (void)setSubtitleColor:(id)arg1;
- (void)setSubtitleDefaultFontAttributes:(id)arg1;
- (void)setSubtitleLineHeight:(double)arg1;
- (void)setSubtitleTextStyle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleDefaultFontAttributes:(id)arg1;
- (void)setTitleLineHeight:(double)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (bool)showsImage;
- (id)subtitleColor;
- (id)subtitleDefaultFontAttributes;
- (double)subtitleLineHeight;
- (id)subtitleTextStyle;
- (id)titleColor;
- (id)titleDefaultFontAttributes;
- (double)titleLineHeight;
- (id)titleTextStyle;

@end
