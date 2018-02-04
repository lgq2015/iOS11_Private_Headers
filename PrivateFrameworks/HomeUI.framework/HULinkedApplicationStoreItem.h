/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULinkedApplicationStoreItem : HULinkedApplicationItem <NSCopying> {
    SSLookupItem * _storeItem;
}

@property (nonatomic, readonly) SSLookupItem *storeItem;

- (void).cxx_destruct;
- (id)_imageForSize:(struct CGSize { double x1; double x2; })arg1 fromArtwork:(id)arg2;
- (id)_loadStoreIconWithArtwork:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithStoreItem:(id)arg1;
- (id)storeItem;

@end
