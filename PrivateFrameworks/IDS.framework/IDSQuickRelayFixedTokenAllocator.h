/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSQuickRelayFixedTokenAllocator : NSObject {
    NSData * _appleID;
    NSNumber * _relayCombinedSoftwareID;
    NSData * _relayIP;
    NSNumber * _relayPort;
    NSData * _relaySessionID;
    NSData * _relaySessionKey;
    NSData * _relaySessionToken;
}

@property (copy) NSData *appleID;
@property (copy) NSNumber *relayCombinedSoftwareID;
@property (copy) NSData *relayIP;
@property (copy) NSNumber *relayPort;
@property (copy) NSData *relaySessionID;
@property (copy) NSData *relaySessionKey;
@property (copy) NSData *relaySessionToken;

- (void).cxx_destruct;
- (bool)_isSessionInfoValid:(id)arg1;
- (id)_parseQuickRelayDefaults;
- (void)_setAllValuesFromDictionary:(id)arg1;
- (id)appleID;
- (id)initWithDefaults;
- (id)initWithDictionary:(id)arg1;
- (id)relayCombinedSoftwareID;
- (id)relayIP;
- (id)relayPort;
- (id)relaySessionID;
- (id)relaySessionKey;
- (id)relaySessionToken;
- (void)setAppleID:(id)arg1;
- (void)setRelayCombinedSoftwareID:(id)arg1;
- (void)setRelayIP:(id)arg1;
- (void)setRelayPort:(id)arg1;
- (void)setRelaySessionID:(id)arg1;
- (void)setRelaySessionKey:(id)arg1;
- (void)setRelaySessionToken:(id)arg1;

@end
