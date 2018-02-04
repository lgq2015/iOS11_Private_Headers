/* made by EzioChiu.
 */

@protocol HMDMediaBrowserDelegate <NSObject>

@required

- (void)browser:(HMDMediaBrowser *)arg1 didAddAdvertisements:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didRemoveAdvertisements:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didUpdateEndpoints:(NSArray *)arg2;

@end