/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropNode : NSObject {
    bool  _classroom;
    bool  _classroomCourse;
    bool  _classroomGroup;
    NSString * _contactIdentifier;
    UIImage * _displayIcon;
    NSString * _displayName;
    bool  _me;
    bool  _monogram;
    id  _node;
    NSString * _realName;
    NSString * _secondaryName;
    struct __SFOperation { } * _sender;
    bool  _supportsFMF;
    bool  _supportsMixedTypes;
    bool  _supportsPasses;
    bool  _unknown;
}

@property (getter=isClassroom) bool classroom;
@property (getter=isClassroomCourse) bool classroomCourse;
@property (getter=isclassroomGroup) bool classroomGroup;
@property (retain) NSString *contactIdentifier;
@property (retain) UIImage *displayIcon;
@property (retain) NSString *displayName;
@property (getter=isMe) bool me;
@property (getter=isMonogram) bool monogram;
@property (retain) id node;
@property (retain) NSString *realName;
@property (retain) NSString *secondaryName;
@property (readonly) bool supportsFMF;
@property (readonly) bool supportsMixedTypes;
@property (readonly) bool supportsPasses;
@property (getter=isUnknown) bool unknown;

+ (id)nodeWithSFNode:(struct __SFNode { }*)arg1;

- (void).cxx_destruct;
- (void)cancelSend;
- (id)contactIdentifier;
- (id)description;
- (id)displayIcon;
- (id)displayName;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long long)arg2 withResults:(id)arg3;
- (unsigned long long)hash;
- (id)init;
- (bool)isClassroom;
- (bool)isClassroomCourse;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (bool)isMonogram;
- (bool)isUnknown;
- (bool)isclassroomGroup;
- (id)node;
- (id)realName;
- (id)secondaryName;
- (void)setClassroom:(bool)arg1;
- (void)setClassroomCourse:(bool)arg1;
- (void)setClassroomGroup:(bool)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDisplayIcon:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setMe:(bool)arg1;
- (void)setMonogram:(bool)arg1;
- (void)setNode:(id)arg1;
- (void)setRealName:(id)arg1;
- (void)setSecondaryName:(id)arg1;
- (void)setUnknown:(bool)arg1;
- (void)simulateFakeTransferWithSessionID:(id)arg1;
- (void)startSendForBundleID:(id)arg1 sessionID:(id)arg2 items:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (bool)supportsFMF;
- (bool)supportsMixedTypes;
- (bool)supportsPasses;
- (void)updateWithSFNode:(struct __SFNode { }*)arg1;

@end
