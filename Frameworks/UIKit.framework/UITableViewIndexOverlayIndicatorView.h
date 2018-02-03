/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewIndexOverlayIndicatorView : UIView {
    UILabel * _label;
    UITableView * _table;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, copy) NSString *currentText;

- (void).cxx_destruct;
- (void)_invalidateTable;
- (void)_tapGestureChanged:(id)arg1;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)currentText;
- (id)initWithTable:(id)arg1;
- (void)layoutSubviews;
- (void)setCurrentText:(id)arg1;

@end