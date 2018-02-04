/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAlbumChange : NSObject {
    NSString * _GUID;
    NSString * _URLString;
    MSASInvitation * _invitation;
    NSString * _name;
    NSString * _ownerEmail;
    NSString * _ownerFirstName;
    NSString * _ownerFullName;
    NSString * _ownerLastName;
    NSString * _ownerPersonID;
    bool  _wasDeleted;
}

@property (nonatomic, retain) NSString *GUID;
@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, retain) MSASInvitation *invitation;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, copy) NSString *ownerEmail;
@property (nonatomic, copy) NSString *ownerFirstName;
@property (nonatomic, copy) NSString *ownerFullName;
@property (nonatomic, copy) NSString *ownerLastName;
@property (nonatomic, copy) NSString *ownerPersonID;
@property (nonatomic) bool wasDeleted;

- (void).cxx_destruct;
- (id)GUID;
- (id)URLString;
- (id)description;
- (id)invitation;
- (id)name;
- (id)ownerEmail;
- (id)ownerFirstName;
- (id)ownerFullName;
- (id)ownerLastName;
- (id)ownerPersonID;
- (void)setGUID:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwnerEmail:(id)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerFullName:(id)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setURLString:(id)arg1;
- (void)setWasDeleted:(bool)arg1;
- (bool)wasDeleted;

@end
