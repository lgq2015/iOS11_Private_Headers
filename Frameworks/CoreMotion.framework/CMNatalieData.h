/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMNatalieData : CMLogItem {
    double  fBasalNatalies;
    double  fMets;
    double  fNatalies;
    long long  fRecordId;
    long long  fSession;
    NSUUID * fSourceId;
    double  fStartDate;
}

@property (nonatomic, readonly) NSNumber *basalNatalies;
@property (nonatomic, readonly) NSNumber *mets;
@property (nonatomic, readonly) NSNumber *natalies;
@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) long long session;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)maxNatalieEntries;
+ (id)sessionName:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)basalNatalies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 session:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7;
- (id)mets;
- (id)natalies;
- (long long)recordId;
- (long long)session;
- (id)sourceId;
- (id)startDate;

@end
