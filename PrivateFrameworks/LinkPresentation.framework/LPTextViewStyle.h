/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPTextViewStyle : NSObject <NSCopying> {
    UIColor * _color;
    LPPointUnit * _firstLineLeading;
    UIFont * _font;
    LPGlyphStyle * _leadingGlyph;
    unsigned int  _maximumLines;
    LPPadding * _padding;
    long long  _textAlignment;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) LPPointUnit *firstLineLeading;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) LPGlyphStyle *leadingGlyph;
@property (nonatomic) unsigned int maximumLines;
@property (nonatomic, readonly, retain) LPPadding *padding;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)firstLineLeading;
- (id)font;
- (id)init;
- (id)leadingGlyph;
- (unsigned int)maximumLines;
- (id)padding;
- (void)setColor:(id)arg1;
- (void)setFirstLineLeading:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLeadingGlyph:(id)arg1;
- (void)setMaximumLines:(unsigned int)arg1;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;

@end