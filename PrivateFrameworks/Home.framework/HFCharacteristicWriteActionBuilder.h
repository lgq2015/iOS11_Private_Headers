/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder {
    HMCharacteristic * _characteristic;
    <NSCopying> * _targetValue;
}

@property (nonatomic, readonly) HMCharacteristicWriteAction *action;
@property (nonatomic, retain) HMCharacteristic *characteristic;
@property (nonatomic, retain) <NSCopying> *targetValue;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_performValidation;
- (id)characteristic;
- (id)commitItem;
- (id)copyForCreatingNewAction;
- (id)createNewAction;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)requiresDeviceUnlock;
- (void)setCharacteristic:(id)arg1;
- (void)setTargetValue:(id)arg1;
- (id)targetValue;
- (bool)updateWithActionBuilder:(id)arg1;

@end
