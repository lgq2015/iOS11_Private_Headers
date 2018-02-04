/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMatchupPlaySummary : AceObject <SAAceSerializable>

@property (nonatomic) bool appliesToAwayTeam;
@property (nonatomic) bool appliesToHomeTeam;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *nonFormattedTime;
@property (nonatomic, retain) SASportsAthlete *offensivePlayer;
@property (nonatomic, copy) NSString *summaryDescription;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *time;

+ (id)matchupPlaySummary;
+ (id)matchupPlaySummaryWithDictionary:(id)arg1 context:(id)arg2;

- (bool)appliesToAwayTeam;
- (bool)appliesToHomeTeam;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nonFormattedTime;
- (id)offensivePlayer;
- (void)setAppliesToAwayTeam:(bool)arg1;
- (void)setAppliesToHomeTeam:(bool)arg1;
- (void)setNonFormattedTime:(id)arg1;
- (void)setOffensivePlayer:(id)arg1;
- (void)setSummaryDescription:(id)arg1;
- (void)setTime:(id)arg1;
- (id)summaryDescription;
- (id)time;

@end
