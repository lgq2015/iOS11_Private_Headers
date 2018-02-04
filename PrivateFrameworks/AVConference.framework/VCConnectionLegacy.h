/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionLegacy : NSObject <VCConnectionProtocol> {
    struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; } * _connectionResult;
    int  _priority;
    unsigned int  _type;
    bool  _waitToBeNominated;
}

@property int cellularMTU;
@property (readonly) int connectionId;
@property (readonly) struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*connectionResult;
@property (readonly) NSUUID *connectionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isIPv6;
@property (readonly) bool isLocalOnCellular;
@property (readonly) bool isLocalOnWiFi;
@property (readonly) bool isRelay;
@property (readonly) bool isRemoteOnCellular;
@property (readonly) bool isRemoteOnWiFi;
@property (readonly) bool isReplaceOnly;
@property (readonly) bool isUpgraded;
@property (readonly) bool isVPN;
@property int localCellTech;
@property (readonly) int localConnectionType;
@property (readonly) NSString *localInterfaceTypeString;
@property int priority;
@property (readonly) unsigned short relayChannelNumber;
@property int remoteCellTech;
@property (readonly) int remoteConnectionType;
@property (readonly) NSString *remoteInterfaceTypeString;
@property (readonly) Class superclass;
@property (readonly) unsigned int type;
@property bool waitToBeNominated;

- (int)cellularMTU;
- (int)connectionId;
- (struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)connectionResult;
- (id)connectionUUID;
- (id)copy;
- (void)dealloc;
- (id)description;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (id)initWithCandidatePair:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; unsigned char x_1_1_4[8]; unsigned short x_1_1_5; unsigned short x_1_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_1_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_1_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_1_1_9; unsigned int x_1_1_10; } x1; struct tagCANDIDATE { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[8]; unsigned short x_2_1_5; unsigned short x_2_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_2_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_2_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_2_1_9; unsigned int x_2_1_10; } x2; }*)arg1;
- (id)initWithConnectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)arg1 type:(unsigned int)arg2;
- (id)ipportToString:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (bool)isIPv6;
- (bool)isLocalIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (bool)isLocalOnCellular;
- (bool)isLocalOnWiFi;
- (bool)isOnSameIPPortWithConnection:(id)arg1;
- (bool)isOnSameInterfacesWithConnection:(id)arg1;
- (bool)isRelay;
- (bool)isRemoteIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (bool)isRemoteOnCellular;
- (bool)isRemoteOnWiFi;
- (bool)isReplaceOnly;
- (bool)isSameAsConnection:(id)arg1;
- (bool)isUpgraded;
- (bool)isVPN;
- (int)localCellTech;
- (int)localConnectionType;
- (id)localInterfaceTypeString;
- (bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (int)priority;
- (unsigned short)relayChannelNumber;
- (int)remoteCellTech;
- (int)remoteConnectionType;
- (id)remoteInterfaceTypeString;
- (void)setCellularMTU:(int)arg1;
- (void)setLocalCellTech:(int)arg1;
- (void)setPriority:(int)arg1;
- (void)setRemoteCellTech:(int)arg1;
- (void)setWaitToBeNominated:(bool)arg1;
- (unsigned int)type;
- (bool)waitToBeNominated;

@end
