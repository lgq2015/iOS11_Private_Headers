/* made by EzioChiu.
 */

@protocol CCUIContentModuleContentViewController <NSObject>

@required

- (double)preferredExpandedContentHeight;

@optional

- (bool)canDismissPresentedContent;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)didTransitionToExpandedContentMode:(bool)arg1;
- (void)dismissPresentedContentAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (double)preferredExpandedContentWidth;
- (bool)providesOwnPlatter;
- (bool)shouldBeginTransitionToExpandedContentModule;
- (bool)shouldFinishTransitionToExpandedContentModule;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)willTransitionToExpandedContentMode:(bool)arg1;

@end
