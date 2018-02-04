/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionManagerIDS : VCConnectionManager {
    NSMutableArray * _connectionArray;
    double  _lastTimestampForRemoteSendingFromNonPrimary;
    double  _lastTimestampPreferredRemoteInterfaceUpdated;
}

- (int)addConnection:(id)arg1;
- (bool)addConnectionToConnectionArray:(id)arg1;
- (void)dealloc;
- (id)getConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1 isPrimary:(bool*)arg2;
- (id)getPrimaryConnectionToBeCompared;
- (id)getSecondaryConnectionToBeCompared;
- (void)handlePrimaryConnectionRemoved;
- (void)handleSecondaryConnectionRemoved;
- (void)handoverWithWRMSuggestion:(bool)arg1;
- (id)init;
- (int)removeConnection:(id)arg1;
- (void)reportConnection:(id)arg1 isInitialConnection:(bool)arg2;
- (bool)selectPrimaryAndSecondaryWithConnection:(id)arg1;
- (void)setPreferredLocalInterfaceForDuplication:(int)arg1;
- (void)setPreferredRemoteInterfaceForDuplication:(int)arg1;
- (bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (bool)shouldHandoverWhenUpdateWRMDuplication:(int)arg1;
- (bool)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1 isSourceOnCellular:(bool*)arg2 isSourceIPv6:(bool*)arg3;
- (void)updateCellularMTU:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(bool)arg2;
- (void)updateConnectionForDuplication;
- (void)updatePrimaryWithConnection:(id)arg1;
- (void)updateSecondaryWithConnection:(id)arg1;

@end
