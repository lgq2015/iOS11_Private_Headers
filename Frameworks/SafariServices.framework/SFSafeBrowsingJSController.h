/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFSafeBrowsingJSController : NSObject <SFSafeBrowsingJSControllerMethods> {
    _SFWebProcessPlugInPageSafeBrowsingController * _safeBrowsingController;
}

- (void).cxx_destruct;
- (id)UIString:(id)arg1;
- (void)closePageSelected;
- (void)goBackSelected;
- (void)ignoreWarningSelected;
- (id)initWithSafeBrowsingController:(id)arg1;
- (id)learnMoreAboutPhishingURL:(id)arg1;
- (void)loaded;
- (id)malwareDetailsURL:(id)arg1;
- (id)reportAnErrorURL:(id)arg1;
- (id)safeBrowsingProviderString:(id)arg1;

@end
