/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPageComponentContext : NSObject <NSCopying> {
    NSDictionary * _componentDictionary;
    NSArray * _ineligibleGratisIdentifiers;
    NSDictionary * _items;
    long long  _layoutStyle;
    double  _pageGenerationTime;
    NSDictionary * _platformKeyProfileOverrides;
    NSMutableSet * _unavailableItems;
}

@property (nonatomic, readonly, copy) NSSet *allUnavailableItemIdentifiers;
@property (nonatomic, copy) NSDictionary *componentDictionary;
@property (nonatomic, copy) NSArray *ineligibleGratisIdentifiers;
@property (nonatomic, copy) NSDictionary *items;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) double pageGenerationTime;
@property (nonatomic, copy) NSDictionary *platformKeyProfileOverrides;

- (void).cxx_destruct;
- (void)addUnavailableItemIdentifiers:(id)arg1;
- (id)allUnavailableItemIdentifiers;
- (id)componentDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ineligibleGratisIdentifiers;
- (id)init;
- (bool)isUnavailableItemIdentifier:(id)arg1;
- (id)itemForItemIdentifier:(id)arg1;
- (id)items;
- (long long)layoutStyle;
- (double)pageGenerationTime;
- (id)platformKeyProfileOverrides;
- (void)setComponentDictionary:(id)arg1;
- (void)setIneligibleGratisIdentifiers:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setPlatformKeyProfileOverrides:(id)arg1;
- (void)setUnavailableItemIdentifiers:(id)arg1;

@end
