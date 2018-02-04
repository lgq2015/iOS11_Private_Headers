/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreEntityValueProvider : NSObject <MusicEntityValueProviding> {
    <MusicEntityProviding> * _childrenEntityProvider;
    MusicStoreItemMetadataContext * _storeItemMetadataContext;
}

@property (nonatomic, retain) <MusicEntityProviding> *childrenEntityProvider;
@property (nonatomic, readonly, copy) MPUContentItemIdentifierCollection *contentItemIdentifierCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MusicStoreItemMetadataContext *storeItemMetadataContext;
@property (readonly) Class superclass;

+ (id /* block */)_entityValueHandlerForProperty:(id)arg1;
+ (void)_registerEntityValueHandler:(id /* block */)arg1 forProperty:(id)arg2;
+ (long long)entityType;
+ (void)initialize;

- (void).cxx_destruct;
- (Class)_requiredClassForEquality;
- (id)childrenEntityProvider;
- (id)contentItemIdentifierCollection;
- (id)entityUniqueIdentifier;
- (unsigned long long)hash;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)initWithStoreItemMetadataContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setChildrenEntityProvider:(id)arg1;
- (id)storeItemMetadataContext;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
