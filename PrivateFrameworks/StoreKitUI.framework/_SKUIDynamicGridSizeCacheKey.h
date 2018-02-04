/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface _SKUIDynamicGridSizeCacheKey : NSObject <NSCopying> {
    long long  _position;
    SKUIViewElement * _viewElement;
}

@property (nonatomic) long long position;
@property (nonatomic, retain) SKUIViewElement *viewElement;

- (void).cxx_destruct;
- (bool)__isSKUIDynamicGridSizeCacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (void)setViewElement:(id)arg1;
- (id)viewElement;

@end
