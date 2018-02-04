/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASemanticValue : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *semanticValue;
@property (readonly) Class superclass;

+ (id)semanticValue;
+ (id)semanticValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)semanticValue;
- (void)setSemanticValue:(id)arg1;

@end
