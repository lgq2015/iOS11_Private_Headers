/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQBannerView : UIView <ICQUpgradeFlowManagerDelegate, UITextViewDelegate> {
    NSArray * _activeConstraints;
    <ICQBannerViewDelegate> * _delegate;
    UIFont * _font;
    UIColor * _linkTextColor;
    UIFont * _linkTextFont;
    ICQOffer * _offer;
    long long  _textAlignment;
    UIColor * _textColor;
    double  _textLineSpacing;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _textMargins;
    _ICQTextView * _textView;
    ICQUpgradeFlowManager * _upgradeFlowManager;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *linkTextColor;
@property (nonatomic, copy) UIFont *linkTextFont;
@property (nonatomic, retain) ICQOffer *offer;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) double textLineSpacing;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } textMargins;
@property (nonatomic, readonly) _ICQTextView *textView;
@property (nonatomic, retain) ICQUpgradeFlowManager *upgradeFlowManager;

+ (bool)shouldShowForOffer:(id)arg1;

- (void).cxx_destruct;
- (void)_applyTextParagraphAttributes;
- (void)_applyTextStorageAttributes;
- (long long)_delegateActionForAction:(long long)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_legacyDelegateMethodHandlesAction:(long long)arg1;
- (bool)_performLink:(id)arg1;
- (id)activeConstraints;
- (id)attributedText;
- (id)delegate;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOffer:(id)arg1;
- (id)linkTextColor;
- (id)linkTextFont;
- (id)messageAttributes;
- (id)offer;
- (long long)semanticContentAttribute;
- (void)setActiveConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setLinkTextFont:(id)arg1;
- (void)setOffer:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextLineSpacing:(double)arg1;
- (void)setTextMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUpgradeFlowManager:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)textAlignment;
- (id)textColor;
- (double)textLineSpacing;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })textMargins;
- (id)textParagraphStyle;
- (id)textParagraphStyleAttributes;
- (id)textView;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)updateConstraints;
- (id)upgradeFlowManager;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (long long)userInterfaceLayoutDirection;

@end
