/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIAppPunchOut *leagueAppPunchOut;
@property (nonatomic, retain) SASportsMetadata *metadata;
@property (nonatomic, retain) SAUIAppPunchOut *providerPunchOut;
@property (readonly) Class superclass;

+ (id)athleteComparisonSnippetItemDetails;
+ (id)athleteComparisonSnippetItemDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)leagueAppPunchOut;
- (id)metadata;
- (id)providerPunchOut;
- (void)setLeagueAppPunchOut:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProviderPunchOut:(id)arg1;

@end
