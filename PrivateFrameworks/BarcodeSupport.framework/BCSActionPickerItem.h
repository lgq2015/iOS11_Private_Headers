/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSActionPickerItem : NSObject {
    BCSAction * _action;
    id /* block */  _actionHandler;
    <BCSActionPickerItemDelegate> * _actionPickerItemDelegate;
    NSURL * _actionURL;
    bool  _copyActionItem;
    NSString * _label;
    NSString * _targetApplicationBundleIdentifier;
}

@property (nonatomic) <BCSActionPickerItemDelegate> *actionPickerItemDelegate;
@property (nonatomic, readonly, copy) NSURL *actionURL;
@property (getter=isCopyActionItem, nonatomic, readonly) bool copyActionItem;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) bool shouldDismissAlertWhenActionIsTaken;
@property (nonatomic, readonly, copy) NSString *targetApplicationBundleIdentifier;

+ (id)actionPickerItemWithLabel:(id)arg1 actionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)actionPickerItemDelegate;
- (id)actionURL;
- (void)didPerformAction;
- (id)initWithAction:(id)arg1;
- (id)initWithLabel:(id)arg1 action:(id)arg2;
- (id)initWithLabel:(id)arg1 actionHandler:(id /* block */)arg2;
- (bool)isCopyActionItem;
- (id)label;
- (void)performAction;
- (void)setActionPickerItemDelegate:(id)arg1;
- (bool)shouldDismissAlertWhenActionIsTaken;
- (id)targetApplicationBundleIdentifier;

@end
