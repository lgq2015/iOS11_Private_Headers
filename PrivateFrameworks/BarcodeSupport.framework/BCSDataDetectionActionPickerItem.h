/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSDataDetectionActionPickerItem : BCSActionPickerItem <DDDetectionControllerInteractionDelegate> {
    DDAction * _ddAction;
}

@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)action:(id)arg1 didDismissAlertController:(id)arg2;
- (id)actionURL;
- (id)contact;
- (id)initWithAction:(id)arg1 ddAction:(id)arg2;
- (bool)isCopyActionItem;
- (id)label;
- (void)performAction;
- (bool)shouldDismissAlertWhenActionIsTaken;
- (id)targetApplicationBundleIdentifier;

@end
