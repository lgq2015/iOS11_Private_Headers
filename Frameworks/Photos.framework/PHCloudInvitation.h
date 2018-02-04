/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudInvitation : PHObject {
    NSString * _albumGUID;
    NSString * _cloudGUID;
    int  _invitationState;
    int  _invitationStateLocal;
    NSNumber * _inviteeEmailKey;
    NSString * _inviteeFirstName;
    NSString * _inviteeFullName;
    NSString * _inviteeHashedPersonID;
    NSString * _inviteeLastName;
    NSDate * _inviteeSubscriptionDate;
    bool  _isMine;
}

@property (nonatomic, readonly) NSString *albumGUID;
@property (nonatomic, readonly) NSString *cloudGUID;
@property (nonatomic, readonly) int invitationState;
@property (nonatomic, readonly) NSString *invitationStateDescription;
@property (nonatomic, readonly) int invitationStateLocal;
@property (nonatomic, readonly) NSNumber *inviteeEmailKey;
@property (nonatomic, readonly) NSArray *inviteeEmails;
@property (nonatomic, readonly) NSString *inviteeFirstName;
@property (nonatomic, readonly) NSString *inviteeFullName;
@property (nonatomic, readonly) NSString *inviteeHashedPersonID;
@property (nonatomic, readonly) NSString *inviteeLastName;
@property (nonatomic, readonly) NSArray *inviteePhones;
@property (nonatomic, readonly) NSDate *inviteeSubscriptionDate;
@property (nonatomic, readonly) bool isMine;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)albumGUID;
- (Class)changeRequestClass;
- (id)cloudGUID;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (int)invitationState;
- (id)invitationStateDescription;
- (int)invitationStateLocal;
- (id)inviteeDisplayNameIncludingEmail:(bool)arg1;
- (id)inviteeEmailKey;
- (id)inviteeEmails;
- (id)inviteeFirstName;
- (id)inviteeFullName;
- (id)inviteeHashedPersonID;
- (id)inviteeLastName;
- (id)inviteePhones;
- (id)inviteeSubscriptionDate;
- (bool)isMine;

@end
