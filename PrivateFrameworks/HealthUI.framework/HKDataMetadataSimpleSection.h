/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataMetadataSimpleSection : HKDataMetadataSection {
    NSMutableArray * _rows;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *rows;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)addText:(id)arg1 detail:(id)arg2;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (unsigned long long)numberOfRowsInSection;
- (id)rows;
- (id)sectionTitle;
- (void)setRows:(id)arg1;
- (id)title;

@end
