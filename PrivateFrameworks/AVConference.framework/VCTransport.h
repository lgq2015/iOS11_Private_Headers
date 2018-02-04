/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTransport : NSObject {
    NSObject<OS_dispatch_queue> * dataReceivedHandlerQueue;
    NSMutableDictionary * dataReceivedHandlers;
    NSObject<OS_dispatch_queue> * delegateQueue;
    NSMutableDictionary * iceBlocks;
    struct tagHANDLE { int x1; } * tpHandle;
}

+ (id)sharedInstance;

- (void)cleanup;
- (void)dealloc;
- (int)detailedErrorCodeForConnectionWithCallID:(unsigned int)arg1;
- (int)discardRelayBindingForCallID:(unsigned int)arg1;
- (int)discardRelayBindingForCallID:(unsigned int)arg1 withChannelNumber:(int)arg2;
- (int)flushBasebandQueue:(void*)arg1;
- (int)getCellTechForCallID:(unsigned int)arg1 localCellTech:(int*)arg2 isLocalCellularQoSEnabled:(int*)arg3 remoteCellTech:(int*)arg4 isRemoteCellularQoSEnabled:(int*)arg5;
- (int)getConnectionDataForCallID:(unsigned int)arg1 version:(unsigned char)arg2 useCompressedData:(bool)arg3 pConnectionData:(void**)arg4 connectDataSizeInBytes:(int*)arg5 relayDictionary:(struct __CFDictionary { }*)arg6 interfaceUpdate:(bool)arg7 nonCellularCandidateTimeout:(double)arg8;
- (int)getLoopbackIP:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (int)getNextBestCandidate:(struct tagCANDIDATE { int x1; int x2; unsigned int x3; unsigned char x4[8]; unsigned short x5; unsigned short x6; struct tagIPPORT { int x_7_1_1; BOOL x_7_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { int x_8_1_1; BOOL x_8_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; unsigned int x10; }*)arg1 callID:(unsigned int)arg2 isLocal:(int)arg3 IPPortToExclude:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg4;
- (id)getRemoteCIDForDstIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 callID:(unsigned int)arg2;
- (int)getRemoteICEVersion:(unsigned int)arg1 remoteICEVersion:(unsigned int*)arg2;
- (int)getSignalStrength:(int*)arg1 signalRaw:(int*)arg2 signalGrade:(int*)arg3;
- (void)iceConnectedForCallID:(unsigned int)arg1 result:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)arg2 didReceivePacket:(int)arg3 useRelay:(int)arg4 secretKey:(struct __CFData { }*)arg5 skeResult:(int)arg6;
- (void)iceNewCandidatesForCallID:(unsigned int)arg1 blob:(char *)arg2 size:(int)arg3 newCandidateVersion:(unsigned short)arg4;
- (void)iceRemoveIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 forCallID:(unsigned int)arg2 isLocalInterface:(bool)arg3;
- (void)iceShouldNominateNewCandidate:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; unsigned char x_1_1_4[8]; unsigned short x_1_1_5; unsigned short x_1_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_1_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_1_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_1_1_9; unsigned int x_1_1_10; } x1; struct tagCANDIDATE { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[8]; unsigned short x_2_1_5; unsigned short x_2_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_2_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_2_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_2_1_9; unsigned int x_2_1_10; } x2; }*)arg1 forCallID:(unsigned int)arg2 interfaceMask:(int)arg3 nominated:(int*)arg4 demote:(int*)arg5 connectionPriority:(int*)arg6 replaceOnly:(int*)arg7;
- (id)init;
- (bool)ipPortStillExists:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 requiresWifi:(bool)arg2;
- (int)processRemoteInterfaceChangeMessageWithLocalCallID:(unsigned int)arg1 remoteCallID:(unsigned int)arg2 remoteData:(void*)arg3 remoteLen:(int)arg4 remoteCandidateVersion:(unsigned short)arg5;
- (void)receivedDataPacket:(char *)arg1 length:(int)arg2 forCallID:(unsigned int)arg3 encrypted:(bool)arg4 OFTType:(int)arg5;
- (void)registerDataReceivedHandler:(id /* block */)arg1 forCallID:(unsigned int)arg2;
- (void)registerICEBlockForCallID:(unsigned int)arg1 connectedBlock:(id /* block */)arg2 newCandidatesBlock:(id /* block */)arg3 newNominationBlock:(id /* block */)arg4 removeIPPortBlock:(id /* block */)arg5;
- (int)sendData:(id)arg1 localCallID:(unsigned int)arg2 remoteCallID:(unsigned int)arg3 encrypted:(bool)arg4 OFTType:(int)arg5;
- (int)sendUDPPacketReliableEncrypted:(id)arg1 localIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg2 destinationIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg3 oftType:(int)arg4;
- (void)setARPLHandler:(id /* block */)arg1;
- (int)setForceIPv6ForCallID:(unsigned int)arg1;
- (int)setForceRelayForCallID:(unsigned int)arg1;
- (int)setICETimeout:(double)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (int)setSKEState:(struct SKEStateOpaque { }*)arg1 forCallID:(unsigned int)arg2;
- (int)setupDTLSSecurity:(unsigned int)arg1 connectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)arg2 completionHandler:(id /* block */)arg3;
- (int)startConnectionCheckForCallID:(unsigned int)arg1 remoteConnectionDataBlob:(id)arg2 relayDictionary:(id)arg3 iceTimeout:(double)arg4 securityIdentity:(struct __SecIdentity { }*)arg5 skeState:(struct SKEStateOpaque { }*)arg6 usedRelay:(int*)arg7;
- (int)stopConnectivityCheckForCallID:(unsigned int)arg1;
- (int)updateBasebandForConnection:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)arg1 notificationRegistrationToken:(unsigned int)arg2 callType:(unsigned char)arg3;
- (int)updateICERoleForCallID:(unsigned int)arg1 role:(int)arg2 remoteCallID:(unsigned int)arg3 sessionID:(struct __CFString { }*)arg4;
- (int)updateInterfaceList:(unsigned int)arg1 shouldFilterCellInterface:(bool)arg2 isUpdateNeeded:(int*)arg3;
- (int)updateQoS:(bool)arg1;
- (int)updateQualityIndicator:(int)arg1 isIPv6:(bool)arg2;

@end
