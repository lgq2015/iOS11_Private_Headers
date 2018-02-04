/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListSection : NSObject <BSDescriptionProviding> {
    NSString * _identifier;
    NSMutableArray * _notificationRequests;
    NSString * _title;
}

@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *notificationRequests;
@property (nonatomic, retain) NSDate *sectionDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)_indexOfRequestMatchingRequest:(id)arg1;
- (unsigned long long)_insertionIndexForNotificationRequest:(id)arg1;
- (bool)_isNotificationRequest:(id)arg1 matchingRequest:(id)arg2;
- (unsigned long long)addNotificationRequest:(id)arg1;
- (id)allNotificationRequests;
- (bool)containsNotificationRequestMatchingRequest:(id)arg1;
- (long long)count;
- (id)debugDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (long long)indexForNotificationRequest:(id)arg1;
- (unsigned long long)indexForNotificationRequestMatchingRequest:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (unsigned long long)insertionIndexForNotificationRequest:(id)arg1;
- (id)notificationRequestAtIndex:(unsigned long long)arg1;
- (id)notificationRequests;
- (unsigned long long)removeNotificationRequest:(id)arg1;
- (unsigned long long)replaceNotificationRequest:(id)arg1;
- (id)sectionDate;
- (void)setNotificationRequests:(id)arg1;
- (void)setSectionDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)title;

@end
