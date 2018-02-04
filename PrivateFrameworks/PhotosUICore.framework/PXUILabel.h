/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUILabel : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UILabel * _label;
    NSArray * _labelLayoutConstraints;
    PXLabelSpec * _spec;
    NSString * _text;
    long long  _verticalAlignment;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) PXLabelSpec *spec;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_commonPXMemoriesLabelInitialization;
- (void)_configureLabel;
- (id)_configuredText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSpec:(id)arg1;
- (void)setText:(id)arg1;
- (id)spec;
- (id)text;
- (void)updateConstraints;

@end