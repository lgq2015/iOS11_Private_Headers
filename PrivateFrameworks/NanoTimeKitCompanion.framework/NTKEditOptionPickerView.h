/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKEditOptionPickerView : UIView {
    bool  _active;
    NTKPolygonCylinderView * _cylinderView;
    unsigned long long  _numberOfRows;
    unsigned long long  _numberOfSides;
    id /* block */  _optionToViewMapper;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    NSArray * _rows;
    UIView * _selectedOptionView;
    unsigned long long  _selectedRowIndex;
    unsigned long long  _visibleRowBufferSize;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) NTKPolygonCylinderView *cylinderView;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic) unsigned long long numberOfSides;
@property (nonatomic, copy) id /* block */ optionToViewMapper;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) id selectedOption;
@property (nonatomic, readonly) UIView *selectedOptionView;
@property (nonatomic) unsigned long long selectedRowIndex;

- (void).cxx_destruct;
- (void)_configureFaceView:(id)arg1 forOption:(id)arg2;
- (Class)_cylinderFaceViewClass;
- (void)_enumerateFaceViewsWithBlock:(id /* block */)arg1;
- (id)_faceViewAtFaceIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForCylinderView;
- (void)_rotateAnimatedToSelectedRowFromRow:(unsigned long long)arg1;
- (void)_rotateToSelectedRow;
- (id)_selectedFaceView;
- (void)_tileCylinderForRotationDirection:(long long)arg1;
- (void)_willDisplayFaceView:(id)arg1;
- (bool)active;
- (void)applyBreathingScale:(double)arg1;
- (void)applyRubberBandingFraction:(double)arg1;
- (id)cylinderView;
- (void)decrementSelection;
- (id)description;
- (void)incrementSelection;
- (id)initWithOptions:(id)arg1 selectedOption:(id)arg2;
- (void)layoutSubviews;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfSides;
- (id)optionAtIndex:(unsigned long long)arg1;
- (id /* block */)optionToViewMapper;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)selectedOption;
- (id)selectedOptionView;
- (unsigned long long)selectedRowIndex;
- (void)setActive:(bool)arg1;
- (void)setNumberOfSides:(unsigned long long)arg1;
- (void)setOptionToViewMapper:(id /* block */)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectedRowIndex:(unsigned long long)arg1;
- (void)setSelectedRowIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

@end
