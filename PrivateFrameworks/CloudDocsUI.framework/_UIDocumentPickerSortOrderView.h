/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerSortOrderView : UIControl {
    NSArray * _centeredConstraints;
    NSArray * _leftAlignedConstraints;
    long long  _listMode;
    UIButton * _listModeToggle;
    bool  _listModeToggleHidden;
    <_UIDocumentPickerViewServiceViewController> * _serviceViewController;
    UISegmentedControl * _sortOrder;
}

@property (nonatomic, copy) NSArray *centeredConstraints;
@property (nonatomic, copy) NSArray *leftAlignedConstraints;
@property (nonatomic) long long listMode;
@property (nonatomic, retain) UIButton *listModeToggle;
@property (nonatomic) bool listModeToggleHidden;
@property (nonatomic) <_UIDocumentPickerViewServiceViewController> *serviceViewController;
@property (nonatomic, retain) UISegmentedControl *sortOrder;
@property (nonatomic) int value;

- (void).cxx_destruct;
- (void)_toggleListMode:(id)arg1;
- (id)centeredConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftAlignedConstraints;
- (long long)listMode;
- (id)listModeToggle;
- (bool)listModeToggleHidden;
- (id)serviceViewController;
- (void)setCenteredConstraints:(id)arg1;
- (void)setLeftAlignedConstraints:(id)arg1;
- (void)setListMode:(long long)arg1;
- (void)setListModeToggle:(id)arg1;
- (void)setListModeToggleHidden:(bool)arg1;
- (void)setNeedsLayout;
- (void)setServiceViewController:(id)arg1;
- (void)setSortOrder:(id)arg1;
- (void)setValue:(int)arg1;
- (id)sortOrder;
- (void)updateForListMode;
- (int)value;
- (void)valueChanged:(id)arg1;

@end
