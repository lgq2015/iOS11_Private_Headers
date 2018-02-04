/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

@interface BiometricKitXPCExportedClientObject : NSObject {
    bool  _clientAppIsBackground;
    bool  _clientAppIsInactive;
    unsigned long long  _clientID;
    NSDictionary * _clientInfo;
    bool  _delegateRegistered;
    BiometricKitXPCExportedObject * _exportedObject;
}

@property (nonatomic, readonly) bool clientAppIsBackground;
@property (nonatomic, readonly) bool clientAppIsInactive;
@property (nonatomic, readonly) unsigned long long clientID;
@property (nonatomic, readonly, copy) NSDictionary *clientInfo;
@property (nonatomic, readonly) bool delegateRegistered;
@property (nonatomic, readonly) BiometricKitXPCExportedObject *exportedObject;

- (void).cxx_destruct;
- (bool)clientAppIsBackground;
- (bool)clientAppIsInactive;
- (unsigned long long)clientID;
- (id)clientInfo;
- (bool)delegateRegistered;
- (id)description;
- (void)enrollFeedback:(id)arg1;
- (void)enrollResult:(id)arg1;
- (void)enrollUpdate:(id)arg1;
- (id)exportedObject;
- (void)homeButtonPressed;
- (id)initWithClientID:(unsigned long long)arg1 clientInfo:(id)arg2 exportedObject:(id)arg3;
- (void)matchResult:(id)arg1 details:(id)arg2;
- (void)setClientAppIsBackground:(bool)arg1;
- (void)setClientAppIsInactive:(bool)arg1;
- (void)setDelegateRegistered:(bool)arg1;
- (void)statusMessage:(unsigned int)arg1;
- (void)taskResumeStatus:(int)arg1;
- (void)templateUpdate:(id)arg1 details:(id)arg2;
- (void)touchIDButtonPressed:(bool)arg1;

@end
