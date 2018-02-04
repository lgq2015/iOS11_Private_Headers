/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNMaskingTableView : UITableView {
    double  _maskingInset;
    UIView * _tableMaskView;
}

@property (nonatomic) double maskingInset;
@property (nonatomic, retain) UIView *tableMaskView;

- (void).cxx_destruct;
- (double)maskingInset;
- (void)setMaskingInset:(double)arg1;
- (void)setTableMaskView:(id)arg1;
- (id)tableMaskView;

@end
