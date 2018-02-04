/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAConstraintSupport : AceObject <SAAceSerializable>

@property (nonatomic, retain) <SASupportCondition> *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *property;
@property (readonly) Class superclass;

+ (id)constraintSupport;
+ (id)constraintSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)condition;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)property;
- (void)setCondition:(id)arg1;
- (void)setProperty:(id)arg1;

@end
