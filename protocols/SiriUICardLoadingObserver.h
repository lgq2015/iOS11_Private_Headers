/* made by EzioChiu.
 */

@protocol SiriUICardLoadingObserver <NSObject>

@required

- (void)cardLoadingMonitor:(SiriUICardLoadingMonitor *)arg1 didReceiveCardSnippet:(SACardSnippet *)arg2;

@end
