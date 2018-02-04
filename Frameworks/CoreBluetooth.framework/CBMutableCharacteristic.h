/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBMutableCharacteristic : CBCharacteristic {
    NSNumber * _ID;
    unsigned long long  _permissions;
    NSMutableArray * _subscribedCentrals;
}

@property (retain) NSNumber *ID;
@property (retain) NSArray *descriptors;
@property (nonatomic) unsigned long long permissions;
@property (nonatomic) unsigned long long properties;
@property (readonly, retain) NSArray *subscribedCentrals;
@property (retain) NSData *value;

- (void).cxx_destruct;
- (id)ID;
- (void)dealloc;
- (id)description;
- (bool)handleCentralSubscribed:(id)arg1;
- (bool)handleCentralUnsubscribed:(id)arg1;
- (void)handlePowerNotOn;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;
- (id)initWithType:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 permissions:(unsigned long long)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)permissions;
- (void)setID:(id)arg1;
- (void)setPermissions:(unsigned long long)arg1;
- (id)subscribedCentrals;

@end
