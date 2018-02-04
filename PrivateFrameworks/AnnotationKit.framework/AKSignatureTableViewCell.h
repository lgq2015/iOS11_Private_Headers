/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignatureTableViewCell : UITableViewCell {
    AKSignature * _signature;
    UIImageView * _signatureImageView;
}

@property (nonatomic, retain) AKSignature *signature;
@property (nonatomic, retain) UIImageView *signatureImageView;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_setImageFromSignature;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setSignature:(id)arg1;
- (void)setSignatureImageView:(id)arg1;
- (id)signature;
- (id)signatureImageView;

@end
