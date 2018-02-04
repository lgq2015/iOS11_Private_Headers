/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataMetadataReportSection : HKDataMetadataSection {
    NSString * _detailedReportName;
    HKHealthStore * _healthStore;
    HKSample * _sample;
}

@property (nonatomic, readonly) NSString *detailedReportName;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKSample *sample;

- (void).cxx_destruct;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)detailedReportName;
- (id)documentImageForXMLFiles;
- (id)healthStore;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id)sample;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;

@end
