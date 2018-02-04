/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFZoneBuilderItem : HFItem {
    HFZoneBuilder * _zoneBuilder;
}

@property (nonatomic, readonly) HFZoneBuilder *zoneBuilder;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithZoneBuilder:(id)arg1;
- (id)zoneBuilder;

@end
