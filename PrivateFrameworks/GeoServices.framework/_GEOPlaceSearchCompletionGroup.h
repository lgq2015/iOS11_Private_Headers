/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup> {
    NSArray * _items;
    NSString * _localizedSectionHeader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *localizedSectionHeader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4;
- (id)items;
- (id)localizedSectionHeader;

@end