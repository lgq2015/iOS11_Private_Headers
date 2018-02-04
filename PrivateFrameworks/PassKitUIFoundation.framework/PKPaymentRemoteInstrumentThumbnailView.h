/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKPaymentRemoteInstrumentThumbnailView : UIView {
    struct UIImageView { Class x1; } * _cardImageView;
    struct UIImageView { Class x1; } * _placeholderImageView;
}

@property (nonatomic, retain) UIImageView *cardImageView;
@property (nonatomic, retain) UIImageView *placeholderImageView;

- (void).cxx_destruct;
- (void)_prepareConstraints;
- (void)_updateCardImage:(struct CGImage { }*)arg1;
- (struct UIImageView { Class x1; }*)cardImageView;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (struct UIImageView { Class x1; }*)placeholderImageView;
- (void)setCardImageView:(struct UIImageView { Class x1; }*)arg1;
- (void)setPlaceholderImageView:(struct UIImageView { Class x1; }*)arg1;

@end
