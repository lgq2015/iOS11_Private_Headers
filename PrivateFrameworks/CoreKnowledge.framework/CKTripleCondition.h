/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKTripleCondition : NSObject <NSCopying, NSSecureCoding> {
    void rawCondition;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) CKGenericCondition *rawCondition;

+ (id)forRulesFrom:(id)arg1;
+ (id)havingPredicate:(id)arg1 matchType:(long long)arg2 error:(id*)arg3;
+ (id)havingSubject:(id)arg1 andAbject:(id)arg2;
+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)and:(id)arg1;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateOn:(id)arg1;
- (id)init;
- (id)init:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3;
- (id)initWithValue:(bool)arg1;
- (id)or:(id)arg1;
- (id)rawCondition;
- (void)setRawCondition:(id)arg1;

@end
