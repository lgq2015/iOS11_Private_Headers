/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *definition;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *examples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *variations;

+ (id)definitionEntry;
+ (id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2;

- (id)definition;
- (id)encodedClassName;
- (id)examples;
- (id)groupIdentifier;
- (void)setDefinition:(id)arg1;
- (void)setExamples:(id)arg1;
- (void)setVariations:(id)arg1;
- (id)variations;

@end
