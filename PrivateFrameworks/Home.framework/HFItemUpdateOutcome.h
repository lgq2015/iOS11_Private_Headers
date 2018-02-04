/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItemUpdateOutcome : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long  _outcomeType;
    NSDictionary * _results;
}

@property (nonatomic) unsigned long long outcomeType;
@property (nonatomic, readonly) NSDictionary *results;

+ (id)outcomeWithResults:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithResults:(id)arg1;
- (id)initWithResults:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)outcomeType;
- (id)results;
- (void)setOutcomeType:(unsigned long long)arg1;

@end
