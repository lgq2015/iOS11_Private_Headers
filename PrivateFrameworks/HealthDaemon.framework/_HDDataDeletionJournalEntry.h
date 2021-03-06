/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataDeletionJournalEntry : HDJournalEntry {
    HKObject * _dataObject;
    bool  _restrictSource;
}

@property (nonatomic, readonly) HKObject *dataObject;
@property (nonatomic, readonly) bool restrictSource;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataObject:(id)arg1 restrictSource:(bool)arg2;
- (bool)restrictSource;

@end
