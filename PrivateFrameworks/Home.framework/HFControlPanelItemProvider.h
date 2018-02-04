/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFControlPanelItemProvider : HFItemProvider {
    NSSet * _controlPanelItems;
    id /* block */  _filter;
    HFItem<NSCopying> * _item;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, copy) NSSet *controlPanelItems;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly, copy) HFItem<NSCopying> *item;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (bool)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id /* block */)controlPanelItemComparator;
- (id)controlPanelItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)init;
- (id)initWithItem:(id)arg1 valueSource:(id)arg2;
- (id)invalidationReasons;
- (id)item;
- (id)items;
- (id)reloadItems;
- (void)setControlPanelItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (id)valueSource;

@end