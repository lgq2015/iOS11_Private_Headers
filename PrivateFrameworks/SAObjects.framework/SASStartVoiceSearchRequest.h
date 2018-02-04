/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation

@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSDictionary *queryParameters;
@property (nonatomic, copy) NSArray *searchTypes;

+ (id)startVoiceSearchRequest;
+ (id)startVoiceSearchRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)headers;
- (id)queryParameters;
- (bool)requiresResponse;
- (id)searchTypes;
- (void)setHeaders:(id)arg1;
- (void)setQueryParameters:(id)arg1;
- (void)setSearchTypes:(id)arg1;

@end
