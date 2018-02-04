/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTActionInfo : NSObject <BSDescriptionProviding> {
    long long  _actionType;
    NSDictionary * _context;
    NSString * _publisherBulletinID;
    NSString * _recordID;
    NSString * _sectionID;
}

@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSDictionary *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *publisherBulletinID;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, copy) NSString *sectionID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)actionType;
- (id)context;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithActionType:(long long)arg1 publisherBulletinID:(id)arg2 recordID:(id)arg3 sectionID:(id)arg4 context:(id)arg5;
- (id)publisherBulletinID;
- (id)recordID;
- (id)sectionID;
- (void)setActionType:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
