/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPreviewDocumentController : NSObject <IKAppDocumentDelegate, SKUIStatusOverlayProvider> {
    SUAudioPlayer * _audioPlayer;
    SKUIClientContext * _clientContext;
    IKAppDocument * _document;
    NSOperationQueue * _operationQueue;
    NSHashTable * _viewControllers;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPreviewActive, nonatomic, readonly) bool previewActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (void)_connectToAudioPlayer;
- (id)_operationQueue;
- (void)_playerSessionsDidChangeNotification:(id)arg1;
- (void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(bool)arg2;
- (id)clientContext;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (bool)isPreviewActive;
- (id)overlayViewControllerWithBackgroundStyle:(long long)arg1;
- (void)setClientContext:(id)arg1;

@end
