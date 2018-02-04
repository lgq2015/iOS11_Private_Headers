/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionManagerLegacy : VCConnectionManager {
    <VCConnectionProtocol> * _pendingPrimaryConnection;
    <VCConnectionProtocol> * _pendingSecondaryConnection;
    NSString * _relayConnectionID;
    NSMutableArray * _validConnections;
}

@property (nonatomic, retain) <VCConnectionProtocol> *pendingPrimaryConnection;
@property (nonatomic, retain) <VCConnectionProtocol> *pendingSecondaryConnection;
@property (nonatomic, copy) NSString *relayConnectionID;

- (int)addConnection:(id)arg1;
- (void)dealloc;
- (id)getConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1 isPrimary:(bool*)arg2;
- (id)getPrimaryConnectionToBeCompared;
- (id)getSecondaryConnectionToBeCompared;
- (id)init;
- (int)nominateConnection:(id)arg1 asPrimary:(bool)arg2 interfaceMask:(int)arg3 demote:(int*)arg4 connectionPriority:(int*)arg5 replaceOnly:(int*)arg6;
- (id)pendingPrimaryConnection;
- (id)pendingSecondaryConnection;
- (id)relayConnectionID;
- (int)removeConnection:(id)arg1;
- (int)removeConnectionWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 isLocalInterface:(bool)arg2;
- (int)removeConnectionWithIPPortInternal:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 isLocalInterface:(bool)arg2;
- (void)reportConnection:(id)arg1 isInitialConnection:(bool)arg2;
- (void)setPendingPrimaryConnection:(id)arg1;
- (void)setPendingSecondaryConnection:(id)arg1;
- (void)setRelayConnectionID:(id)arg1;
- (bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (bool)shouldHandoverWhenUpdateWRMDuplication:(int)arg1;
- (int)shouldNominateCandidatePair:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; unsigned char x_1_1_4[8]; unsigned short x_1_1_5; unsigned short x_1_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_1_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_1_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_1_1_9; unsigned int x_1_1_10; } x1; struct tagCANDIDATE { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[8]; unsigned short x_2_1_5; unsigned short x_2_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_2_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_2_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_2_1_9; unsigned int x_2_1_10; } x2; }*)arg1 interfaceMask:(int)arg2 nominated:(int*)arg3 demote:(int*)arg4 connectionPriority:(int*)arg5 replaceOnly:(int*)arg6;
- (int)shouldNominateCandidatePairInternal:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; unsigned char x_1_1_4[8]; unsigned short x_1_1_5; unsigned short x_1_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_1_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_1_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_1_1_9; unsigned int x_1_1_10; } x1; struct tagCANDIDATE { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[8]; unsigned short x_2_1_5; unsigned short x_2_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_2_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_2_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_2_1_9; unsigned int x_2_1_10; } x2; }*)arg1 interfaceMask:(int)arg2 nominated:(int*)arg3 demote:(int*)arg4 connectionPriority:(int*)arg5 replaceOnly:(int*)arg6;
- (bool)shouldNominateConnection:(id)arg1;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1 isSourceOnCellular:(bool*)arg2 isSourceIPv6:(bool*)arg3;
- (void)updateCellularMTU:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(bool)arg2;
- (int)updateStateWithCurrentConnection:(id)arg1 asPrimary:(bool)arg2 interfaceMask:(int)arg3 demote:(int*)arg4 replaceOnly:(int*)arg5;

@end
