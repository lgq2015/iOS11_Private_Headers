/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSubscription : NSObject {
    bool  _canRetry;
    NSDate * _dateAdded;
    NSString * _errorMessage;
    NSString * _groupID;
    bool  _notificationsEnabled;
    NSURL * _pollingURL;
    NSString * _subscriptionID;
    unsigned long long  _subscriptionOrigin;
    unsigned long long  _subscriptionType;
    NSString * _tagID;
    NSString * _title;
    NSURL * _url;
    unsigned long long  _zone;
}

@property (nonatomic, readonly) bool canRetry;
@property (nonatomic, readonly, copy) NSDate *dateAdded;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, readonly) bool notificationsEnabled;
@property (nonatomic, readonly) NSURL *pollingURL;
@property (nonatomic, readonly, copy) NSString *subscriptionID;
@property (nonatomic, readonly) unsigned long long subscriptionOrigin;
@property (nonatomic, readonly) unsigned long long subscriptionType;
@property (nonatomic, retain) NSString *tagID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) unsigned long long zone;

+ (id)pendingSubscriptionWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
+ (id)subscriptionWithSubscriptionID:(id)arg1 dictionaryRepresentation:(id)arg2;
+ (id)subscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 type:(unsigned long long)arg3 origin:(unsigned long long)arg4 groupID:(id)arg5 dateAdded:(id)arg6 notificationsEnabled:(bool)arg7 zone:(unsigned long long)arg8;

- (void).cxx_destruct;
- (id)asCKRecord;
- (bool)canRetry;
- (long long)comparePriority:(id)arg1;
- (id)dateAdded;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorMessage;
- (id)groupID;
- (id)initWithSubscriptionID:(id)arg1 tagID:(id)arg2 groupID:(id)arg3 dateAdded:(id)arg4 subscriptionType:(unsigned long long)arg5 origin:(unsigned long long)arg6 notificationsEnabled:(bool)arg7 zone:(unsigned long long)arg8;
- (id)initWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
- (bool)isDeprecated;
- (bool)isTypeAutoFavoriteTag;
- (bool)isTypeGroupableTag;
- (bool)isTypeIgnoredTag;
- (bool)isTypeMutedTag;
- (bool)isTypePending;
- (bool)isTypeTag;
- (bool)notificationsEnabled;
- (id)pollingURL;
- (unsigned long long)priority;
- (void)setGroupID:(id)arg1;
- (void)setTagID:(id)arg1;
- (id)subscriptionID;
- (unsigned long long)subscriptionOrigin;
- (unsigned long long)subscriptionType;
- (id)tagID;
- (id)title;
- (id)url;
- (unsigned long long)zone;

@end
