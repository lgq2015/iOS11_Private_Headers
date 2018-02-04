/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface _AAUIDataclassOptionCache : NSObject {
    struct NSDictionary { Class x1; } * _dataclassOptions;
    NSArray * _filteredDataclasses;
}

@property (nonatomic, copy) NSDictionary *dataclassOptions;
@property (nonatomic, copy) NSArray *filteredDataclasses;

- (void).cxx_destruct;
- (struct NSDictionary { Class x1; }*)dataclassOptions;
- (id)filteredDataclasses;
- (id)initWithDataclassOptions:(struct NSDictionary { Class x1; }*)arg1;
- (void)setDataclassOptions:(struct NSDictionary { Class x1; }*)arg1;
- (void)setFilteredDataclasses:(id)arg1;

@end
