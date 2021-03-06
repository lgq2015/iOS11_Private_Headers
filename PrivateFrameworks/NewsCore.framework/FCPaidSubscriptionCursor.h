/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPaidSubscriptionCursor : NSObject <NSCoding> {
    NSMutableDictionary * _expiredChannelIDs;
    NSMutableSet * _processedChannelIDs;
    NSMutableDictionary * _supplementalArticleIDs;
}

@property (nonatomic, retain) NSMutableDictionary *expiredChannelIDs;
@property (nonatomic, retain) NSMutableSet *processedChannelIDs;
@property (nonatomic, retain) NSMutableDictionary *supplementalArticleIDs;

- (void).cxx_destruct;
- (unsigned long long)countForFeedItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expiredChannelIDs;
- (unsigned long long)expiredGroupEmitCountForChannelWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)processedChannelIDs;
- (void)purgeExpiredChannelIdentifiersNotInArray:(id)arg1;
- (void)purgeSupplementalArticleIDsNotInArray:(id)arg1 forChannel:(id)arg2;
- (void)setExpiredChannelIDs:(id)arg1;
- (void)setProcessedChannelIDs:(id)arg1;
- (void)setSupplementalArticleIDs:(id)arg1;
- (id)supplementalArticleIDs;
- (void)trackSupplementalFeedItem:(id)arg1;

@end
