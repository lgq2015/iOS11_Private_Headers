/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCClientRelay : NSObject {
    struct tagCONNRESULT { 
        unsigned int dwCallID; 
        int iResultCount; 
        int iRole; 
        unsigned int dwRemoteCallID; 
        int proto; 
        int bIfRelay; 
        unsigned short wRelayServType; 
        unsigned short wChannelNumber; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbLocal; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemote; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbDst; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemoteSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRelayExt; 
        unsigned int dwRTT; 
        int bIfLocalCellularQoS; 
        int bIfRemoteCellularQoS; 
        int iLocalCellTech; 
        int iRemoteCellTech; 
        unsigned short wCellularMTU; 
        int bIfUpgrade; 
        int bIfPrimary; 
        int bIfReplaceOnly; 
        struct tagCONNRESULT {} *next; 
    }  _connectionResult;
    NSObject<OS_dispatch_queue> * _idsReadQueue;
    NSObject<OS_dispatch_source> * _idsReadSource;
    int  _idsSocket;
    bool  _isConnectionResultSet;
    bool  _stopVTPReceiveThread;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _vtpDestination;
    unsigned int  _vtpDestinationLength;
    struct OpaqueFigThread { } * _vtpReceiveTID;
    int  _vtpSocket;
}

@property (readonly) bool stopVTPReceiveThread;

- (void)dealloc;
- (id)initWithIDSSocket:(int)arg1;
- (bool)relayIDSPacket;
- (bool)relayVTPPacket;
- (void)setConnectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)arg1;
- (int)setupVTPSocket;
- (int)startRelay;
- (int)stopRelay;
- (bool)stopVTPReceiveThread;

@end
