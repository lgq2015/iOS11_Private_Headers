/* made by EzioChiu.
 */

@protocol SFSafeBrowsingJSControllerMethods <JSExport>

@required

- (NSString *)UIString:(NSString *)arg1;
- (void)closePageSelected;
- (void)goBackSelected;
- (void)ignoreWarningSelected;
- (NSString *)learnMoreAboutPhishingURL:(NSString *)arg1;
- (void)loaded;
- (NSString *)malwareDetailsURL:(NSString *)arg1;
- (NSString *)reportAnErrorURL:(NSString *)arg1;
- (NSString *)safeBrowsingProviderString:(NSString *)arg1;

@end
