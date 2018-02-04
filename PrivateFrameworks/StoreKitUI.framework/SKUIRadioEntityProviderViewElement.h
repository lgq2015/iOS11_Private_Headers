/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRadioEntityProviderViewElement : SKUIAbstractEntityProviderViewElement <SKUIEntityProviding> {
    long long  _countLimit;
    bool  _hasValidStations;
    long long  _radioEntityProviderType;
    RadioModel * _radioModel;
    NSMapTable * _stationToStationEntityValueProvider;
    NSArray * _stations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_entityValueProviderForStation:(id)arg1;
- (void)_invalidateWithContext:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (id)_stations;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (id)indexBarEntryEntityValueProviderAtIndex:(unsigned long long)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (id)sectionEntityValueProviderAtIndex:(long long)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;

@end
