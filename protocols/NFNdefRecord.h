/* made by EzioChiu.
 */

@protocol NFNdefRecord <NSObject>

@required

- (NSData *)asData;
- (bool)chunked;
- (NSString *)decode;
- (unsigned char)header;
- (NSData *)identifier;
- (id)initWithNDEFRecord:(id <NFNdefRecord>)arg1;
- (bool)isURIRecord;
- (bool)messageBegin;
- (bool)messageEnd;
- (NSData *)payload;
- (void)setChunked:(bool)arg1;
- (void)setHeader:(unsigned char)arg1;
- (void)setIdentifier:(NSData *)arg1;
- (void)setMessageBegin:(bool)arg1;
- (void)setMessageEnd:(bool)arg1;
- (void)setPayload:(NSData *)arg1;
- (void)setShortRecord:(bool)arg1;
- (void)setType:(NSData *)arg1;
- (void)setTypeNameFormat:(unsigned char)arg1;
- (bool)shortRecord;
- (NSData *)type;
- (unsigned char)typeNameFormat;

@end
