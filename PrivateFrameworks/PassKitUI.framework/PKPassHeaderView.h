/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassHeaderView : UIView {
    <PKPassHeaderViewDelegate> * _delegate;
    PKFelicaPassProperties * _felicaProperties;
    bool  _largeStyle;
    UIImageView * _maskShadow;
    UILabel * _modificationDate;
    PKPass * _pass;
    <PKPassLibraryDataProvider> * _passLibraryOverride;
    UIView * _passMaskView;
    PKPassView * _passView;
    PKPeerPaymentAccount * _peerPaymentAccount;
    UIColor * _primaryTextColor;
    PKRemoteDataAccessor * _remoteDataAccessor;
    UIColor * _secondaryTextColor;
    bool  _showModificationDate;
    unsigned long long  _suppressedContent;
    UILabel * _title;
    UILabel * _type;
    UILabel * _value;
    bool  _valueLabelsShouldStack;
    UILabel * _valueTitle;
}

@property (nonatomic) <PKPassHeaderViewDelegate> *delegate;
@property (nonatomic, retain) PKFelicaPassProperties *felicaProperties;
@property (getter=isLargeStyle, nonatomic) bool largeStyle;
@property (nonatomic, readonly) PKPass *pass;
@property (nonatomic, retain) <PKPassLibraryDataProvider> *passLibraryOverride;
@property (nonatomic, readonly) PKPassView *passView;
@property (nonatomic, retain) PKPeerPaymentAccount *peerPaymentAccount;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic) bool showModificationDate;
@property (nonatomic) unsigned long long suppressedContent;
@property (nonatomic) bool valueLabelsShouldStack;

- (void).cxx_destruct;
- (void)_passLibraryDidChange:(id)arg1;
- (id)_primaryTextColor;
- (id)_secondaryTextColor;
- (void)_updateContent;
- (void)_updateTextContent;
- (void)dealloc;
- (id)delegate;
- (id)felicaProperties;
- (id)initWithPass:(id)arg1;
- (bool)isLargeStyle;
- (void)layoutSubviews;
- (id)pass;
- (id)passLibraryOverride;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })passSizeInfoForHeight:(double)arg1;
- (id)passView;
- (struct CGSize { double x1; double x2; })passViewSizeForHeight:(double)arg1;
- (id)peerPaymentAccount;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (void)setDelegate:(id)arg1;
- (void)setFelicaProperties:(id)arg1;
- (void)setLargeStyle:(bool)arg1;
- (void)setPassLibraryOverride:(id)arg1;
- (void)setPeerPaymentAccount:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setShowModificationDate:(bool)arg1;
- (void)setSuppressedContent:(unsigned long long)arg1;
- (void)setValueLabelsShouldStack:(bool)arg1;
- (bool)showModificationDate;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)suppressedContent;
- (bool)titleAndValueLabelCouldOverlapAtHeaderViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateModifiedDate;
- (void)updateShadow:(double)arg1;
- (bool)valueLabelsShouldStack;

@end
