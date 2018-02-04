/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTuscanyEdge : NSObject <NSSecureCoding> {
    NSDictionary * _currentOnRampIndexList;
    double  _distance;
    unsigned long long  _index;
    NSString * _label;
    NSDate * _lastUsed;
    NPLocation * _location;
    NWEndpoint * _onRampEndpoint;
    NSDictionary * _onRampLists;
    NPWaldo * _parentWaldo;
    NWEndpoint * _probeEndpoint;
    bool  _probePending;
    NWEndpoint * _savedEndpoint;
}

@property (retain) NSDictionary *currentOnRampIndexList;
@property double distance;
@property unsigned long long index;
@property (readonly) NSString *label;
@property (retain) NSDate *lastUsed;
@property (readonly) NPLocation *location;
@property (readonly) NWEndpoint *onRampEndpoint;
@property (retain) NSDictionary *onRampLists;
@property NPWaldo *parentWaldo;
@property (readonly) NWEndpoint *probeEndpoint;
@property bool probePending;
@property (retain) NWEndpoint *savedEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compareByDistance:(id)arg1;
- (long long)currentIndex:(id)arg1;
- (id)currentOnRampIndexList;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)getCurrentOnRamp:(id)arg1;
- (id)getOnRamp:(long long)arg1 addressFamily:(id)arg2;
- (id)getPortFromEndpoint:(id)arg1 defaultPort:(id)arg2;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 index:(unsigned long long)arg2 onRampEndpoint:(id)arg3 probeEndpoint:(id)arg4 location:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)iterateOnRampsForAddressFamily:(id)arg1 withBlock:(id /* block */)arg2;
- (id)label;
- (id)lastUsed;
- (void)linkWithOnRamps;
- (id)location;
- (id)nextOnRampForLatency:(id)arg1 outIndex:(long long*)arg2;
- (id)onRampEndpoint;
- (id)onRampLists;
- (id)parentWaldo;
- (id)probeEndpoint;
- (bool)probePending;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;
- (id)savedEndpoint;
- (void)setCurrentIndex:(long long)arg1 addressFamily:(id)arg2;
- (void)setCurrentOnRampIndexList:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setLastUsed:(id)arg1;
- (void)setOnRampLists:(id)arg1;
- (void)setParentWaldo:(id)arg1;
- (void)setProbePending:(bool)arg1;
- (void)setSavedEndpoint:(id)arg1;
- (void)unresolve;
- (id)unsynthesizeAddresses:(id)arg1;

@end
