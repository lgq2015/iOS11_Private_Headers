/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFQuickLookDocumentController : NSObject <_SFQuickLookDocumentViewDelegate> {
    NSArray * _buttonActions;
    UIDocumentInteractionController * _documentInteractionController;
    _SFQuickLookDocumentView * _documentView;
    _SFQuickLookDocument * _quickLookDocument;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *documentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionTitleForType:(long long)arg1 withActionCount:(unsigned long long)arg2;
- (id)_supportedApplications;
- (void)_updateActionButtons;
- (long long)dataOwnerForQuickLookDocumentView:(id)arg1;
- (id)documentView;
- (id)init;
- (id)itemProviderForQuickLookDocumentView:(id)arg1;
- (void)presentDocumentInteractionControllerFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)quickLookDocumentView:(id)arg1 didSelectActionAtIndex:(long long)arg2;
- (void)updateTopContentInset:(double)arg1;
- (void)updateWithQuickLookDocument:(id)arg1;

@end
