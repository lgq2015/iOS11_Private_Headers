/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionIDS : NSObject <VCConnectionProtocol> {
    int  _cellularMTU;
    unsigned int  _datagramChannelToken;
    IDSDataChannelLinkContext * _linkContext;
    int  _localCellTech;
    int  _priority;
    int  _remoteCellTech;
    unsigned int  _type;
}

@property int cellularMTU;
@property (readonly) int connectionId;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) unsigned int datagramChannelToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isIPv6;
@property (readonly) bool isLocalOnCellular;
@property (readonly) bool isLocalOnWiFi;
@property (readonly) bool isRelay;
@property (readonly) bool isRemoteOnCellular;
@property (readonly) bool isRemoteOnWiFi;
@property (readonly) bool isVPN;
@property (readonly) unsigned char linkID;
@property int localCellTech;
@property (readonly) int localConnectionType;
@property (readonly) NSString *localInterfaceTypeString;
@property int priority;
@property (readonly) NSString *relaySessionToken;
@property int remoteCellTech;
@property (readonly) int remoteConnectionType;
@property (readonly) NSString *remoteInterfaceTypeString;
@property (readonly) NSData *sharedDigestKey;
@property (readonly) Class superclass;
@property (readonly) unsigned int type;

- (int)cellularMTU;
- (int)connectionId;
- (id)connectionUUID;
- (unsigned int)datagramChannelToken;
- (void)dealloc;
- (id)description;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;
- (bool)isIPv6;
- (bool)isLocalOnCellular;
- (bool)isLocalOnWiFi;
- (bool)isOnSameInterfacesWithConnection:(id)arg1;
- (bool)isRelay;
- (bool)isRemoteOnCellular;
- (bool)isRemoteOnWiFi;
- (bool)isSameAsConnection:(id)arg1;
- (bool)isVPN;
- (unsigned char)linkID;
- (int)localCellTech;
- (int)localConnectionType;
- (id)localInterfaceTypeString;
- (bool)matchesChannelTokenWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (int)priority;
- (id)relaySessionToken;
- (int)remoteCellTech;
- (int)remoteConnectionType;
- (id)remoteInterfaceTypeString;
- (void)setCellularMTU:(int)arg1;
- (void)setLocalCellTech:(int)arg1;
- (void)setPriority:(int)arg1;
- (void)setRemoteCellTech:(int)arg1;
- (id)sharedDigestKey;
- (unsigned int)type;

@end
