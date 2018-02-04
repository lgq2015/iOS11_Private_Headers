/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCFavoriteActionSetItemProvider : HFItemProvider <HUCCFavoriteItemProvider> {
    unsigned long long  _actionSetItemStyle;
    NSMutableSet * _actionSetItems;
    HMHome * _home;
    unsigned long long  _maximumNumberOfItems;
}

@property (nonatomic, readonly) unsigned long long actionSetItemStyle;
@property (nonatomic, retain) NSMutableSet *actionSetItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)actionSetItemStyle;
- (id)actionSetItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2;
- (id)invalidationReasons;
- (id)items;
- (unsigned long long)maximumNumberOfItems;
- (id)reloadItems;
- (void)setActionSetItems:(id)arg1;
- (void)setMaximumNumberOfItems:(unsigned long long)arg1;

@end
