/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUFirmwareUpdateItemProvider : HFItemProvider {
    id /* block */  _filter;
    bool  _hasProvidedInstructionsItem;
    HMHome * _home;
    NSString * _instructionsDescription;
    bool  _instructionsHidden;
    HUInstructionsItem * _instructionsItem;
    NSString * _instructionsTitle;
    HULinkedApplicationItemProvider * _linkedApplicationItemProvider;
    NSSet * _linkedApplicationItems;
    unsigned long long  _style;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic) bool hasProvidedInstructionsItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSString *instructionsDescription;
@property (nonatomic) bool instructionsHidden;
@property (nonatomic, retain) HUInstructionsItem *instructionsItem;
@property (nonatomic, retain) NSString *instructionsTitle;
@property (nonatomic, retain) HULinkedApplicationItemProvider *linkedApplicationItemProvider;
@property (nonatomic, retain) NSSet *linkedApplicationItems;
@property (nonatomic, readonly) unsigned long long style;

+ (id /* block */)itemComparator;
+ (bool)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id /* block */)_effectiveFilter;
- (id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (bool)hasProvidedInstructionsItem;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 style:(unsigned long long)arg2;
- (id)instructionsDescription;
- (bool)instructionsHidden;
- (id)instructionsItem;
- (id)instructionsTitle;
- (id)invalidationReasons;
- (id)items;
- (id)linkedApplicationItemProvider;
- (id)linkedApplicationItems;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setHasProvidedInstructionsItem:(bool)arg1;
- (void)setInstructionsDescription:(id)arg1;
- (void)setInstructionsHidden:(bool)arg1;
- (void)setInstructionsItem:(id)arg1;
- (void)setInstructionsTitle:(id)arg1;
- (void)setLinkedApplicationItemProvider:(id)arg1;
- (void)setLinkedApplicationItems:(id)arg1;
- (unsigned long long)style;

@end
