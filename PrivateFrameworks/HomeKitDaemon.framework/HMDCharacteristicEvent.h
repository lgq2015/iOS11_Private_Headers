/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicEvent : HMDCharacteristicEventBase <NSSecureCoding> {
    id  _eventValue;
}

@property (nonatomic, retain) id eventValue;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_compareEventValue:(id)arg1;
- (bool)_evaluateNewValue:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)createPayload;
- (id)description;
- (id)dumpState;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (id)eventValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)metricData;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)setEventValue:(id)arg1;

@end
