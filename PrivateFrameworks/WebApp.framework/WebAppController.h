/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

@interface WebAppController : NSObject {
    UIView * _loadingView;
    long long  _orientation;
    UIWebClip * _webClip;
    UIWindow * _window;
    bool  snapshotHideTimeHasExpired;
    NSTimer * snapshotHideTimer;
}

@property (nonatomic, retain) UIWebClip *webClip;

- (void).cxx_destruct;
- (void)_cancelSnapshotHideTimer;
- (void)_createLoadingView;
- (void)dealloc;
- (void)hideLoadingView;
- (id)initForWebClipURL:(id)arg1;
- (void)setWebClip:(id)arg1;
- (void)timeLimitForLoadCompletionExpired;
- (id)webClip;

@end
