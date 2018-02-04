/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDINetworkSession : NSObject {
    void * _imp;
}

@property (nonatomic) unsigned long long connectionPolicy;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *localName;
@property (nonatomic, readonly) NSString *networkName;
@property (nonatomic, readonly) unsigned long long networkPort;

+ (id)defaultSession;

- (bool)addConnection:(id)arg1;
- (bool)addContact:(id)arg1;
- (bool)addOrRemoveConnection:(id)arg1 add:(bool)arg2;
- (unsigned long long)connectionPolicy;
- (id)connections;
- (id)contacts;
- (void)contactsChanged;
- (void)dealloc;
- (unsigned int)destinationEndpoint;
- (id)init;
- (bool)isEnabled;
- (id)localName;
- (id)networkName;
- (unsigned long long)networkPort;
- (void)refreshBonjourName;
- (bool)removeConnection:(id)arg1;
- (bool)removeContact:(id)arg1;
- (void)sessionChanged;
- (void)setConnectionPolicy:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStateToEntity;
- (unsigned int)sourceEndpoint;
- (void)updateFromEntity;

@end
