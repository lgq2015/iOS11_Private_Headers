/* made by EzioChiu.
 */

@protocol HAPHTTPClientDelegate <NSObject>

@required

- (void)httpClient:(HAPHTTPClient *)arg1 didReceiveEvent:(id)arg2;
- (void)httpClientDidCloseConnectionDueToServer:(HAPHTTPClient *)arg1;

@end
