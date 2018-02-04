/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKHistogramQuery : _DKQuery <_DKExecutableQuery> {
    id /* block */  _histogramHandler;
    bool  _includeLocalResults;
    bool  _includeRemoteResults;
    NSDateInterval * _interval;
    bool  _isCategory;
    unsigned long long  _minimumOccurrencesForInclusion;
    _DKEventStream * _stream;
}

@property (nonatomic, copy) id /* block */ histogramHandler;
@property (nonatomic) bool includeLocalResults;
@property (nonatomic) bool includeRemoteResults;
@property (nonatomic, retain) NSDateInterval *interval;
@property (nonatomic) bool isCategory;
@property (nonatomic) unsigned long long minimumOccurrencesForInclusion;
@property (nonatomic, retain) _DKEventStream *stream;

+ (id)histogramQueryForStream:(id)arg1 interval:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_constructFetchRequestPredicate;
- (id)_fetchRemoteResultsWithStorage:(id)arg1 error:(id*)arg2;
- (id)_histogramFromEvents:(id)arg1;
- (id)_histogramFromManagedObjects:(id)arg1;
- (id)_valueForEvent:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id /* block */)histogramHandler;
- (bool)includeLocalResults;
- (bool)includeRemoteResults;
- (id)initWithCoder:(id)arg1;
- (id)interval;
- (bool)isCategory;
- (unsigned long long)minimumOccurrencesForInclusion;
- (void)setHistogramHandler:(id /* block */)arg1;
- (void)setIncludeLocalResults:(bool)arg1;
- (void)setIncludeRemoteResults:(bool)arg1;
- (void)setInterval:(id)arg1;
- (void)setIsCategory:(bool)arg1;
- (void)setMinimumOccurrencesForInclusion:(unsigned long long)arg1;
- (void)setStream:(id)arg1;
- (id)stream;

@end
