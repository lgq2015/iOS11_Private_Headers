/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteEntityTranslator : NSObject {
    Class  _MPModelClass;
    NSMutableDictionary * _propertiesToTranslators;
    NSMutableDictionary * _relationshipsToTranslators;
}

@property (nonatomic, readonly) Class MPModelClass;

+ (id)_translatorForMPModelClass:(Class)arg1;
+ (id)_translatorForMPModelClass:(Class)arg1 create:(bool)arg2;
+ (id)translatorForMPModelClass:(Class)arg1;

- (void).cxx_destruct;
- (Class)MPModelClass;
- (id)_propertyTranslatorForKeyPath:(id)arg1;
- (id)_valueForKeyPath:(id)arg1 forContentItem:(id)arg2 middleware:(id)arg3;
- (id)identifiersForContentItem:(id)arg1 middleware:(id)arg2;
- (void)mapIdentifierCreationBlock:(id /* block */)arg1;
- (void)mapPropertyKey:(id)arg1 toMPContentItemSelector:(SEL)arg2;
- (void)mapPropertyKey:(id)arg1 toValueTransformer:(id /* block */)arg2;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2;
- (id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 middleware:(id)arg3;
- (id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 middleware:(id)arg3 baseTranslator:(id)arg4 prependKeyPath:(id)arg5;

@end
