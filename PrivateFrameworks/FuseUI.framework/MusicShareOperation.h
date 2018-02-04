/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicShareOperation : NSObject {
    bool  _container;
    MusicEntityValueContext * _entityValueContext;
    <MusicEntityValueProviding> * _entityValueProvider;
    NSDictionary * _extraInfo;
    MPUContentItemIdentifierCollection * _identifierCollection;
    NSString * _jsButtonIdentifier;
    MusicEntityValueProviderWrapper * _playlistWrapper;
    UIViewController * _presentationViewController;
    UIViewController<MusicJSNativeViewControllerFactory> * _viewControllerWithJSNativeViewController;
}

@property (getter=isContainer, nonatomic, readonly) bool container;
@property (nonatomic, readonly) MusicEntityValueContext *entityValueContext;
@property (nonatomic, readonly) <MusicEntityValueProviding> *entityValueProvider;
@property (nonatomic, retain) NSDictionary *extraInfo;
@property (nonatomic, readonly) MPUContentItemIdentifierCollection *identifierCollection;
@property (nonatomic, copy) NSString *jsButtonIdentifier;
@property (nonatomic) UIViewController *presentationViewController;
@property (getter=isSharingDisabled, nonatomic, readonly) bool sharingDisabled;
@property (nonatomic, readonly) NSString *sharingTitle;
@property (nonatomic, retain) UIViewController<MusicJSNativeViewControllerFactory> *viewControllerWithJSNativeViewController;

+ (id)_localizedShareStringForContentType:(unsigned long long)arg1;
+ (bool)canShareWithEntityValueContext:(id)arg1 forContainer:(bool)arg2;

- (void).cxx_destruct;
- (void)_dispatchEvent;
- (void)_dispatchEventForPlaylist;
- (void)dispatchEvent;
- (id)entityValueContext;
- (id)entityValueProvider;
- (id)extraInfo;
- (id)identifierCollection;
- (id)initWithMusicEntityValueContext:(id)arg1 forContainer:(bool)arg2;
- (bool)isContainer;
- (bool)isSharingDisabled;
- (id)jsButtonIdentifier;
- (id)presentationViewController;
- (void)setExtraInfo:(id)arg1;
- (void)setJsButtonIdentifier:(id)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setViewControllerWithJSNativeViewController:(id)arg1;
- (id)sharingTitle;
- (id)viewControllerWithJSNativeViewController;

@end
