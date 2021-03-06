/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassFrontFaceView : PKPassFaceView {
    PKContinuousButton * _barcodeButton;
    PKBarcodeStickerView * _barcodeView;
    WLEasyToHitCustomButton * _infoButton;
    PKLinkedAppIconView * _linkedApp;
    UILabel * _logoLabel;
    bool  _showsBarcodeButton;
    bool  _showsBarcodeView;
    bool  _showsInfo;
    bool  _showsLinkedApp;
    bool  _showsLiveBalance;
}

@property (nonatomic, readonly) PKBarcodeStickerView *barcodeView;
@property (nonatomic, readonly) PKLinkedAppIconView *linkedApp;
@property (nonatomic) bool showsBarcodeButton;
@property (nonatomic) bool showsBarcodeView;
@property (nonatomic) bool showsInfo;
@property (nonatomic) bool showsLinkedApp;
@property (nonatomic) bool showsLiveBalance;

- (void).cxx_destruct;
- (void)_barcodeButtonPressed;
- (void)_infoButtonPressed;
- (void)_positionBarcodeView;
- (id)_relevantBuckets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })barcodeFrame;
- (id)barcodeView;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)dealloc;
- (id)init;
- (void)insertContentView:(id)arg1 ofType:(long long)arg2;
- (void)layoutSubviews;
- (id)linkedApp;
- (id)passFaceTemplate;
- (void)setClipsContent:(bool)arg1;
- (void)setShowsBarcodeButton:(bool)arg1;
- (void)setShowsBarcodeButton:(bool)arg1 animated:(bool)arg2;
- (void)setShowsBarcodeView:(bool)arg1;
- (void)setShowsBarcodeView:(bool)arg1 animated:(bool)arg2;
- (void)setShowsInfo:(bool)arg1;
- (void)setShowsLinkedApp:(bool)arg1;
- (void)setShowsLiveBalance:(bool)arg1;
- (id)shortFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (bool)showsBarcodeButton;
- (bool)showsBarcodeView;
- (bool)showsInfo;
- (bool)showsLinkedApp;
- (bool)showsLiveBalance;
- (id)tallFaceTemplate;
- (void)updateValidity;

@end
