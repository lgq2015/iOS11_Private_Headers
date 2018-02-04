/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAppDocumentController : NSObject <IKAppDocumentDelegate> {
    IKAppDocument * _appDocument;
    <VSAppDocumentControllerDelegate> * _delegate;
    IKViewElement * _templateElement;
    VSViewModel * _viewModel;
    NSError * _viewModelError;
}

@property (nonatomic, retain) IKAppDocument *appDocument;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAppDocumentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) IKViewElement *templateElement;
@property (nonatomic, retain) VSViewModel *viewModel;
@property (nonatomic, retain) NSError *viewModelError;

- (void).cxx_destruct;
- (id)_imageItemProviderWithImageElement:(id)arg1;
- (id)_newViewModel;
- (void)_notiftyDidFailToUpdateViewModelWithError:(id)arg1;
- (void)_notiftyDidUpdateViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (bool)_updateViewModel:(id)arg1 WithError:(id*)arg2;
- (id)appDocument;
- (void)dealloc;
- (id)delegate;
- (bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)init;
- (id)initWithAppDocument:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAppDocument:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTemplateElement:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setViewModelError:(id)arg1;
- (id)templateElement;
- (id)viewModel;
- (id)viewModelError;

@end