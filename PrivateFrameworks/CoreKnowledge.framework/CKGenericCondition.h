/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKGenericCondition : NSObject <NSCopying, NSSecureCoding> {
    void negated;
    void sql.storage;
    void type;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, copy) NSString *sql;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)and:(id)arg1;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateOn:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchType:(long long)arg1 value:(id)arg2 negated:(bool)arg3;
- (id)initWithValue:(bool)arg1;
- (id)or:(id)arg1;
- (id)predicate;
- (void)setSql:(id)arg1;
- (id)sql;

@end
