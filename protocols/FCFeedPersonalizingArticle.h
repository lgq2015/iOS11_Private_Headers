/* made by EzioChiu.
 */

@protocol FCFeedPersonalizingArticle <NSObject>

@required

- (unsigned long long)articleContentType;
- (NSString *)articleID;
- (void)enumerateTopicCohortsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *, void*
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *)globalCohort;
- (double)globalUserFeedback;
- (unsigned long long)halfLife;
- (bool)hasGlobalUserFeedback;
- (bool)hasVideo;
- (bool)isPaid;
- (NSDate *)publishDate;
- (COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *)publisherCohort;
- (NSString *)publisherID;
- (NSString *)sourceFeedID;
- (NSArray *)topicIDs;

@end
