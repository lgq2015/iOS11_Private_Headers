/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKLinkedAnswerGroup : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *linkedAnswers;
@property (nonatomic, copy) NSNumber *numberOfResults;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)linkedAnswerGroup;
+ (id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)linkedAnswers;
- (id)numberOfResults;
- (void)setLinkedAnswers:(id)arg1;
- (void)setNumberOfResults:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
