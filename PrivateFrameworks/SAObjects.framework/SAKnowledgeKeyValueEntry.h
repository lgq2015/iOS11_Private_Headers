/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAKnowledgeKeyValueEntry : SABaseClientBoundCommand <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *storeName;
@property (nonatomic, copy) NSString *storeType;
@property (readonly) Class superclass;

+ (id)keyValueEntry;
+ (id)keyValueEntryWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)key;
- (bool)requiresResponse;
- (void)setKey:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setStoreType:(id)arg1;
- (id)storeName;
- (id)storeType;

@end
