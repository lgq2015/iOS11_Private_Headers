/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDSession : NSObject {
    NSObject<OS_dispatch_queue> * _cacheSerializerQ;
    NSMutableDictionary * _cachedAttributes;
    NSMutableDictionary * _cachedBudgets;
    CDDClientConnection * _cddClientConnection;
    unsigned long long  _clientId;
    int  _deviceChangeToken;
    id /* block */  _deviceHandler;
    NSSet * _deviceList;
    bool  _enabledCaching;
    bool  _unlocked;
    bool  _verbose;
    int  duetRestartToken;
    NSArray * nonBundles;
}

@property (retain) NSObject<OS_dispatch_queue> *cacheSerializerQ;
@property (retain) NSMutableDictionary *cachedAttributes;
@property (retain) NSMutableDictionary *cachedBudgets;
@property (readonly) CDDClientConnection *cddClientConnection;
@property unsigned long long clientId;
@property int deviceChangeToken;
@property (copy) id /* block */ deviceHandler;
@property (retain) NSSet *deviceList;
@property bool enabledCaching;
@property bool unlocked;
@property bool verbose;

+ (id)sharedSessionWithClientId:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)attributeComponentsFromRepresentation:(id)arg1 error:(id*)arg2;
- (id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id*)arg2;
- (id)attributeForName:(id)arg1 type:(long long)arg2 clientId:(unsigned long long)arg3 error:(id*)arg4;
- (id)attributeForName:(id)arg1 type:(long long)arg2 error:(id*)arg3;
- (id)attributeFromFullname:(id)arg1 error:(id*)arg2;
- (id)attributeFromRepresentation:(id)arg1 error:(id*)arg2;
- (id)attributeNamesWithError:(id*)arg1;
- (bool)broadcastSystemDataWithError:(id*)arg1;
- (id)budgetForName:(id)arg1 type:(long long)arg2 error:(id*)arg3;
- (id)budgetNamesWithError:(id*)arg1;
- (id)cacheSerializerQ;
- (id)cachedAttributes;
- (id)cachedBudgets;
- (id)cddClientConnection;
- (unsigned long long)clientId;
- (id)copyDevicesUncached;
- (void)dealloc;
- (bool)deleteClientDataWithError:(id*)arg1;
- (id)description;
- (int)deviceChangeToken;
- (id /* block */)deviceHandler;
- (id)deviceList;
- (bool)enabledCaching;
- (id)getDeviceFromDescription:(id)arg1 error:(id*)arg2;
- (id)getDevices;
- (id)getDevicesInternal;
- (id)init;
- (id)initWithClientId:(unsigned long long)arg1;
- (id)initWithClientId:(unsigned long long)arg1 enableCaching:(bool)arg2;
- (bool)isClassCLocked;
- (bool)loadDylibs;
- (id)registerAttributeWithName:(id)arg1 type:(long long)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 error:(id*)arg4;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id*)arg5;
- (bool)registerForDeviceChanges;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)setActiveComplications:(id)arg1 error:(id*)arg2;
- (void)setCacheSerializerQ:(id)arg1;
- (void)setCachedAttributes:(id)arg1;
- (void)setCachedBudgets:(id)arg1;
- (void)setClientId:(unsigned long long)arg1;
- (void)setDeviceChangeToken:(int)arg1;
- (void)setDeviceHandler:(id /* block */)arg1;
- (void)setDeviceList:(id)arg1;
- (bool)setDevicesChangedHandlerWithError:(id*)arg1 handler:(id /* block */)arg2;
- (void)setEnabledCaching:(bool)arg1;
- (bool)setGlancesLingeredOn:(id)arg1 error:(id*)arg2;
- (bool)setNonAppBundlIdWithError:(id)arg1 error:(id*)arg2;
- (bool)setNonAppBundleIdWithError:(id)arg1 error:(id*)arg2;
- (void)setUnlocked:(bool)arg1;
- (void)setVerbose:(bool)arg1;
- (bool)unlocked;
- (bool)verbose;

@end
