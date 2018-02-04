/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKParticipantForSorting : NSObject <NSCopying> {
    NSString * _cachedDisplayName;
    NSString * _firstName;
    bool  _isEmail;
    bool  _isPhone;
    NSString * _lastName;
    EKParticipant * _participant;
}

@property (nonatomic, copy) NSString *cachedDisplayName;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic) bool isEmail;
@property (nonatomic) bool isPhone;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic) EKParticipant *participant;

+ (id)contactStore;
+ (id)participantForSortingWithEKParticipant:(id)arg1;

- (void).cxx_destruct;
- (id)cachedDisplayName;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)firstName;
- (bool)isEmail;
- (bool)isPhone;
- (id)lastName;
- (id)participant;
- (void)setCachedDisplayName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIsEmail:(bool)arg1;
- (void)setIsPhone:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setParticipant:(id)arg1;

@end
