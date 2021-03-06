/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewCellOldEditingData : NSObject {
    UIControl * _grabber;
    UIRemoveControl * _removeControl;
    UIView * _separator;
}

@property (nonatomic, retain) UIControl *reorderControl;
@property (nonatomic, retain) UIView *separatorView;

- (void).cxx_destruct;
- (bool)dataRequired;
- (id)reorderControl;
- (id)separatorView;
- (void)setReorderControl:(id)arg1;
- (void)setSeparatorView:(id)arg1;

@end
