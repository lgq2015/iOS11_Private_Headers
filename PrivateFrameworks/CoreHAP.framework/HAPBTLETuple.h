/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLETuple : NSObject {
    unsigned long long  _atvState;
    float  _maxBandwidth;
    int  _maxHAPConnections;
    float  _minBandwidth;
    struct BTStatus { 
        unsigned long long leRemote; 
        unsigned long long leAcc; 
        unsigned long long btKB; 
        unsigned long long a2dp; 
        unsigned long long btGC; 
        unsigned long long eAcc; 
        unsigned long long hk; 
        unsigned long long lowEnergyConnections; 
        unsigned long long nonHIDConnections; 
        unsigned long long connectedHIDDevices; 
        unsigned long long oneSniffAttemptDevices; 
        unsigned long long twoSniffAttemptDevices; 
        unsigned long long sco; 
        unsigned long long wiap; 
        unsigned long long remote; 
        unsigned long long connectedDevices; 
        bool isScanning; 
        bool isDiscoverable; 
        bool isConnectable; 
    }  _state;
}

@property (nonatomic) unsigned long long atvState;
@property (nonatomic) float maxBandwidth;
@property (nonatomic) int maxHAPConnections;
@property (nonatomic) float minBandwidth;
@property (nonatomic) struct BTStatus { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; bool x17; bool x18; bool x19; } state;

+ (id)atvState2String:(unsigned long long)arg1;
+ (void)bandwidthFromATVState:(unsigned long long)arg1 MinBandwidth:(float*)arg2 MaxBandwidth:(float*)arg3;
+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2;
+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;
+ (id)makeTupleWithState:(struct BTStatus { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; bool x17; bool x18; bool x19; }*)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;
+ (id)state2String:(struct BTStatus { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; bool x17; bool x18; bool x19; }*)arg1;

- (unsigned long long)atvState;
- (id)description;
- (float)maxBandwidth;
- (int)maxHAPConnections;
- (float)minBandwidth;
- (void)setAtvState:(unsigned long long)arg1;
- (void)setMaxBandwidth:(float)arg1;
- (void)setMaxHAPConnections:(int)arg1;
- (void)setMinBandwidth:(float)arg1;
- (void)setState:(struct BTStatus { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; bool x17; bool x18; bool x19; })arg1;
- (struct BTStatus { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; bool x17; bool x18; bool x19; })state;

@end
