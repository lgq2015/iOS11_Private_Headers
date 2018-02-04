/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNManager : NSObject <NEPrettyDescription> {
    NEConfiguration * _configuration;
    NEVPNConnection * _connection;
    bool  _hasLoaded;
    bool  _notificationSent;
}

@property (copy) NEConfiguration *configuration;
@property (readonly) NEVPNConnection *connection;
@property (getter=isEnabled) bool enabled;
@property bool hasLoaded;
@property (copy) NSString *localizedDescription;
@property bool notificationSent;
@property (getter=isOnDemandEnabled) bool onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (retain) NEVPNProtocol *protocol;
@property (retain) NEVPNProtocol *protocolConfiguration;

+ (id)loadedManagers;
+ (id)mapError:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)additionalSetup;
- (id)configuration;
- (id)connection;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)hasLoaded;
- (id)init;
- (id)initWithGrade:(long long)arg1 connection:(id)arg2;
- (bool)isEnabled;
- (bool)isOnDemandEnabled;
- (bool)isProtocolTypeValid:(long long)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (id)localizedDescription;
- (bool)notificationSent;
- (id)onDemandRules;
- (id)protocol;
- (id)protocolConfiguration;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setNotificationSent:(bool)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setProtocolConfiguration:(id)arg1;

@end
