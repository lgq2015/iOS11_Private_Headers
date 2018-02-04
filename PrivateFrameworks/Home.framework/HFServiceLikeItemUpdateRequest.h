/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceLikeItemUpdateRequest : NSObject {
    HMAccessory * _accessory;
    NSSet * _characteristics;
    HMService * _service;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) NSSet *characteristics;
@property (nonatomic, retain) HMService *service;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_displayMetadataForReadRespnose:(id)arg1;
- (id)_standardResultsForReadResponse:(id)arg1 displayMetadata:(id)arg2 batteryLevelResults:(id)arg3 updateOptions:(id)arg4;
- (id)accessory;
- (id)characteristics;
- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2 characteristics:(id)arg3;
- (id)initWithService:(id)arg1 valueSource:(id)arg2 characteristicTypes:(id)arg3;
- (id)service;
- (void)setAccessory:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setService:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)updateWithOptions:(id)arg1;
- (id)valueSource;

@end
