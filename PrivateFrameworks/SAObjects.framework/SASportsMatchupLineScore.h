/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMatchupLineScore : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *period;
@property (nonatomic, copy) NSString *score;
@property (readonly) Class superclass;

+ (id)matchupLineScore;
+ (id)matchupLineScoreWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)period;
- (id)score;
- (void)setPeriod:(id)arg1;
- (void)setScore:(id)arg1;

@end
