/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasJSITunesStore : IKJSITunesStore <IKJSITunesStore, SKStoreProductViewControllerDelegatePrivate, VideosExtrasJSITunesStore> {
    UIViewController * _formPresentationViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIViewController *formPresentationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)formPresentationViewController;
- (void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2;
- (void)setFormPresentationViewController:(id)arg1;

@end
