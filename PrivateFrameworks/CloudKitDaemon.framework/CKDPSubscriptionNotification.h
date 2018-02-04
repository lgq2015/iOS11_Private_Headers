/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {
    NSMutableArray * _additionalFields;
    CKDPSubscriptionNotificationAlert * _alert;
    NSString * _collapseIdKey;
    struct { 
        unsigned int shouldBadge : 1; 
        unsigned int shouldSendContentAvailable : 1; 
        unsigned int shouldSendMutableContent : 1; 
    }  _has;
    bool  _shouldBadge;
    bool  _shouldSendContentAvailable;
    bool  _shouldSendMutableContent;
}

@property (nonatomic, retain) NSMutableArray *additionalFields;
@property (nonatomic, retain) CKDPSubscriptionNotificationAlert *alert;
@property (nonatomic, retain) NSString *collapseIdKey;
@property (nonatomic, readonly) bool hasAlert;
@property (nonatomic, readonly) bool hasCollapseIdKey;
@property (nonatomic) bool hasShouldBadge;
@property (nonatomic) bool hasShouldSendContentAvailable;
@property (nonatomic) bool hasShouldSendMutableContent;
@property (nonatomic) bool shouldBadge;
@property (nonatomic) bool shouldSendContentAvailable;
@property (nonatomic) bool shouldSendMutableContent;

+ (Class)additionalFieldsType;

- (void).cxx_destruct;
- (void)addAdditionalFields:(id)arg1;
- (id)additionalFields;
- (id)additionalFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalFieldsCount;
- (id)alert;
- (void)clearAdditionalFields;
- (id)collapseIdKey;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlert;
- (bool)hasCollapseIdKey;
- (bool)hasShouldBadge;
- (bool)hasShouldSendContentAvailable;
- (bool)hasShouldSendMutableContent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdditionalFields:(id)arg1;
- (void)setAlert:(id)arg1;
- (void)setCollapseIdKey:(id)arg1;
- (void)setHasShouldBadge:(bool)arg1;
- (void)setHasShouldSendContentAvailable:(bool)arg1;
- (void)setHasShouldSendMutableContent:(bool)arg1;
- (void)setShouldBadge:(bool)arg1;
- (void)setShouldSendContentAvailable:(bool)arg1;
- (void)setShouldSendMutableContent:(bool)arg1;
- (bool)shouldBadge;
- (bool)shouldSendContentAvailable;
- (bool)shouldSendMutableContent;
- (void)writeTo:(id)arg1;

@end
