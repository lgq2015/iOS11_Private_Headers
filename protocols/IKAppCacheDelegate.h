/* made by EzioChiu.
 */

@protocol IKAppCacheDelegate <NSObject>

@required

- (void)appCache:(IKAppCache *)arg1 didUpdateWithChecksum:(NSString *)arg2;

@end
