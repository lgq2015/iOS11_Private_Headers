/* made by EzioChiu.
 */

@protocol NTHeadlinePersonalizationMetadata <NSSecureCoding, NSCopying>

@required

- (NSString *)articleID;
- (NSString *)publisherID;
- (NSDictionary *)scoredTopicIDs;

@end
