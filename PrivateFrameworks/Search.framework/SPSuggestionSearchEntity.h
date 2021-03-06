/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSuggestionSearchEntity : SPSearchEntity {
    NSString * _queryString;
    NSString * _tokenText;
}

@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) NSString *tokenText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;
- (id)queryString;
- (void)setQueryString:(id)arg1;
- (void)setTokenText:(id)arg1;
- (id)tokenText;

@end
