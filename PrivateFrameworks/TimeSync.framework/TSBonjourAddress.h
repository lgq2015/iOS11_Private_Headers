/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSBonjourAddress : NSObject {
    struct _DNSServiceRef_t { } * _addressRef;
    NSString * _domain;
    bool  _hasIPv4Address;
    bool  _hasIPv6Address;
    NSString * _hostTarget;
    unsigned int  _interfaceIndex;
    NSString * _interfaceName;
    unsigned int  _ipv4Address;
    unsigned char  _ipv6Address;
    NSString * _name;
    unsigned short  _port;
    NSObject<OS_dispatch_queue> * _queue;
    struct _DNSServiceRef_t { } * _resolveRef;
    NSString * _type;
}

@property (nonatomic) bool hasIPv4Address;
@property (nonatomic) bool hasIPv6Address;
@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic) unsigned int ipv4Address;
@property (nonatomic, readonly) char *ipv6Address;

- (void)dealloc;
- (bool)hasIPv4Address;
- (bool)hasIPv6Address;
- (id)init;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3 onInterfaceIndex:(unsigned int)arg4 andName:(id)arg5;
- (id)interfaceName;
- (unsigned int)ipv4Address;
- (char *)ipv6Address;
- (void)pokeIPv6Destination;
- (void)resolvedWithHostTarget:(const char *)arg1 port:(unsigned short)arg2;
- (void)setHasIPv4Address:(bool)arg1;
- (void)setHasIPv6Address:(bool)arg1;
- (void)setIpv4Address:(unsigned int)arg1;
- (bool)startAddressLookupWithError:(id*)arg1;
- (bool)startResolveWithError:(id*)arg1;
- (bool)stopAddressLookup;
- (bool)stopResolve;

@end
