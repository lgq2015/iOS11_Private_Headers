/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCompletionQuery : NSObject <NSCopying> {
    bool  _forLastSearch;
    unsigned long long  _indexInFeedbackArray;
    NSString * _normalizedQueryStringForParsec;
    NSString * _parsecFeedbackQueryIdentifier;
    struct duration<long long, std::__1::ratio<1, 1000> > { 
        long long __rep_; 
    }  _parsecLatency;
    NSURLRequest * _parsecSearchRequest;
    long long  _queryID;
    NSString * _queryString;
    NSArray * _querySuggestions;
    NSString * _rewrittenQueryStringFromParsec;
    NSString * _searchSuggestionProviderIdentifier;
    struct duration<long long, std::__1::ratio<1, 1000> > { 
        long long __rep_; 
    }  _searchSuggestionProviderLatency;
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { 
        struct duration<long long, std::__1::ratio<1, 1000000000> > { 
            long long __rep_; 
        } __d_; 
    }  _timestamp;
    unsigned long long  _triggerEvent;
}

@property (getter=isForLastSearch, nonatomic) bool forLastSearch;
@property (nonatomic) unsigned long long indexInFeedbackArray;
@property (nonatomic, readonly) NSString *normalizedQueryStringForParsec;
@property (nonatomic, copy) NSString *parsecFeedbackQueryIdentifier;
@property (nonatomic) /* Warning: unhandled struct encoding: '{duration<long long' */ struct  parsecLatency; /* unknown property attribute:  1000> >=q} */
@property (nonatomic, copy) NSURLRequest *parsecSearchRequest;
@property (nonatomic, readonly) long long queryID;
@property (nonatomic, readonly) NSString *queryString;
@property (copy) NSArray *querySuggestions;
@property (nonatomic, copy) NSString *rewrittenQueryStringFromParsec;
@property (nonatomic, copy) NSString *searchSuggestionProviderIdentifier;
@property (nonatomic) /* Warning: unhandled struct encoding: '{duration<long long' */ struct  searchSuggestionProviderLatency; /* unknown property attribute:  1000> >=q} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{time_point<std::__1::chrono::steady_clock' */ struct  timestamp; /* unknown property attribute:  1000000000> >=q}} */
@property (nonatomic) unsigned long long triggerEvent;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithQueryString:(id)arg1 queryID:(long long)arg2 timestamp:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg3 indexInFeedbackArray:(unsigned long long)arg4 triggerEvent:(unsigned long long)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)indexInFeedbackArray;
- (id)init;
- (id)initWithQueryString:(id)arg1;
- (id)initWithQueryString:(id)arg1 queryID:(long long)arg2;
- (bool)isForLastSearch;
- (id)normalizedQueryStringForParsec;
- (id)parsecFeedbackQueryIdentifier;
- (struct duration<long long, std::__1::ratio<1, 1000> > { long long x1; })parsecLatency;
- (id)parsecSearchRequest;
- (long long)queryID;
- (id)queryString;
- (id)querySuggestions;
- (id)rewrittenQueryStringFromParsec;
- (id)searchSuggestionProviderIdentifier;
- (struct duration<long long, std::__1::ratio<1, 1000> > { long long x1; })searchSuggestionProviderLatency;
- (void)setForLastSearch:(bool)arg1;
- (void)setIndexInFeedbackArray:(unsigned long long)arg1;
- (void)setParsecFeedbackQueryIdentifier:(id)arg1;
- (void)setParsecLatency:(struct duration<long long, std::__1::ratio<1, 1000> > { long long x1; })arg1;
- (void)setParsecSearchRequest:(id)arg1;
- (void)setQuerySuggestions:(id)arg1;
- (void)setRewrittenQueryStringFromParsec:(id)arg1;
- (void)setSearchSuggestionProviderIdentifier:(id)arg1;
- (void)setSearchSuggestionProviderLatency:(struct duration<long long, std::__1::ratio<1, 1000> > { long long x1; })arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })timestamp;
- (unsigned long long)triggerEvent;

@end
