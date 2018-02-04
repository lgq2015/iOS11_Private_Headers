/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDefinitionVariation : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *examples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *variation;

+ (id)definitionVariation;
+ (id)definitionVariationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)examples;
- (id)groupIdentifier;
- (void)setExamples:(id)arg1;
- (void)setVariation:(id)arg1;
- (id)variation;

@end
