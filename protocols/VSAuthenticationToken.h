/* made by EzioChiu.
 */

@protocol VSAuthenticationToken <NSObject>

@required

- (NSString *)body;
- (NSDate *)expirationDate;
- (id)initWithSerializedData:(NSData *)arg1;
- (bool)isOpaque;
- (bool)isValid;
- (NSData *)serializedData;
- (void)setBody:(NSString *)arg1;

@end
