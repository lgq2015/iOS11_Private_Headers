/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPMutableUserSession : NSObject {
    NSString * _conversationId;
    NSString * _engagedSuggestion;
    SGQPMutablePredictionsSession * _queryPredictions;
    SGQPMutablePredictionsSession * _rankedCategories;
    unsigned long long  _searchAction;
    bool  _searchPerformed;
}

@property (readonly) NSString *conversationId;
@property (retain) NSString *engagedSuggestion;
@property (retain) SGQPMutablePredictionsSession *queryPredictions;
@property (retain) SGQPMutablePredictionsSession *rankedCategories;
@property unsigned long long searchAction;
@property bool searchPerformed;

+ (id)sessionWithConversationId:(id)arg1;

- (void).cxx_destruct;
- (void)clearEngagedPredictionsAndSetCustomQuerySearch;
- (id)conversationId;
- (id)engagedSuggestion;
- (id)initWithConversationId:(id)arg1;
- (id)queryPredictions;
- (id)rankedCategories;
- (unsigned long long)searchAction;
- (bool)searchPerformed;
- (void)setEngagedSuggestion:(id)arg1;
- (void)setQueryPredictions:(id)arg1;
- (void)setQueryPredictions:(id)arg1 messages:(id)arg2 language:(id)arg3 abGroup:(id)arg4;
- (void)setRankedCategories:(id)arg1;
- (void)setRankedCategories:(id)arg1 messages:(id)arg2 language:(id)arg3 abGroup:(id)arg4;
- (void)setSearchAction:(unsigned long long)arg1;
- (void)setSearchPerformed;
- (void)setSearchPerformed:(bool)arg1;

@end
