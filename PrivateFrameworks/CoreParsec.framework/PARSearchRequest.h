/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSearchRequest : PARRequest <NSSecureCoding> {
    unsigned long long  _bingWebResultsType;
    NSArray * _completionCacheSuggestions;
    SFSearchSuggestion * _engagedSuggestion;
    NSString * _l2version;
    NSString * _l3version;
    NSArray * _localContextualSuggestions;
    NSString * _queryString;
    NSDictionary * _topics;
}

@property (nonatomic) unsigned long long bingWebResultsType;
@property (nonatomic, retain) NSArray *completionCacheSuggestions;
@property (nonatomic, retain) SFSearchSuggestion *engagedSuggestion;
@property (nonatomic, copy) NSString *l2version;
@property (nonatomic, copy) NSString *l3version;
@property (nonatomic, copy) NSArray *localContextualSuggestions;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic, retain) NSDictionary *topics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bingWebResultsType;
- (id)completionCacheSuggestions;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedSuggestion;
- (id)initWithCoder:(id)arg1;
- (id)l2version;
- (id)l3version;
- (id)localContextualSuggestions;
- (id)queryString;
- (void)setBingWebResultsType:(unsigned long long)arg1;
- (void)setCompletionCacheSuggestions:(id)arg1;
- (void)setEngagedSuggestion:(id)arg1;
- (void)setL2version:(id)arg1;
- (void)setL3version:(id)arg1;
- (void)setLocalContextualSuggestions:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setTopics:(id)arg1;
- (id)topics;

@end
