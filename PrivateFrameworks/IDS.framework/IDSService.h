/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSService : NSObject {
    _IDSService * _internal;
}

@property (nonatomic, readonly) _IDSService *_internal;
@property (nonatomic, readonly, copy) NSSet *accounts;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (getter=hmd_isActive, nonatomic, readonly) bool hmd_active;
@property (readonly, copy) NSString *hmd_preferredInternetRoutableDestinationForSelf;
@property (nonatomic, readonly, copy) NSSet *internalAccounts;

// Image: /System/Library/PrivateFrameworks/IDS.framework/IDS

+ (bool)checkMessageSize:(unsigned long long)arg1 priority:(long long)arg2;
+ (id)removeSentinelFromAliases:(id)arg1;

- (void).cxx_destruct;
- (id)_accountWithAlias:(id)arg1;
- (id)_internal;
- (id)accounts;
- (void)activateAlias:(id)arg1;
- (void)activateAliases:(id)arg1;
- (id)activeAliases;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)aliases;
- (bool)cancelIdentifier:(id)arg1 error:(id*)arg2;
- (id)datagramChannelForSessionDestination:(id)arg1 error:(id*)arg2;
- (id)datagramChannelForSocketDescriptor:(int)arg1 error:(id*)arg2;
- (id)datagramConnectionForSessionDestination:(id)arg1 error:(id*)arg2;
- (id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2;
- (void)deactivateAlias:(id)arg1;
- (void)deactivateAliases:(id)arg1;
- (void)dealloc;
- (id)deviceForFromID:(id)arg1;
- (id)deviceForUniqueID:(id)arg1;
- (id)devices;
- (id)devicesForBTUUID:(id)arg1;
- (void)disable;
- (void)disablePhoneUser;
- (void)disableiCloudUser;
- (void)enable;
- (void)enablePhoneUser;
- (void)enableiCloudUser;
- (id)firstRoutableInternetDestinationForSelf;
- (id)iCloudAccount;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 commands:(id)arg2;
- (id)initWithService:(id)arg1 manuallyAckMessages:(bool)arg2;
- (id)initWithService:(id)arg1 serviceDomain:(id)arg2;
- (id)internal;
- (id)internalAccounts;
- (bool)isPretendingToBeFull;
- (long long)maxHomeKitPayloadSize;
- (void)performGroupTask:(id /* block */)arg1;
- (SEL)protobufActionForIncomingRequestsOfType:(unsigned short)arg1;
- (SEL)protobufActionForIncomingResponsesOfType:(unsigned short)arg1;
- (void)removeDelegate:(id)arg1;
- (void)scheduleTransactionLogTask:(id)arg1;
- (bool)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (void)sendAckForMessageWithContext:(id)arg1;
- (bool)sendAheadGroup:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (id)serviceDomain;
- (void)setLinkPreferences:(id)arg1;
- (void)setPreferInfraWiFi:(bool)arg1;
- (void)setPretendingToBeFull:(bool)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
- (void)startOTRTest:(long long)arg1;
- (id)streamConnectionForSessionDestination:(id)arg1 error:(id*)arg2;
- (id)streamConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2;
- (void)testCloudQRConnection;
- (void)updateSubServices:(id)arg1;
- (bool)updateSubServices:(id)arg1 forDevice:(id)arg2;
- (id)uriForFromID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (bool)hmd_isActive;
- (id)hmd_preferredInternetRoutableDestinationForSelf;

@end
