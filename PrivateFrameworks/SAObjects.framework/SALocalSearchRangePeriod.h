/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long endSecondsSinceMidnight;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long startSecondsSinceMidnight;
@property (readonly) Class superclass;

+ (id)rangePeriod;
+ (id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (long long)endSecondsSinceMidnight;
- (id)groupIdentifier;
- (void)setEndSecondsSinceMidnight:(long long)arg1;
- (void)setStartSecondsSinceMidnight:(long long)arg1;
- (long long)startSecondsSinceMidnight;

@end
