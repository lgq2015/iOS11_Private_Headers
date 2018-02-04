/* made by EzioChiu.
 */

@protocol MPRemoteCommandDelegate_Private <NSObject>

@required

- (bool)remoteCommand:(MPRemoteCommand *)arg1 isEnabledForContentItemIdentifier:(NSString *)arg2;
- (bool)remoteCommand:(MPRemoteCommand *)arg1 isSupportedForContentItemIdentifier:(NSString *)arg2;

@end
