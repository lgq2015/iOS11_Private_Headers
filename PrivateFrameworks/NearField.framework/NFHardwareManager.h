/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFHardwareManager : NSObject <NFHardwareManagerCallbacks, NSXPCConnectionDelegate> {
    NSXPCConnection * _connection;
    bool  _didPreWarm;
    NSMutableSet * _eventListeners;
    bool  _hasEventListener;
    unsigned int  _hwSupport;
    NSArray * _secureElements;
    NSDictionary * _secureElementsById;
    NSMutableSet * _sessions;
}

@property (readonly) NSUUID *blessedUser;
@property (readonly) NFHardwareControllerInfo *controllerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHardwareManager;

- (void)_connectIfNeeded;
- (bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2;
- (bool)areSessionsAllowed;
- (id)blessedUser;
- (id)boosterInfo;
- (unsigned int)checkUserBlessing:(id)arg1;
- (id)controllerInfo;
- (void)dealloc;
- (void)didInterruptXPCConnection:(id)arg1;
- (void)didInvalidateXPCConnection:(id)arg1;
- (bool)expressModesEnabled;
- (id)expressTransitIdentifier;
- (id)getBoosterInfo;
- (id)getControllerInfo;
- (id)getDieID;
- (unsigned int)getHwSupport;
- (id)getSecureElementInfo;
- (bool)hasCard;
- (id)hostEmulationLog;
- (id)init;
- (void)invalidateConnection;
- (bool)isExpressAppletTypeSupported:(unsigned char)arg1;
- (bool)isExpressModeSupported;
- (bool)isInRestrictedMode;
- (bool)preWarm;
- (id)pushSignedRF:(id)arg1;
- (void)refreshSecureElements;
- (void)registerEventListener:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)rfSettings;
- (bool)secureElementBootHistory:(id*)arg1;
- (id)secureElementWithIdentifier:(id)arg1;
- (void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(bool)arg2;
- (id)secureElements;
- (void)sessionDidEnd:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (unsigned int)setBlessedUser:(id)arg1 keybagUUID:(id)arg2 withAuthorization:(id)arg3;
- (unsigned int)setBlessedUser:(id)arg1 withAuthorization:(id)arg2;
- (bool)setFieldDetectEnabled:(bool)arg1;
- (id)startContactlessPaymentSession:(id /* block */)arg1;
- (id)startContactlessSession:(id /* block */)arg1;
- (id)startContactlessUICCSession:(id /* block */)arg1;
- (id)startECommercePaymentSession:(id /* block */)arg1;
- (id)startFieldDetectSession:(id /* block */)arg1;
- (id)startLoyaltyAndContactlessPaymentSession:(id /* block */)arg1;
- (id)startNdefTagSession:(id /* block */)arg1;
- (id)startPeerPaymentSession:(id /* block */)arg1;
- (id)startReaderSession:(id /* block */)arg1;
- (id)startSecureElementManagerSession:(id /* block */)arg1;
- (id)startSecureElementManagerSessionWithPriority:(id /* block */)arg1;
- (id)startSecureElementSession:(id)arg1 didStartCallback:(id /* block */)arg2;
- (id)startSesHatSession:(id /* block */)arg1;
- (id)startValueAddedServiceSession:(id /* block */)arg1;
- (id)startValueAddedServiceSession:(id)arg1 callback:(id /* block */)arg2;
- (bool)triggerDelayedWake:(unsigned char)arg1;
- (void)unregisterEventListener:(id)arg1;
- (void)updateHWSupport;

@end
