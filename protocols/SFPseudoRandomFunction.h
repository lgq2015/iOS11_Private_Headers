/* made by EzioChiu.
 */

@protocol SFPseudoRandomFunction <NSObject, NSCopying, NSSecureCoding>

@required

- (NSData *)generateBytesWithLength:(long long)arg1 key:(_SFKey *)arg2 error:(NSError *)arg3;

@end
