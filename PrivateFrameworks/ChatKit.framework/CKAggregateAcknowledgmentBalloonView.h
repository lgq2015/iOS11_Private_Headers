/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAggregateAcknowledgmentBalloonView : CKAcknowledgmentBalloonView {
    UIImageView * _backgroundView;
    BOOL  _gradientColor;
    UIView<CKGradientReferenceView> * _gradientReferenceView;
    CKGradientView * _gradientView;
    BOOL  _solidColor;
    UIImageView * _solidPartsView;
}

@property (nonatomic) BOOL gradientColor;
@property (nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic) BOOL solidColor;

+ (id)_middleBubbleSquareImage;
+ (id)_topBubbleSquareImage;

- (void).cxx_destruct;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;
- (BOOL)gradientColor;
- (id)gradientReferenceView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setGradientColor:(BOOL)arg1;
- (void)setGradientReferenceView:(id)arg1;
- (void)setSolidColor:(BOOL)arg1;
- (BOOL)solidColor;

@end
