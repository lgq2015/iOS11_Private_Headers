/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSegmentedCtrl : UIControl {
    NSArray * _buttons;
    NSArray * _images;
    unsigned long long  _selectedSegment;
    NSMutableOrderedSet * _selectionStack;
    unsigned long long  _selectionType;
}

@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic, retain) NSArray *images;
@property (nonatomic) unsigned long long selectedSegment;
@property (nonatomic, retain) NSMutableOrderedSet *selectionStack;
@property (nonatomic) unsigned long long selectionType;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)_commonInit;
- (void)_configureForNewImages;
- (void)_setSelected:(bool)arg1 forSegment:(unsigned long long)arg2;
- (id)buttons;
- (void)deselectAllSegments;
- (id)images;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImages:(id)arg1;
- (bool)isEnabledForSegment:(unsigned long long)arg1;
- (bool)isSelectedForSegment:(unsigned long long)arg1;
- (id)segmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentCount;
- (id)segmentForTag:(long long)arg1;
- (void)selectSegmentWithTag:(long long)arg1;
- (unsigned long long)selectedSegment;
- (id)selectionStack;
- (unsigned long long)selectionType;
- (void)setButtons:(id)arg1;
- (void)setEnabled:(bool)arg1 forSegment:(unsigned long long)arg2;
- (void)setImages:(id)arg1;
- (void)setSelected:(bool)arg1 forSegment:(unsigned long long)arg2;
- (void)setSelectedSegment:(unsigned long long)arg1;
- (void)setSelectionStack:(id)arg1;
- (void)setSelectionType:(unsigned long long)arg1;
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;
- (long long)tagForSegment:(unsigned long long)arg1;

@end
