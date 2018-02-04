/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRadioStationEntityValueProvider : NSObject <IKEntityValueProviding> {
    RadioStation * _station;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RadioStation *station;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)init;
- (id)initWithStation:(id)arg1;
- (id)rsep_coreSeedName;
- (id)rsep_stationDescription;
- (id)rsep_stationName;
- (id)station;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
