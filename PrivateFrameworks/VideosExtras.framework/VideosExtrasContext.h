/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasContext : NSObject <VideosExtrasPlaybackDelegate> {
    NSString * _buyParameters;
    <VideosExtrasContextDelegate> * _delegate;
    VideosExtrasRootViewController * _extrasRootViewController;
    MPPlaybackContext * _featurePlaybackContext;
    UIViewController * _featurePlaybackViewController;
    NSURL * _javascriptURL;
    MPMediaItem * _mediaItem;
    long long  _storeID;
}

@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VideosExtrasContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VideosExtrasRootViewController *extrasRootViewController;
@property (nonatomic, retain) MPPlaybackContext *featurePlaybackContext;
@property (nonatomic, retain) UIViewController *featurePlaybackViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *javascriptURL;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (nonatomic, readonly) long long storeID;
@property (readonly) Class superclass;

+ (Class)extrasRootViewControllerClass;
+ (id)overriddenJavascriptURL;
+ (void)overrideJavascriptURL:(id)arg1;

- (void).cxx_destruct;
- (void)_configureForMediaItem:(id)arg1;
- (id)buyParameters;
- (id)delegate;
- (void)extrasRequestReloadWithContext:(id)arg1;
- (void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(bool)arg2;
- (void)extrasRequestsPlaybackStop;
- (id)extrasRootViewController;
- (void)failWithError:(id)arg1;
- (id)featurePlaybackContext;
- (id)featurePlaybackViewController;
- (id)init;
- (id)initWithApplicationJavascriptURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3;
- (id)initWithMediaItem:(id)arg1;
- (id)javascriptURL;
- (id)mediaItem;
- (void)setDelegate:(id)arg1;
- (void)setFeaturePlaybackContext:(id)arg1;
- (void)setFeaturePlaybackViewController:(id)arg1;
- (long long)storeID;

@end
