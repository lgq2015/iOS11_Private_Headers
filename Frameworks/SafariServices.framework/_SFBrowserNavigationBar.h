/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserNavigationBar : _SFNavigationBar

@property (nonatomic, readonly) _SFBrowserToolbar *toolbar;

+ (long long)_metricsCategory;

- (id)newTextField;
- (double)placeholderHorizontalInset;
- (void)tintColorDidChange;
- (id)toolbar;
- (id)toolbarPlacedOnTop;
- (void)updateToolbarTintColor;

@end
