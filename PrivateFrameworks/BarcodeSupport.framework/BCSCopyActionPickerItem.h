/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSCopyActionPickerItem : BCSActionPickerItem {
    NSString * _textToCopy;
}

@property (nonatomic, readonly, copy) NSString *textToCopy;

- (void).cxx_destruct;
- (id)initWithAction:(id)arg1 textToCopy:(id)arg2;
- (bool)isCopyActionItem;
- (void)performAction;
- (id)textToCopy;

@end
