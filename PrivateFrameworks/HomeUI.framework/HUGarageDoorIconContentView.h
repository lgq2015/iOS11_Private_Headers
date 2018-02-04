/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGarageDoorIconContentView : HUPrimaryStateIconContentView {
    HUGarageDoorStateTransition * _activeTransition;
    UIVisualEffectView * _bottomPanelHingeView;
    HUShapeLayerView * _bottomPanelViewWithHandle;
    HUShapeLayerView * _bottomPanelViewWithoutHandle;
    HUVisualEffectContainerView * _buildingContainerView;
    HUShapeLayerView * _buildingView;
    UIVisualEffectView * _carContainerView;
    HUShapeLayerView * _carView;
    bool  _clipBottomPanelShapesToBounds;
    UIView * _doorContainerView;
    UIView * _doorHingeView;
    UIView * _doorView;
    UIVisualEffectView * _middlePanelHingeView;
    HUShapeLayerView * _middlePanelView;
    bool  _open;
    UIVisualEffectView * _topPanelHingeView;
    HUShapeLayerView * _topPanelView;
}

@property (nonatomic, retain) HUGarageDoorStateTransition *activeTransition;
@property (nonatomic, retain) UIVisualEffectView *bottomPanelHingeView;
@property (nonatomic, retain) HUShapeLayerView *bottomPanelViewWithHandle;
@property (nonatomic, retain) HUShapeLayerView *bottomPanelViewWithoutHandle;
@property (nonatomic, retain) HUVisualEffectContainerView *buildingContainerView;
@property (nonatomic, retain) HUShapeLayerView *buildingView;
@property (nonatomic, retain) UIVisualEffectView *carContainerView;
@property (nonatomic, retain) HUShapeLayerView *carView;
@property (nonatomic) bool clipBottomPanelShapesToBounds;
@property (nonatomic, retain) UIView *doorContainerView;
@property (nonatomic, retain) UIView *doorHingeView;
@property (nonatomic, retain) UIView *doorView;
@property (nonatomic, retain) UIVisualEffectView *middlePanelHingeView;
@property (nonatomic, retain) HUShapeLayerView *middlePanelView;
@property (getter=isOpen, nonatomic) bool open;
@property (nonatomic, retain) UIVisualEffectView *topPanelHingeView;
@property (nonatomic, retain) HUShapeLayerView *topPanelView;

+ (id)_pathForBottomDoorPanelWithHandleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_pathForMiddleDoorPanelWithHandleForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)_referenceHeightForPanelAtPosition:(unsigned long long)arg1 open:(bool)arg2;
+ (double)_referenceOriginYForPanelAtPosition:(unsigned long long)arg1 open:(bool)arg2;
+ (id)buildingPathForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)carPathForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)pathForPanelAtPosition:(unsigned long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 showHandle:(bool)arg3;

- (void).cxx_destruct;
- (id)_createPanelViewForPosition:(unsigned long long)arg1 showHandle:(bool)arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_doorHingeSublayerTransformForOpenState:(bool)arg1;
- (void)_enumeratePanelViewsWithBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForPanelAtPosition:(unsigned long long)arg1 open:(bool)arg2 relativeToHinge:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForPanelHingeAtPosition:(unsigned long long)arg1 open:(bool)arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_panelHingeSublayerTransformWithOpenState:(bool)arg1;
- (id)_panelViewsForPosition:(unsigned long long)arg1;
- (double)_referenceScaleFactor;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_referenceScaleTransform;
- (void)_updateCarLayoutForOpenState:(bool)arg1;
- (void)_updateLayoutForOpenState:(bool)arg1 animated:(bool)arg2;
- (void)_updatePanelLayoutForOpenState:(bool)arg1;
- (id)activeTransition;
- (id)bottomPanelHingeView;
- (id)bottomPanelViewWithHandle;
- (id)bottomPanelViewWithoutHandle;
- (id)buildingContainerView;
- (id)buildingView;
- (id)carContainerView;
- (id)carView;
- (bool)clipBottomPanelShapesToBounds;
- (id)doorContainerView;
- (id)doorHingeView;
- (id)doorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpen;
- (void)layoutSubviews;
- (id)managedVisualEffectViews;
- (id)middlePanelHingeView;
- (id)middlePanelView;
- (id)panelHingeViews;
- (void)setActiveTransition:(id)arg1;
- (void)setBottomPanelHingeView:(id)arg1;
- (void)setBottomPanelViewWithHandle:(id)arg1;
- (void)setBottomPanelViewWithoutHandle:(id)arg1;
- (void)setBuildingContainerView:(id)arg1;
- (void)setBuildingView:(id)arg1;
- (void)setCarContainerView:(id)arg1;
- (void)setCarView:(id)arg1;
- (void)setClipBottomPanelShapesToBounds:(bool)arg1;
- (void)setDoorContainerView:(id)arg1;
- (void)setDoorHingeView:(id)arg1;
- (void)setDoorView:(id)arg1;
- (void)setMiddlePanelHingeView:(id)arg1;
- (void)setMiddlePanelView:(id)arg1;
- (void)setOpen:(bool)arg1;
- (void)setTopPanelHingeView:(id)arg1;
- (void)setTopPanelView:(id)arg1;
- (id)topPanelHingeView;
- (id)topPanelView;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(bool)arg3;
- (bool)wantsManagedVibrancyEffect;

@end
