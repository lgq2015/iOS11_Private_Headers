/* made by EzioChiu.
 */

@protocol ICSQLiteConnectionDelegate <NSObject>

@optional

- (bool)connectionNeedsResetForCorruption:(ICSQLiteConnection *)arg1;

@end
