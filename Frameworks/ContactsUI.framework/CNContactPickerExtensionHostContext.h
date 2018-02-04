/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPickerExtensionHostContext : NSExtensionContext <CNContactPickerHostProtocol, CNContactPickerServiceProtocol> {
    CNContactPickerHostViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) CNContactPickerHostViewController *viewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)invalidateSelectionAnimated:(bool)arg1;
- (void)pickerDidCancel;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)setViewController:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;
- (id)viewController;

@end
