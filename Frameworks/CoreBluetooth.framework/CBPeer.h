/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPeer : NSObject <NSCopying> {
    long long  _hostState;
    NSUUID * _identifier;
    bool  _isLinkEncrypted;
    CBManager * _manager;
    unsigned long long  _mtuLength;
    long long  _pairingState;
    long long  _role;
}

@property (nonatomic) long long hostState;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) bool isLinkEncrypted;
@property (nonatomic) CBManager *manager;
@property (nonatomic) unsigned long long mtuLength;
@property (nonatomic) long long pairingState;
@property (nonatomic) long long role;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)handleHostStateUpdated:(id)arg1;
- (void)handleLinkEncryptionChanged:(id)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleMsg:(int)arg1 args:(id)arg2;
- (long long)hostState;
- (id)identifier;
- (id)initWithInfo:(id)arg1 manager:(id)arg2;
- (bool)isLinkEncrypted;
- (id)manager;
- (unsigned long long)mtuLength;
- (long long)pairingState;
- (long long)role;
- (void)setHostState:(long long)arg1;
- (void)setIsLinkEncrypted:(bool)arg1;
- (void)setManager:(id)arg1;
- (void)setMtuLength:(unsigned long long)arg1;
- (void)setPairingState:(long long)arg1;
- (void)setRole:(long long)arg1;

@end
