/* made by EzioChiu.
 */

@protocol GEOTransitConnectionInfo <NSObject>

@required

- (NSArray *)labelItems;
- (unsigned long long)muid;
- (NSString *)name;
- (int)providerID;
- (NSURL *)urlToOpen;

@end
