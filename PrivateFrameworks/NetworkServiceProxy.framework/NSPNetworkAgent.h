/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPNetworkAgent : NSObject <NWNetworkAgent> {
    NSData * _agentData;
    NSPAppRule * _appRule;
    NSPConfiguration * _configuration;
    unsigned char  _dataDigest;
    <NSPNetworkAgentDelegate> * _delegate;
    NSData * _keybag;
    bool  active;
    NSString * agentDescription;
    NSUUID * agentUUID;
    bool  kernelActivated;
    bool  userActivated;
    bool  voluntary;
}

@property (getter=isActive, nonatomic) bool active;
@property (retain) NSData *agentData;
@property (nonatomic, copy) NSString *agentDescription;
@property (nonatomic, copy) NSUUID *agentUUID;
@property (retain) NSPAppRule *appRule;
@property (retain) NSPConfiguration *configuration;
@property <NSPNetworkAgentDelegate> *delegate;
@property (getter=isKernelActivated, nonatomic) bool kernelActivated;
@property (retain) NSData *keybag;
@property (getter=isNetworkProvider, nonatomic) bool networkProvider;
@property (getter=isNexusProvider, nonatomic) bool nexusProvider;
@property (getter=isSpecificUseOnly, nonatomic) bool specificUseOnly;
@property (nonatomic) bool supportsBrowseRequests;
@property (getter=isUserActivated, nonatomic) bool userActivated;
@property (getter=isVoluntary, nonatomic) bool voluntary;

+ (id)agentDomain;
+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentData;
- (id)agentDescription;
- (id)agentUUID;
- (id)appRule;
- (bool)assertAgentWithOptions:(id)arg1;
- (id)configuration;
- (id)copyAgentData;
- (id)delegate;
- (id)init;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isKernelActivated;
- (bool)isUserActivated;
- (bool)isVoluntary;
- (id)keybag;
- (void)parseAgentData;
- (void)setActive:(bool)arg1;
- (void)setAgentData:(id)arg1;
- (void)setAgentDescription:(id)arg1;
- (void)setAgentUUID:(id)arg1;
- (void)setAppRule:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKernelActivated:(bool)arg1;
- (void)setKeybag:(id)arg1;
- (void)setUserActivated:(bool)arg1;
- (void)setVoluntary:(bool)arg1;
- (void)unassertAgentWithOptions:(id)arg1;

@end
