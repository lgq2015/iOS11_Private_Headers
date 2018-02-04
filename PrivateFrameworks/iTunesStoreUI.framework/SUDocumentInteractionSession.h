/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDocumentInteractionSession : NSObject <UIDocumentInteractionControllerDelegate> {
    id /* block */  _completionHandler;
    UIDocumentInteractionController * _documentInteractionController;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancel;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (id)initWithDocumentInteractionController:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
