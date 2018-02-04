/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DACameraSensorAnomalyTargetView : UIView {
    UIButton * _cancelButton;
    <DACameraSensorAnomalyTargetViewDelegate> * _delegate;
    CMKShutterButton * _shutterButton;
    struct CGSize { 
        double width; 
        double height; 
    }  _shutterButtonIntrinsicContentSize;
    UILabel * _viewfinderInstruction;
    UIView * _viewfinderOutsideRegionBottom;
    UIView * _viewfinderOutsideRegionTop;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic) <DACameraSensorAnomalyTargetViewDelegate> *delegate;
@property (nonatomic, retain) CMKShutterButton *shutterButton;
@property (nonatomic) struct CGSize { double x1; double x2; } shutterButtonIntrinsicContentSize;
@property (nonatomic, retain) UILabel *viewfinderInstruction;
@property (nonatomic, retain) UIView *viewfinderOutsideRegionBottom;
@property (nonatomic, retain) UIView *viewfinderOutsideRegionTop;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)cancelButton;
- (void)cancelTapped:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 thickness:(double)arg3 instructionText:(id)arg4;
- (void)setCancelButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setShutterButtonIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewfinderInstruction:(id)arg1;
- (void)setViewfinderOutsideRegionBottom:(id)arg1;
- (void)setViewfinderOutsideRegionTop:(id)arg1;
- (id)shutterButton;
- (struct CGSize { double x1; double x2; })shutterButtonIntrinsicContentSize;
- (void)takePicture:(id)arg1;
- (void)updateConstraints;
- (id)viewfinderInstruction;
- (id)viewfinderOutsideRegionBottom;
- (id)viewfinderOutsideRegionTop;

@end
