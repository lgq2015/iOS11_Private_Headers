/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLHeadlineImageOnSideAccessibilityCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes {
    NSString * _titleFontName;
    double  _titleFontSize;
    double  _titleLineHeight;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _titleNextToImageRange;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleBellowImageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleNextToImageFrame;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } titleNextToImageRange;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)excerptFontName;
- (double)excerptFontSize;
- (double)excerptLineHeight;
- (bool)isEqual:(id)arg1;
- (void)populateWithProtobuf:(id)arg1;
- (id)protobufRepresentation;
- (void)setExcerptFontName:(id)arg1;
- (void)setExcerptFontSize:(double)arg1;
- (void)setExcerptLineHeight:(double)arg1;
- (void)setTitleBellowImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleNextToImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleNextToImageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleBellowImageFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleNextToImageFrame;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })titleNextToImageRange;

@end
