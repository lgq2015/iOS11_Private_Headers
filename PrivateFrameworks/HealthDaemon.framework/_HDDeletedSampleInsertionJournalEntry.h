/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry {
    HDDataOriginProvenance * _provenance;
    NSArray * _samples;
}

@property (nonatomic, readonly, copy) HDDataOriginProvenance *provenance;
@property (nonatomic, readonly, copy) NSArray *samples;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodableDeletedSamples:(id)arg1 provenance:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)provenance;
- (id)samples;

@end
