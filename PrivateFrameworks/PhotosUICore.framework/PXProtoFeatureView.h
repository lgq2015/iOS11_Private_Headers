/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXProtoFeatureView : UIView <PXProtoMutableFeatureView> {
    UIImageView * __removeIconView;
    UIView * _contentView;
    bool  _disabled;
    <PXProtoFeature> * _feature;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minimumMargins;
    struct { 
        bool content; 
    }  _needsUpdateFlags;
    bool  _selected;
    bool  _shouldUpdateContentOnResize;
}

@property (nonatomic, readonly) UIImageView *_removeIconView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } compactContentSize;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (nonatomic, readonly) <PXProtoFeature> *feature;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumMargins;
@property (nonatomic, readonly) UIColor *preferredBackgroundColor;
@property (nonatomic, readonly) double recommendedCompactContentHeight;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } regularContentSize;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, readonly) bool shouldUpdateContentOnResize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsContentView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrame;
- (void)_invalidateContent;
- (bool)_needsUpdate;
- (id)_removeIconView;
- (void)_setNeedsUpdate;
- (void)_updateContentIfNeeded;
- (void)_updateIfNeeded;
- (bool)canBecomeFocused;
- (struct CGSize { double x1; double x2; })compactContentSize;
- (id)contentView;
- (id)feature;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDisabled;
- (bool)isSelected;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumMargins;
- (void)performChanges:(id /* block */)arg1;
- (id)preferredBackgroundColor;
- (void)prepareForReuse;
- (double)recommendedCompactContentHeight;
- (struct CGSize { double x1; double x2; })regularContentSize;
- (void)setDisabled:(bool)arg1;
- (void)setFeature:(id)arg1;
- (void)setSelected:(bool)arg1;
- (bool)shouldUpdateContentOnResize;
- (void)updateContent;
- (bool)wantsContentView;

@end
