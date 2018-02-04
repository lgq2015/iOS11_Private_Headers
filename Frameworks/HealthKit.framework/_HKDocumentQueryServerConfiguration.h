/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDocumentQueryServerConfiguration : HKQueryServerConfiguration {
    bool  _includeDocumentData;
    unsigned long long  _limit;
    NSArray * _sortDescriptors;
}

@property (nonatomic) bool includeDocumentData;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, copy) NSArray *sortDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeDocumentData;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (void)setIncludeDocumentData:(bool)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end