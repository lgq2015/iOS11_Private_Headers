/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleExcerptReadMoreButton : UIButton {
    UIImageView * _arrowImageView;
    UILabel * _domainLabel;
    NSURL * _domainURL;
    unsigned long long  _excerptLenthType;
    UILabel * _readStoryLabel;
}

@property (nonatomic, readonly) UIImageView *arrowImageView;
@property (nonatomic, readonly) UILabel *domainLabel;
@property (nonatomic, retain) NSURL *domainURL;
@property (nonatomic) unsigned long long excerptLenthType;
@property (nonatomic, readonly) UILabel *readStoryLabel;

+ (id)arrowImage;
+ (double)readMoreButtonHeight;

- (void).cxx_destruct;
- (id)arrowImageView;
- (id)domainLabel;
- (id)domainURL;
- (unsigned long long)excerptLenthType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)readStoryLabel;
- (void)setDomainURL:(id)arg1;
- (void)setExcerptLenthType:(unsigned long long)arg1;

@end
