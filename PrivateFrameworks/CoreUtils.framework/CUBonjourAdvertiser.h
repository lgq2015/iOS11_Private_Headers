/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBonjourAdvertiser : NSObject {
    bool  _activateCalled;
    bool  _activated;
    unsigned long long  _advertiseFlags;
    bool  _advertiseFlagsChanged;
    struct BonjourAdvertiserPrivate { } * _bonjourAdvertiser;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _domain;
    bool  _domainChanged;
    unsigned int  _interfaceIndex;
    bool  _interfaceIndexChanged;
    NSString * _interfaceName;
    bool  _interfaceNameChanged;
    bool  _invalidateCalled;
    NSString * _label;
    NSString * _name;
    bool  _nameChanged;
    int  _port;
    bool  _portChanged;
    NSString * _serviceType;
    bool  _serviceTypeChanged;
    NSDictionary * _txtDictionary;
    bool  _txtDictionaryChanged;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    bool  _updating;
}

@property (nonatomic) unsigned long long advertiseFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic) unsigned int interfaceIndex;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int port;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) NSDictionary *txtDictionary;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activateSafeInvokeBlock:(id /* block */)arg1;
- (void)_update:(bool)arg1;
- (void)_updateLocked:(bool)arg1;
- (void)_updateTXTDictionary;
- (void)activate;
- (unsigned long long)advertiseFlags;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)domain;
- (id)init;
- (unsigned int)interfaceIndex;
- (id)interfaceName;
- (void)invalidate;
- (id)label;
- (id)name;
- (void)performUpdate:(id /* block */)arg1;
- (int)port;
- (id)serviceType;
- (void)setAdvertiseFlags:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setInterfaceIndex:(unsigned int)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setServiceType:(id)arg1;
- (void)setTxtDictionary:(id)arg1;
- (id)txtDictionary;

@end
