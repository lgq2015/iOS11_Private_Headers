/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAKnowledgeGraphTriple : AceObject <SAAceSerializable>

@property (nonatomic) float confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *object;
@property (nonatomic, copy) NSString *predicate;
@property (nonatomic, copy) NSString *storeName;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;

+ (id)graphTriple;
+ (id)graphTripleWithDictionary:(id)arg1 context:(id)arg2;

- (float)confidence;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)object;
- (id)predicate;
- (void)setConfidence:(float)arg1;
- (void)setObject:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)storeName;
- (id)subject;

@end
