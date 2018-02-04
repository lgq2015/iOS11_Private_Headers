/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassFieldView : UIView {
    long long  _background;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    PKPassColorProfile * _colorProfile;
    PKDiffView * _diffView;
    PKPassField * _field;
    PKPassFieldTemplate * _fieldTemplate;
    UILabel * _labelLabel;
    bool  _needsRecalculation;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) PKPassColorProfile *colorProfile;
@property (nonatomic, retain) PKDiffView *diffView;
@property (nonatomic, retain) PKPassField *field;
@property (nonatomic, retain) PKPassFieldTemplate *fieldTemplate;
@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic, readonly) UILabel *valueLabel;

+ (id)newViewForField:(id)arg1 fieldTemplate:(id)arg2;

- (void).cxx_destruct;
- (id)_labelAttributedStringForColorProfile:(id)arg1 background:(long long)arg2;
- (struct CGSize { double x1; double x2; })_resizeMultiLineValueFontForAvailableSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldDisplayLabel;
- (id)_valueAttributedStringForColorProfile:(id)arg1 background:(long long)arg2;
- (id)colorProfile;
- (void)dealloc;
- (id)description;
- (id)diffView;
- (id)field;
- (id)fieldTemplate;
- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;
- (void)invalidateCachedFieldSize;
- (id)labelLabel;
- (void)layoutSubviews;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(id /* block */)arg3;
- (void)setColorProfile:(id)arg1;
- (void)setColorProfile:(id)arg1 background:(long long)arg2;
- (void)setDiffView:(id)arg1;
- (void)setField:(id)arg1;
- (void)setFieldTemplate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)valueLabel;

@end
