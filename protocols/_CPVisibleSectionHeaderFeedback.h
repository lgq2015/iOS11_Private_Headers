/* made by EzioChiu.
 */

@protocol _CPVisibleSectionHeaderFeedback <NSObject>

@required

- (bool)hasHeaderType;
- (bool)hasSection;
- (bool)hasTimestamp;
- (int)headerType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPResultSectionForFeedback *)section;
- (void)setHeaderType:(int)arg1;
- (void)setSection:(_CPResultSectionForFeedback *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
