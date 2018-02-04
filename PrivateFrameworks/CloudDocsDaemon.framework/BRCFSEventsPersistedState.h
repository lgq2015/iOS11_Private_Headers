/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSEventsPersistedState : BRCPersistedState <NSCopying> {
    unsigned long long  _latestEventID;
    unsigned long long  _rootID;
    NSUUID * _streamUUID;
}

@property (nonatomic) unsigned long long latestEventID;
@property (nonatomic) unsigned long long rootID;
@property (nonatomic, retain) NSUUID *streamUUID;

+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatestEventID:(unsigned long long)arg1 streamUUID:(id)arg2 rootID:(unsigned long long)arg3;
- (unsigned long long)latestEventID;
- (unsigned long long)rootID;
- (void)setLatestEventID:(unsigned long long)arg1;
- (void)setRootID:(unsigned long long)arg1;
- (void)setStreamUUID:(id)arg1;
- (id)streamUUID;

@end
