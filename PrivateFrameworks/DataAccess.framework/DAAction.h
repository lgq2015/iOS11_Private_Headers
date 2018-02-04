/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAAction : NSObject <NSCoding> {
    int  _changeId;
    id  _changedItem;
    id  _forwardedAttendeeUUIDs;
    id  _forwardedAttendees;
    id  _instanceId;
    unsigned long long  _itemChangeType;
    id  _serverId;
}

@property (nonatomic) int changeId;
@property (setter=_setChangedItem:, nonatomic, retain) id changedItem;
@property (nonatomic, retain) id forwardedAttendeeUUIDs;
@property (nonatomic, retain) id forwardedAttendees;
@property (nonatomic, retain) id instanceId;
@property (nonatomic) unsigned long long itemChangeType;
@property (nonatomic, retain) id serverId;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (void).cxx_destruct;
- (void)_setChangedItem:(id)arg1;
- (int)changeId;
- (id)changedItem;
- (/* Warning: unhandled struct encoding: '{ASContact=#@@ii@i@?i@}' */ struct ASContact { Class x1; id x2; int x3; int x4; id x5; id /* block */ x6; int x7; id x8; }*)contact;
- (id)deletedContactID;
- (id)deletedEventID;
- (id)deletedNoteID;
- (id)deletedToDoID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (/* Warning: unhandled struct encoding: '{ASEvent=#@@ii@i@?i@}' */ struct ASEvent { Class x1; id x2; int x3; int x4; id x5; id /* block */ x6; int x7; id x8; }*)event;
- (id)forwardedAttendeeUUIDs;
- (id)forwardedAttendees;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4;
- (id)instanceId;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemChangeType;
- (id)message;
- (/* Warning: unhandled struct encoding: '{ASNote=#@@ii@i@?i@}' */ struct ASNote { Class x1; id x2; int x3; int x4; id x5; id /* block */ x6; int x7; id x8; }*)note;
- (id)serverId;
- (void)setChangeId:(int)arg1;
- (void)setForwardedAttendeeUUIDs:(id)arg1;
- (void)setForwardedAttendees:(id)arg1;
- (void)setInstanceId:(id)arg1;
- (void)setItemChangeType:(unsigned long long)arg1;
- (void)setServerId:(id)arg1;
- (id)stringForItemChangeType:(unsigned long long)arg1;
- (/* Warning: unhandled struct encoding: '{ASToDo=#@@ii@i@?i@}' */ struct ASToDo { Class x1; id x2; int x3; int x4; id x5; id /* block */ x6; int x7; id x8; }*)toDo;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS

- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)asClientID;
- (id)asInstanceID;
- (id)asServerID;

@end
