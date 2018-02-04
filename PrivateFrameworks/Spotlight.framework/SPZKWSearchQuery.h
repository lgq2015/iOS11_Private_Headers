/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPZKWSearchQuery : SPQueryTask {
    ATXClient * _atxClient;
    _DECCachedConsumer * _cachedConsumer;
    NSArray * _mutableSections;
    bool  _springBoardIsActive;
}

@property (retain) ATXClient *atxClient;
@property (retain) _DECCachedConsumer *cachedConsumer;
@property bool springBoardIsActive;

- (void).cxx_destruct;
- (void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3;
- (void)addSuggestedResults:(id)arg1 toSection:(id)arg2 collectedResults:(id)arg3 queryIdent:(unsigned long long)arg4;
- (id)atxClient;
- (id)cachedConsumer;
- (unsigned long long)maxZKWSuggestedQueries;
- (void)setAtxClient:(id)arg1;
- (void)setCachedConsumer:(id)arg1;
- (void)setSpringBoardIsActive:(bool)arg1;
- (bool)springBoardIsActive;
- (void)start;
- (id)unsafeLocalSuggestions;
- (id)unsafeSections;
- (id)unsafeSessionEntityString;
- (id)unsafeSuggestions;

@end
