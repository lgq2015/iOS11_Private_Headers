/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactViewHostViewController : _UIRemoteViewController <CNContactContentViewController, CNContactViewHostProtocol> {
    <NSCopying> * _currentRequestIdentifier;
    <CNContactViewHostProtocol> * _delegate;
    NSExtension * _extension;
    <CNContactViewControllerPPTDelegate> * _pptDelegate;
}

@property (nonatomic, retain) <NSCopying> *currentRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactViewHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CNContactViewControllerPPTDelegate> *pptDelegate;
@property (readonly) Class superclass;

+ (id)contactViewExtension;
+ (id)contextForIdentifier:(id)arg1;
+ (bool)getViewController:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)currentRequestIdentifier;
- (id)delegate;
- (void)didChangePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didChangeToEditMode:(bool)arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)editCancel;
- (id)extension;
- (void)invalidate;
- (void)isPresentingEditingController:(bool)arg1;
- (void)isPresentingFullscreen:(bool)arg1;
- (id)pptDelegate;
- (id)protocolContext;
- (void)setCurrentRequestIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setPptDelegate:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;
- (bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)toggleEditing;
- (void)updateEditing:(bool)arg1 doneButtonEnabled:(bool)arg2 doneButtonText:(id)arg3;
- (void)viewDidAppear;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
