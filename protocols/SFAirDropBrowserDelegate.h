/* made by EzioChiu.
 */

@protocol SFAirDropBrowserDelegate <NSObject>

@required

- (void)browser:(SFAirDropBrowser *)arg1 didDeletePersonAtIndex:(unsigned long long)arg2;
- (void)browser:(SFAirDropBrowser *)arg1 didInsertPersonAtIndex:(unsigned long long)arg2;
- (void)browserDidChangePeople:(SFAirDropBrowser *)arg1;
- (void)browserWillChangePeople:(SFAirDropBrowser *)arg1;

@end
