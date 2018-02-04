/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCSessionState : NSObject <NSSecureCoding> {
    NSString * _appInstallationID;
    bool  _appInstalled;
    bool  _complicationEnabled;
    bool  _iOSDeviceNeedsFirstUnlock;
    bool  _paired;
    NSSet * _pairedDevicesPairingIDs;
    NSString * _pairingID;
    bool  _reachable;
    unsigned long long  _remainingComplicationUserInfoTransfers;
}

@property (readonly, copy) NSString *appInstallationID;
@property (getter=isAppInstalled, readonly) bool appInstalled;
@property (getter=isComplicationEnabled, readonly) bool complicationEnabled;
@property (readonly) bool iOSDeviceNeedsFirstUnlock;
@property (getter=isPaired, readonly) bool paired;
@property (readonly, copy) NSSet *pairedDevicesPairingIDs;
@property (readonly, copy) NSString *pairingID;
@property (getter=isReachable, readonly) bool reachable;
@property (readonly) unsigned long long remainingComplicationUserInfoTransfers;
@property (readonly, copy) NSURL *watchDirectoryURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appInstallationID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)iOSDeviceNeedsFirstUnlock;
- (id)initWithCoder:(id)arg1;
- (id)initWithReachable:(bool)arg1 iOSDeviceNeedsFirstUnlock:(bool)arg2 activePairingID:(id)arg3;
- (id)initWithReachable:(bool)arg1 paired:(bool)arg2 appInstalled:(bool)arg3 complicationEnabled:(bool)arg4 remainingComplicationUserInfoTransfers:(unsigned long long)arg5 activePairingID:(id)arg6 pairedDevicesPairingIDs:(id)arg7 appInstallationID:(id)arg8;
- (id)initWithReachable:(bool)arg1 paired:(bool)arg2 appInstalled:(bool)arg3 complicationEnabled:(bool)arg4 remainingComplicationUserInfoTransfers:(unsigned long long)arg5 iOSDeviceNeedsFirstUnlock:(bool)arg6 pairingID:(id)arg7 pairedDevicesPairingIDs:(id)arg8 appInstallationID:(id)arg9;
- (bool)isAppInstalled;
- (bool)isComplicationEnabled;
- (bool)isPaired;
- (bool)isReachable;
- (id)pairedDevicesPairingIDs;
- (id)pairingID;
- (unsigned long long)remainingComplicationUserInfoTransfers;
- (id)watchDirectoryURL;

@end
