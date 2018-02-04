/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDClientConnection : NSObject {
    unsigned long long  _clientId;
    CDDXPCConnection * _connection;
    CDDebug * _debug;
}

@property (readonly) unsigned long long clientId;
@property (readonly) CDDXPCConnection *connection;
@property (readonly) CDDebug *debug;

- (void).cxx_destruct;
- (bool)appsLaunchedSince:(id)arg1 butNotPrewarmedSince:(id)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 cost:(long long)arg6 onDate:(id)arg7 risingEdge:(bool)arg8 fallingEdge:(bool)arg9 error:(id*)arg10 replyHandler:(id /* block */)arg11;
- (bool)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)attributeId:(unsigned long long)arg1 associateToBudgetId:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 cost:(long long)arg7 onDate:(id)arg8 risingEdge:(bool)arg9 fallingEdge:(bool)arg10 error:(id*)arg11 replyHandler:(id /* block */)arg12;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 admissionCheckOfValue:(id)arg3 admissionCheckType:(int)arg4 attributeType:(int)arg5 options:(id)arg6 error:(id*)arg7 replyHandler:(id /* block */)arg8;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 associateToBudgetId:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 historyOfValue:(id)arg3 forWindow:(id)arg4 filter:(long long)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 replyHandler:(id /* block */)arg8;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 meteredWithValue:(id)arg3 costDictionary:(id)arg4 onDate:(id)arg5 risingEdge:(bool)arg6 fallingEdge:(bool)arg7 type:(int)arg8 meterToken:(unsigned long long)arg9 error:(id*)arg10 replyHandler:(id /* block */)arg11;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 occurredWithValue:(id)arg3 cost:(long long)arg4 onDate:(id)arg5 risingEdge:(bool)arg6 fallingEdge:(bool)arg7 type:(int)arg8 error:(id*)arg9 replyHandler:(id /* block */)arg10;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 deviceIdentifier:(id)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 repeatedStatistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id*)arg5 replyHandler:(id /* block */)arg6;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 setCategory:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)attributeId:(unsigned long long)arg1 attributeName:(id)arg2 statistic:(int)arg3 forHistoryWindow:(id)arg4 error:(id*)arg5 replyHandler:(id /* block */)arg6;
- (bool)attributeId:(unsigned long long)arg1 backgroundLaunch:(id)arg2 risingEdge:(bool)arg3 fallingEdge:(bool)arg4 type:(int)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)attributeId:(unsigned long long)arg1 historyOfValue:(id)arg2 forWindow:(id)arg3 filter:(long long)arg4 maximumElements:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)attributeId:(unsigned long long)arg1 meteredWithValue:(id)arg2 costDictionary:(id)arg3 onDate:(id)arg4 risingEdge:(bool)arg5 fallingEdge:(bool)arg6 type:(int)arg7 meterToken:(unsigned long long)arg8 error:(id*)arg9 replyHandler:(id /* block */)arg10;
- (bool)attributeId:(unsigned long long)arg1 occurredWithValue:(id)arg2 cost:(long long)arg3 onDate:(id)arg4 risingEdge:(bool)arg5 fallingEdge:(bool)arg6 type:(int)arg7 error:(id*)arg8 replyHandler:(id /* block */)arg9;
- (bool)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 deviceIdentifier:(id)arg4 error:(id*)arg5 replyHandler:(id /* block */)arg6;
- (bool)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)attributeId:(unsigned long long)arg1 setCategory:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)attributeId:(unsigned long long)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)attributeNamesWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)broadcastSystemDataWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)budgetsForAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)budgetsForAttributeId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)bundleIdChange:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)bundleIdEntriesOlderThanDate:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (unsigned long long)clientId;
- (bool)compareAndSwapPool:(unsigned long long)arg1 compareValue:(long long)arg2 swapValue:(long long)arg3 type:(unsigned long long)arg4 error:(id*)arg5 replyHandler:(id /* block */)arg6;
- (id)connection;
- (id)debug;
- (bool)decrementPool:(unsigned long long)arg1 decrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)deleteAllDatabaseEntriesOlderThanDate:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)deleteAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)deleteAttributeId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)deleteBundleId:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)deleteDataWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)deletePool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)deregisterTrendableApp:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 deviceIdentifier:(id)arg6 temporalLeeway:(double)arg7 limitCount:(unsigned long long)arg8 error:(id*)arg9 replyHandler:(id /* block */)arg10;
- (bool)forecastAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 value:(id)arg3 format:(long long)arg4 historyWindow:(id)arg5 limitCount:(unsigned long long)arg6 error:(id*)arg7 replyHandler:(id /* block */)arg8;
- (bool)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 deviceIdentifier:(id)arg5 temporalLeeway:(double)arg6 limitCount:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(id /* block */)arg9;
- (bool)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 limitCount:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)getDeviceFromDescription:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)getDevicesWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)getLocalAppBundleId:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)idForAttribute:(id)arg1 clientId:(long long)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)idForAttribute:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)idForPool:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)incrementPool:(unsigned long long)arg1 incrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (id)init;
- (id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2;
- (bool)message:(id)arg1 withReplyHandler:(id /* block */)arg2;
- (bool)poolNamesWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)readLiveAppsWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)readPool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)readRemoteRequestResult:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)readSystemDataFromDevice:(unsigned int)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)readTrendingAppsWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)registerAttribute:(id)arg1 withType:(int)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 maxFraction:(double)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 maxFraction:(double)arg4 error:(id*)arg5 replyHandler:(id /* block */)arg6;
- (bool)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 budgetOptions:(unsigned long long)arg4 error:(id*)arg5 replyHandler:(id /* block */)arg6;
- (bool)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)registerTrendableApp:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)remoteFocalAppWithId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)requestAdmissionLogFromDevice:(unsigned int)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)requestForecastFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 value:(id)arg4 historyWindow:(id)arg5 format:(long long)arg6 error:(id*)arg7 replyHandler:(id /* block */)arg8;
- (bool)requestForecastFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 value:(id)arg3 historyWindow:(id)arg4 format:(long long)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)requestStatisticFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 attributeName:(id)arg3 statistic:(int)arg4 historyWindow:(id)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)requestStatisticFromDevice:(unsigned int)arg1 attributeId:(unsigned long long)arg2 statistic:(int)arg3 historyWindow:(id)arg4 error:(id*)arg5 replyHandler:(id /* block */)arg6;
- (bool)requestSystemDataFromDevice:(unsigned int)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)resetAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)resetAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)resetAttributeId:(unsigned long long)arg1 attributeName:(id)arg2 type:(int)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)resetAttributeId:(unsigned long long)arg1 type:(int)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 typeField:(unsigned long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 type:(unsigned long long)arg6 integerId:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(id /* block */)arg9;
- (bool)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 int64Value1:(long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 valueKey3:(id)arg6 uint64Value3:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(id /* block */)arg9;
- (bool)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 uint64Value1:(unsigned long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (bool)sendMessageWithType:(long long)arg1 valueKey:(id)arg2 uint64Value:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)setActiveBundles:(id)arg1 startTimestamps:(id)arg2 endTimestamps:(id)arg3 event:(unsigned long long)arg4 error:(id*)arg5 replyHandler:(id /* block */)arg6;
- (bool)setAdmissionMask:(unsigned long long)arg1 attributeName:(id)arg2 bitfield:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)setAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(id /* block */)arg4;
- (bool)setDebugBitmap:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)setNonAppBundlId:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)versionWithError:(id*)arg1 replyHandler:(id /* block */)arg2;

@end
