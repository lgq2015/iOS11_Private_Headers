/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFSGSuggestContactMatchesWithTextSearch : SADomainCommand <CFLocalAceHandling, SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long limit;
@property (nonatomic, copy) NSString *query;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestContactMatchesWithTextSearch;
+ (id)suggestContactMatchesWithTextSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceEmailsFromSuggestedEmails:(id)arg1;
- (id)aceLocationsFromSuggestedLocations:(id)arg1;
- (id)acePhoneNumbersFromSuggestedPhoneNumbers:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;
- (long long)limit;
- (id)query;
- (bool)requiresResponse;
- (void)setLimit:(long long)arg1;
- (void)setQuery:(id)arg1;
- (id)suggestedContactFromSuggestedContactMatches:(id)arg1 withService:(id)arg2 withOrigin:(bool)arg3;

@end
