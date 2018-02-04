/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFRequestDesktopSiteUIActivity : _SFActivity {
    _SFReloadOptionsController * _reloadOptionsController;
}

@property (nonatomic, readonly) _SFReloadOptionsController *reloadOptionsController;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)init;
- (id)initWithReloadOptionsController:(id)arg1;
- (void)performActivity;
- (void)performActivityWithCompletion:(id /* block */)arg1;
- (id)reloadOptionsController;

@end
